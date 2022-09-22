// Time Complexity -> O(N)
// Space Complexity -> O(1)

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int event;
    cin >> event;

    int arr[event];

    for(int i =0; i < event; i++){
        cin >> arr[i];
    }

    int prefixSum = 0;
    int ans = 0;

    for(int i = 0; i < event; i++)
    {
        if(arr[i] > 0)
            prefixSum += arr[i];
        else if(prefixSum > 0)
            prefixSum = prefixSum - 1;
        else
            ans++;  
    }

    cout << ans << endl;
}
