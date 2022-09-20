#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve()
{
    ll tc;
    cin >> tc;

    while(tc--)
    {
        string str;
        cin >> str;

        if(str.length() <= 10)
            cout << str << endl;

        if(str.length() > 10)
        {
            string s = to_string(str.length() - 2);

            cout << str[0] << s << str[str.length() - 1] << endl;
        } 
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}