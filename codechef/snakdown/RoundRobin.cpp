#include<bits/stdc++.h>
#define ll long long
using namespace std;
void max_pnts(){
    ll n,k,a;
    cin>>n>>k;
    ll pos = n-k;

    if(k%2==0){
        a = (k/2)-1;
    }else{
        a = k/2;
    }

    cout<<(a*2)+(pos*2)<<"\n";
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        max_pnts();
        /* code */
    }
    
    return 0;
}