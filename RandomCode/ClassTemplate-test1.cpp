#include <bits/stdc++.h>

using namespace std;

int a[64][64];
int w,l,num = 3;

void fr(int posx,int posy)
{
	if (posx < 0 || posx >= w || posy < 0 || posy >= l)
	return;
	
	if (a[posy][posx] != 2)
	return;
	
	a[posy][posx] = num;
	
	fr(posx+1, posy);
	fr(posx-1, posy);
	fr(posx, posy+1);
	fr(posx, posy-1);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> w >> l;
	int s = min(w,l);
	vector<pair<int,int>> f;
	for(int i = 0; i < l ; i++)
	{
		for(int j = 0; j < w; j++)
		{
			char t;
			cin >> t;
			if (t == 'S')
			{
				a[i][j] = 1;
			}else if (t == 'P')
			{
				a[i][j] = 2;
			}else
			{
				a[i][j] = 0;
			}
		}
	}
	
	int x=0 , y=0;
	bool cf = 0;
	while(true)
	{
		bool curf = 1;
		for(int i = y; i<y+s; i++)
		{
			for(int  j=x+s-1; j>=x; j--)
			{
				if (a[i][j] == 0)
				{
					curf = 0;
					x=j+1;
					goto esc;
				}
			}
		}
		esc :
		if (curf){
			cf = 1;
			f.push_back({x,y});
			x++;
		}
		if (x+s-1>=w)
		{
			x = 0;
			y++;
		}
		if (y+s-1 >= l){
			if(!cf)
			{
				x = 0;
				y = 0;
				s--;
			}else
			{
				break;
			}
		}
	}
	for(int i = 0;i <l; i++)
	{
		for(int j = 0; j < w; j++)
		{
			if (a[i][j] == 2)
			{
				fr(j,i);
				num++;
			}
		}
	}
	
	int size = f.size(),mini = 9999999;
	for(int i = 0; i<size;i++)
	{
		unordered_set<int> temp;
		for(int j = f[i].second; j <f[i].second +s; j++)
		{
			for(int k = f[i].first; k < f[i].first+s; k++)
			{
				if (a[j][k]>= 2)
				{
					temp.insert(a[j][k]);
				}
			}
		}
		mini = min(int(temp.size()),mini);
	}
	
	
	cout << s*s << " " << mini;
	return 0;
		
}
