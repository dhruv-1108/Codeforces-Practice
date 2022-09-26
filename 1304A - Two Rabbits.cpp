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
		ll X, Y, a, b;
		cin >> X >>Y >> a >> b;

		// Brute Force

		// int num = 0;

		// while(true)
		// {
		// 	if(X == Y || Y < X)
		// 		break;

		// 	if(X < Y)
		// 	{
		// 		X += a;
		// 		Y -= b;
		// 		num++;
		// 	}

		// }

		// if(X == Y)
		// 	cout << num << endl;
		// else
		// 	cout << "-1" << endl;

		// Optimised Code! 
		
		ll z = Y - X;
		ll y = a + b;

		if(z % y == 0)
			cout << (z/y) << endl;
		else
			cout << "-1\n";
	}

	return 0;
}