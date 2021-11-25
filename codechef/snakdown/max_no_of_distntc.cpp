#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n; cin>>n;
        vector<ll>arr;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            ll temp; cin>>temp;
           arr.push_back(temp);
           sum += temp;
        }

        for(ll i=0; i<n; i++){
            cout<<(sum-arr[i])%arr[i]<<" ";
        }
    }
    
    return 0;
}