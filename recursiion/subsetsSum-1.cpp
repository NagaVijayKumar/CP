#include<bits/stdc++.h>
using namespace std;
//Powerset Approach
/*
vector<int> subsetSums(vector<int> arr, int n)
{
    // Write Your Code here
    vector<int>sums;
    int sum = 0;
    for(int i=0; i<pow(2,n); i++){
        sum = 0;
        for(int j=0; j<n; j++){
            if((i&(1<<j))!=0){
                sum += arr[j];
            }
        }
        sums.push_back(sum);
    }
    return sums;
}
int main(){

    vector<int>arr = {1,2,3};
    int n = 3;
    vector<int>res = subsetSums(arr, n);

}
0.17
*/
    //BackTracking 
    void subsetSums(int ind, int sum, vector<int>arr, int n, vector<int>&sums){
      
      if(n==ind){
          sums.push_back(sum);
          return;
      }
      
      //Pick Element
      subsetSums(ind+1, sum+arr[ind], arr, n, sums);
      
      //Not Pick
      subsetSums(ind+1, sum, arr, n, sums);

        
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        
        vector<int>sums;
  
        subsetSums(0,0,arr,n,sums);
        return sums;
        
    }
