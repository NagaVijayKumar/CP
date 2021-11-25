#include<bits/stdc++.h>
#define ll long long
using namespace std;
void min_max_lcm(){
    ll x,k;
    cin>>x>>k;
    ll product = (x * k)-1;
    ll l_min = x * 2;
    ll l_max = (x*k) * product;
    cout<<l_min<<" "<<l_max<<"\n";
}
int main(){
    ll t; cin>>t;
    while (t--)
    {
        min_max_lcm();
        /* code */
    }
    
    return 0;
}