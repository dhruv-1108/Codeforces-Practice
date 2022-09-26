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

ll gcd(ll a, ll b)
{
	return (b == 0) ? a : gcd(b, a % b);
}

ll sumOfDigit(ll n)
{
	int rem;
	int sum = 0;
	while(n > 0)
	{
		rem = n % 10;
		n = n / 10;
		sum += rem;
	}

	return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll tc;
	cin >> tc;

	while(tc--)
	{
		ll num;
		cin >> num;
		
		ll ans = 1;

		while(ans == 1)
		{
			ans = gcd(num, sumOfDigit(num));
			if(ans == 1)
				num++;
		} 

		cout << num << endl;
	} 
	
	return 0;
}