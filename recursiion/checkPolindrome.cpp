#include<bits/stdc++.h>
using namespace std;

bool isPolin(string str, int l, int r){

    if(l>=r){
        return true;
    }

    if(str[l]!=str[r]){
        return false;
    }

    return isPolin(str, l+1, r-1);

}
int main(){

    string s1 = "abba";
    string s2 = "aab";
    int n = s1.size();
    cout<<isPolin(s1,0,n-1);
    return 0;
}