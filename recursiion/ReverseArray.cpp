#include<bits/stdc++.h>
using namespace std;

void revers_array(vector<int>&arr, int l, int r){
    if(l>=r){
        return;
    }

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    
    revers_array(arr,l+1, r-1);
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int n = arr.size();
    revers_array(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}