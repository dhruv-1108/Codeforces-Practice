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

	ll a, b;

	cin >> a >> b;

	ll A = 0, B = 0, D = 0;

	for(int i = 1; i <= 6; i++)
	{
		if(abs(a - i) < abs(b - i))
			A++;
		if(abs(a-i) > abs(b - i))
			B++;
		if(abs(a-i) == abs(b-i))
			D++;
	}

	cout << A << " " << D << " " << B << endl;

	return 0;
}