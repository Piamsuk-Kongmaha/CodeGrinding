#include <bits/stdc++.h>
using namespace std;



int main()
{
	const int DIM = 8;
	vector<vector<bool>> blocked(DIM, vector<bool>(DIM));
	for(int r = 0; r < DIM; r++)
	{
		string row;
		cin >> row;
		for(int c = 0; c < DIM; c++){
			blocked[r][c] = row[c] == '*';
		}
	}

	vector<int> queens(DIM);
	iota(queens.begin(), queens.end(), 0);
	int valid_num = 0;
	do{
		bool works = true;

		for(int c = 0; c < DIM; c++)
		{
			if(blocked[queens[c]][c]){
				works = false;
				break;
			}
		} 

		vector<bool> taken(DIM * 2 - 1);
		for(int c = 0; c < DIM;c++)
		{
			if(taken[c+queens[c]]){
				works = false;
			}
			taken[c+queens[c]] = true; 
		}

		taken = vector<bool>(DIM * 2 -1);
		for(int c = 0; c < DIM; c++)
		{
			if(taken[queens[c] - c + DIM - 1]){
				works = false;
				break;
			}
			taken[queens[c] - c + DIM - 1] = true; 
		}
		if(works) {
			valid_num++;
		}

	}while (next_permutation(queens.begin(), queens.end()));

	cout << valid_num << '\n';
}