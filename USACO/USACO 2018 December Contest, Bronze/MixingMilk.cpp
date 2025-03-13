#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("mixmilk.in","r",stdin);
    vector<int> cap(3);
    vector<int> milk(3);
  
    
    for(int i = 0; i < 3; i++)
    {
        cin >> cap[i] >> milk[i];
    }

    for(int i = 0; i < 100; i++)
    {
        int b1 = i%3;
        int b2 = (i+1)%3;

        int amount = min(milk[b1], cap[b2] - milk[b2]);

        milk[b1] -= amount;
        milk[b2] += amount;
    }
    freopen ("mixmilk.out","w",stdout);
    for(auto i:milk) cout << i << '\n';
}
/*
10 3
11 4
12 5*/

/*
#include <bits/stdc++.h>

using namespace std;

const int N = 3;  // The number of buckets (which is 3)
const int TURN_NUM = 100;

int main() {
	freopen("mixmilk.in", "r", stdin);

	// capacity[i] is the maximum capacity of bucket i
	vector<int> capacity(N);
	// milk[i] is the current amount of milk in bucket i
	vector<int> milk(N);
	for (int i = 0; i < N; i++) { scanf("%d %d", &capacity[i], &milk[i]); }

	for (int i = 0; i < TURN_NUM; i++) {
		int bucket1 = i % N;
		int bucket2 = (i + 1) % N;

		
		int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

		milk[bucket1] -= amt;
		milk[bucket2] += amt;
	}

	freopen("mixmilk.out", "w", stdout);
	for (int m : milk) { cout << m << '\n'; }
}*/