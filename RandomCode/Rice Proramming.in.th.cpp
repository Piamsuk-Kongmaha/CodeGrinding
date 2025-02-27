#include<bits/stdc++.h>

using namespace std;

int k, cnt;
double p ,q ,m ,b;
pair<double, int> pii[100001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> k;
	
	for( int i = 0 ; i < k ; ++i ){
        cin >> p >> q ;
        pii[i].second = q ;
        pii[i].first = p / q ;
    }
    
    sort(pii, pii+k);
    cin >> m ;
    for( int i = 1 ; i <= m ; ++i ){
        cin >> b ;
        double ans = 0 ;
        while( 1 ){
            double f = pii[cnt].first ;
            int s = pii[cnt].second ;
            if( b > s ){
                b -= s ;
                ans += s * f ;
                ++cnt ;
            }else {
                ans += b * f ;
                pii[cnt].second -= b ;
                if( pii[cnt].second == 0 )++cnt ;
                break ;
            }
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
