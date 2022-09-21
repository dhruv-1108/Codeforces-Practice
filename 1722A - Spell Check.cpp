// Time Complexity -> O(N*log(N));
// Space Complexity -> O(1)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        string str, s;
        ll len;
        cin >> len >> str;
        s = "Timur";
        if (len > 5 || len < 5)
            cout << "NO\n";
        else
        {
            sort(str.begin(), str.end());
            sort(s.begin(), s.end());

            if (str == s)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
