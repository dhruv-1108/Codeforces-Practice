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

	string s;
	cin >> s;

	set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

	string str = "";
	string ans = "";

	for(auto i : s)
	{
		char c = tolower(i);
		str.push_back(c);
	}

	for(auto i: str){
		if(vowels.find(i) == vowels.end())
		{
			ans.pb('.');
			ans.pb(i);
		}
	}

	cout << ans << endl;

	return 0;
}