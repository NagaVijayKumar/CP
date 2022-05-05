#include<bits/stdc++.h>
using namespace std;
void printSubsequenceSumK(int ind, vector<int>input, vector<int>&output, int sum, int n, int k){

    if(ind == n){
        if(sum==k){
            for(auto it: output){
                cout<<it <<" ";
            }

            cout<<endl;
        }

        return;
    }

    // pick the element
    output.push_back(input[ind]);
    sum += input[ind];
    
    printSubsequenceSumK(ind+1, input, output, sum, n, k);

    output.pop_back();
    sum -= input[ind];

    //Not pick
    printSubsequenceSumK(ind+1, input, output, sum, n, k);

}
int main(){

    vector<int>input = {1,2,1};
    int n = input.size();

    int k = 2;
    vector<int>output;

    printSubsequenceSumK(0,input,output,0,n,k);
    return 0;
}