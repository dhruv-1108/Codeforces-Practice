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

	int M = 0, C = 0;

	while(tc--)
	{
		ll mis, chris;
		cin >> mis >> chris;

		if(mis > chris)
			M++;
		if(chris > mis)
			C++;
	}

	if(M > C)
		cout << "Mishka";
	else if(C > M)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";

	return 0;
}