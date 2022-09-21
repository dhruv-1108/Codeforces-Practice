#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << "I hate it" << endl;
    }
    if(n > 1)
        cout << "I hate that ";

    for (ll i = 2; i < n; i++)
    {
        if (i % 2 == 1)
            cout << "I hate that ";

        else
            cout << "I love that ";
    }

    if (n % 2 && n > 1)
        cout << "I hate it" << endl;
    else if( n %2 == 0 && n > 1)
        cout << "I love it" << endl;

    return 0;
}
