#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Hello";


    vector<int>arr = {1,2,3};
    int n = arr.size();
    for(int i=0; i<pow(2,n); i++){
        for(int j=0; j<n; j++){
            if((i&(1<<j))!=0){
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}