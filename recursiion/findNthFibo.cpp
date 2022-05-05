#include<bits/stdc++.h>
using namespace std;

int nthFibo(int n){
    if(n<=1){
        return n;
    }

    return nthFibo(n-1) + nthFibo(n-2);
}

int main(){
    int n = 4;
    cout<<nthFibo(n);
    return 0;
}
