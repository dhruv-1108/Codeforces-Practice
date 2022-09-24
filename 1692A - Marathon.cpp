// Time Complexity -> O(n)
// Space Complexity -> O(1)

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define ll long long
#define mp make_pair

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll tc;
	cin >> tc;

	while(tc--)
	{
		int dist[4];
		for(int i = 0; i < 4; ++i)
			cin >> dist[i];

		int ans = 0;
		
		for(int i =1; i < 4; i++)
		{
			if(dist[i] > dist[0])
				ans++;
		}

		cout << ans << endl;
	}
	return 0;
}