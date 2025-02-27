#include <bits/stdc++.h>

using namespace std;

typedef struct {
	char name;
	int point;
	int knockout;	
}PLA;


int main()
{
	PLA player[7];
	for (int i = 0; i < 7; i++)
	{
		player[i].name = 65+i;
		player[i].point = 0;
		player[i].knockout = 0;
	}
	
	char v[10000];
	int remain = 7;
	
	while (true)
	{
		cin >> v;
		
		if (strcmp(v, "!") == 0)
		{
			break;
		}
		
		for (int i = 0; i <= strlen(v); i++)
		{
			char votes = v[i];
			
			for (int j = 0; j < remain; j++)
			{
				if (player[j].name == votes && player[j].knockout == 0)
				{
					player[j].point++;
				}
			}
		}
		
		if (remain > 1)
		{
			PLA temp;
			for (int q = 0; q < remain -1; q++)
			{
				for (int t = 0; t  < remain - 1 -q; t++)
				{
					if (player[t].point < player[t+1].point)
					{
						temp = player[t];
						player[t] = player[t+1];
						player[t+1] = temp; 
					}else if(player[t].point == player[t+1].point)
					{
						if(player[t].name > player[t+1].name)
						{
							temp = player[t];
							player[t] = player[t+1];
							player[t+1] = temp; 
						}
					}
				}
			}
			if (player[remain-1].point != player[remain-2].point)
			{
				player[remain-1].knockout = 1;
				remain--;
			
		}
		
		}
	}
	
	cout << remain << endl;
	for (int i = 0; i < remain; i++)
	{
		cout << player[i].name << " " << player[i].point << endl;
	}
	return 0;
}
