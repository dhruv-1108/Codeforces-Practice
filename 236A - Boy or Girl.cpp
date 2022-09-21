#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll tc;
    cin >> tc;

    while(tc--)
    {
        set<char> words;
        string str;
        cin >> str;

        for(auto x : str)
            words.insert(x);
        
        int n = words.size();

        if(n % 2)
            cout << "IGNORE HIM!" << endl;
        else if(n%2 == 0)
            cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}