#include<bits/stdc++.h>
using namespace std;

int main(){
    int a =315, b =840;

    while (b>0)
    {
        a %=b;
        swap(a,b);
        /* code */
    }
    cout<<a;
    
    return 0;
}