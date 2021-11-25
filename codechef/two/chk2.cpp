#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>arr) { 
    int n = arr.size();
    int ans = 0; 
    for (int i = 0; i < n; i++) 

        ans += arr[i]; 

      

	return ans * (1 << (n - 1));

} 

int getCount(int l, int r){
    int res = 0;
    for(int i=l; i<=r; i++){
            vector<int>arr;

        int temp = i;

        while(temp){
            int rem = temp%10;
            arr.push_back(rem);
            temp /= 10;
        }
      //  cout<<"\n Passing array is ";
        for(int a : arr){
     //       cout<<a<<" ,";
        }
        cout<<"\n";
        reverse(arr.begin(),arr.end());
        int s = sum(arr);
        if(s%2==0){
            cout<<"good arra y is ";
            for(auto it : arr){
                cout<<it<<" ";
            }
            cout<<" ";
            res++;
        }
    }

    return res;
}

int main(){
    vector<int>arr;
    //cout<<"\n\nFinar res is \n";
    //cout<<getCount(5,20);

    cout<<"\nSum for ";
    arr.push_back(2);
    arr.push_back(0);
    arr.push_back(2);

    cout<<"Sum is "<<sum(arr);
}
