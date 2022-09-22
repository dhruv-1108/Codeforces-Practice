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
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	ll tc;
	cin >> tc;

	while(tc--)
	{
		string str, s1 = "",s2 = "";
		cin >> str;

		for(int i =0; i < (str.size()/2); i++)
		{
			s1 += str[i];
		}

		for(int i = str.size()/2 ; i < str.size(); i++)
		{
			s2 += str[i];
		}

		// cout << s1 << endl;
		// cout << s2 << endl;

		if(s1 == s2)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}