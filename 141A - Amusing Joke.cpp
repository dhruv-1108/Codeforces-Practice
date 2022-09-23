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

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	unordered_map<char, int> mp;
	unordered_map<char, int> mpp;

	for(auto x : s1)
		mp[x]++;
	for(auto x : s2)
		mp[x]++;

	for(auto i : s3)
		mpp[i]++;

	if(mp == mpp)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}