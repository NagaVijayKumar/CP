#include<bits/stdc++.h>
using namespace std;

string is_lucky(){
    int a, b, c;

    if(a==7 || b==7 || c==7){
        return "YES";
    }

    return "NO";
}

int main(){

    int t; cin>>t;

    while(t--){
        cout<<is_lucky()<<"\n";
    }
    

    return 0;
}