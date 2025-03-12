#define taskname "77"
#pragma GCC target ("popcnt")
#include <bits/stdc++.h>
#define llong long long
 
using namespace std;
 
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};
 
bool Check3A(int r, int c, int x1, int y1, int x2, int y2) {
    int c1 = (x1 + y1) & 1;
    int c2 = (x2 + y2) & 1;
    
    if (c1 == 1 && c2 == 0) {
        if (y1 == 2 && x1 < x2) return true;
        if (y1 != 2 && x1 < x2 - 1) return true;
    }
    
    return false;
}
 
bool Check3(int r, int c, int x1, int y1, int x2, int y2) {
    if (r != 3 || (c & 1)) return false; 
    return Check3A(r, c, x1, y1, x2, y2) ||
           Check3A(r, c, x1 + 1, y1, c - x2, y2) || 
           Check3A(r, c, x2, y2, x1, y1) ||
           Check3A(r, c, x2 + 1, y2, c - x1, y1);
}
 
int Upper(int r, int c, int x1, int y1, int x2, int y2) { 
    if (r > c) return Upper(c, r, y1, x1, y2, x2);
    
    if (r == 1) return abs(x1 - x2) + 1;
    
    if (r == 2 && abs(x1 - x2) <= 1 && y1 != y2) 
        return max(x1 + x2, 2 * c - x1 - x2 + 2);
    
    int c3 = Check3(r, c, x1, y1, x2, y2);
    int c1 = (x1 + y1) & 1;
    int c2 = (x2 + y2) & 1;
    
    if (r * c % 2 == 0 && c1 != c2 && !c3) return r * c;
    if (r * c % 2 == 1 && c1 == 0 && c2 == 0 && !c3) return r * c;
    if (r * c % 2 == 0 && c1 == c2) return r * c - 1;
    if (r * c % 2 == 1 && c1 != c2) return r * c - 1;
    if (r * c % 2 == 1 && c1 == 1 && c2 == 1) return r * c - 2;
    if (r * c % 2 == 0 && c1 != c2 && c3) return r * c - 2;
    if (r * c % 2 == 1 && c1 == 0 && c2 == 0 && c3) return r * c - 2;
    
    return 0;
}
 
int Num(int x, int y, int r, int c) {
    return y * c + x;
}
 
struct Point {
    int x, y;
};
 
Point To_point(int u, int r, int c) {
    return {u % c, u / c};
}
 
vector<Point> BruteForce(int r, int c, int x1, int y1, int x2, int y2) {
    int s = Num(x1, y1, r, c), t = Num(x2, y2, r, c);
    
    queue<pair<llong, int>> Q;
    Q.push({1LL << s, s});
    
    map<pair<llong, int>, int> trace;
    trace[{1LL << s, s}] = -1;
    
    llong best = 0;
    while (!Q.empty()) {
        pair<llong, int> u = Q.front();
        Q.pop();
        
        Point Point_u = To_point(u.second, r, c);
        if (u.second == t) {
            if (__builtin_popcountll(u.first) > __builtin_popcountll(best)) 
                best = u.first;
            continue;
        }
        
        for (int i = 0; i < 4; ++i) {
            Point Point_v = {Point_u.x + dx[i], Point_u.y + dy[i]};
            if (Point_v.x < 0 || Point_v.x >= c || Point_v.y < 0 || Point_v.y >= r) 
                continue;
                
            int new_pos = Num(Point_v.x, Point_v.y, r, c);
            if (u.first & (1LL << new_pos)) continue;
            
            llong new_state = u.first | (1LL << new_pos);
            if (trace.count({new_state, new_pos})) continue;
            
            trace[{new_state, new_pos}] = u.second;
            Q.push({new_state, new_pos});
        }
    }
    
    vector<Point> ans;
    
    llong cur = best;
    while (cur != 0) {
        ans.push_back(To_point(t, r, c));
        
        int p = trace[{cur, t}];
        cur = cur & ~(1LL << t);
        t = p;
    }
    
    reverse(ans.begin(), ans.end());
    for (Point &p: ans) {
        ++p.x, ++p.y;
    }
    
    return ans;
}
 
vector<Point> Optimize(int r, int c, int x1, int y1, int x2, int y2, bool sw = false) {
    int up = Upper(r, c, x1, y1, x2, y2);
    
    for (int i = 1; i < c; ++i)
        if (x1 <= i && x2 > i)
            for (int j = 1; j <= r; ++j) {
                if (x1 == i && y1 == j) continue;
                if (x2 == i+1 && y2 == j) continue;
                
                // (x1, y1) -> (i, j), (i+1, j) -> (x2, y2)
                int up_1 = Upper(r, i, x1, y1, i, j);
                int up_2 = Upper(r, c-i, 1, j, x2-i, y2);
                
                if (up_1 + up_2 == up) {
                    vector<Point> ans = Optimize(r, i, x1, y1, i, j);
                    vector<Point> tmp = Optimize(r, c-i, 1, j, x2-i, y2);
                    
                    for (Point p: tmp) 
                        ans.push_back({p.x + i, p.y});
                    return ans;
                }
            }
    
    for (int i = 1; i < r; ++i)
        if (y1 <= i && y2 > i)
            for (int j = 1; j <= c; ++j) {
                if (x1 == j && y1 == i) continue;
                if (x2 == j && y2 == i + 1) continue;
                
                // (x1, y1) -> (j, i), (j, i+1) -> (x2, y2)
                int up_1 = Upper(i, c, x1, y1, j, i);
                int up_2 = Upper(r-i, c, j, 1, x2, y2-i);
                
                if (up_1 + up_2 == up) {
                    vector<Point> ans = Optimize(i, c, x1, y1, j, i);
                    vector<Point> tmp = Optimize(r-i, c, j, 1, x2, y2-i);
                    
                    for (Point p: tmp) 
                        ans.push_back({p.x, p.y + i});
                    return ans;
                }
            }
    
    if (sw) {
        for (int i = 2; i < min(x1, x2); ++i) {
            if ((i * r) & 1) continue;
            
            if (Upper(r, c-i, x1-i, y1, x2-i, y2) + i * r == up) {
                vector<Point> tmp = Optimize(r, c-i, x1-i, y1, x2-i, y2);
                vector<Point> ans;
                
                bool Fixed = false;
                
                for (int it = 0; it < (int)tmp.size(); ++it) {
                    if (!Fixed && it > 0 && tmp[it].x == 1 && tmp[it-1].x == 1) {
                        vector<Point> tmp2 = Optimize(r, i, i, tmp[it-1].y, i, tmp[it].y);
                        for (Point p: tmp2) 
                            ans.push_back(p);
                        Fixed = true;
                    }
                    
                    ans.push_back({tmp[it].x + i, tmp[it].y});
                }
                
                if (Fixed) return ans;
            }
        }
        
        for (int i = max(x1, x2) + 1; i <= c - 2; ++i) {
            if (((c-i) * r) & 1) continue;
            
            if (Upper(r, i, x1, y1, x2, y2) + (c - i) * r == up) {
                vector<Point> tmp = Optimize(r, i, x1, y1, x2, y2);
                vector<Point> ans;
                
                bool Fixed = false;
                for (int it = 0; it < (int)tmp.size(); ++it) {
                    if (!Fixed && it > 0 && tmp[it].x == i && tmp[it-1].x == i) {
                        vector<Point> tmp2 = Optimize(r, c-i, 1, tmp[it-1].y, 1, tmp[it].y);
                        for (int j = 0; j < (int)tmp2.size(); ++j) 
                            ans.push_back({tmp2[j].x + i, tmp2[j].y});
                        Fixed = true;
                    }
                    
                    ans.push_back(tmp[it]);
                }
                
                if (Fixed) return ans;
            }
        }
        
        for (int i = 2; i < min(y1, y2); ++i) {
            if ((i * c) & 1) continue;
            
            if (Upper(r-i, c, x1, y1-i, x2, y2-i) + i * c == up) {
                vector<Point> tmp = Optimize(r-i, c, x1, y1-i, x2, y2-i);
                vector<Point> ans;
                
                bool Fixed = false;
                
                for (int it = 0; it < (int)tmp.size(); ++it) {
                    if (!Fixed && it > 0 && tmp[it].y == 1 && tmp[it-1].y == 1) {
                        vector<Point> tmp2 = Optimize(i, c, tmp[it-1].x, i, tmp[it].x, i);
                        for (Point p: tmp2) 
                            ans.push_back(p);
                        Fixed = true;
                    }
                    
                    ans.push_back({tmp[it].x, tmp[it].y+i});
                }
                
                if (Fixed) return ans;
            }
        }
        
        for (int i = max(y1, y2) + 1; i <= r - 2; ++i) {
            if (((r-i) * c) & 1) continue;
            
            if (Upper(i, c, x1, y1, x2, y2) + (r - i) * c == up) {
                vector<Point> tmp = Optimize(i, c, x1, y1, x2, y2);
                vector<Point> ans;
                
                bool Fixed = false;
                for (int it = 0; it < (int)tmp.size(); ++it) {
                    if (!Fixed && it > 0 && tmp[it].y == i && tmp[it-1].y == i) {
                        vector<Point> tmp2 = Optimize(r-i, c, tmp[it-1].x, 1, tmp[it].x, 1);
                        for (int j = 0; j < (int)tmp2.size(); ++j) 
                            ans.push_back({tmp2[j].x, tmp2[j].y+i});
                        Fixed = true;
                    }
                    
                    ans.push_back(tmp[it]);
                }
                
                if (Fixed) return ans;
            }
        }
    }
    
    if (!sw) {
        vector<Point> ans = Optimize(r, c, x2, y2, x1, y1, true);
        reverse(ans.begin(), ans.end());
        return ans;
    } else {
        return BruteForce(r, c, x1-1, y1-1, x2-1, y2-1);
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int r, c, x1, y1, x2, y2;
        cin >> r >> c >> y1 >> x1 >> y2 >> x2;
        
        vector<Point> Path = Optimize(r, c, x1, y1, x2, y2);
        
        if ((int)Path.size() != r * c) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (int i = 1; i < r * c; ++i) {
                if (Path[i].x == Path[i-1].x + 1) cout << 'R';
                else if (Path[i].x == Path[i-1].x - 1) cout << 'L';
                else if (Path[i].y == Path[i-1].y + 1) cout << 'D';
                else if (Path[i].y == Path[i-1].y - 1) cout << 'U';
            }
            cout << '\n';
        }
    }
    
    return 0;
}