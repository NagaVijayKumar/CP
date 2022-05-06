#include<bits/stdc++.h>
using namespace std;
// Print any one of subsequnce whose sum is K
void subSequenceWithSumK(int ind, vector<int>input, vector<int>&output, int sum, int n, int k){
    if(ind==n){
        if(sum==k){
            for(auto it: output){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //Pick element

    output.push_back(input[ind]);
    
    sum += input[ind];
    subSequenceWithSumK(ind+1, input, output, sum, n, k);

    output.pop_back();
    sum -= input[ind];

    subSequenceWithSumK(ind+1, input, output, sum, n, k);
}

int main(){
    

    vector<int>input = {1,2,1};
    int n = input.size();

    int k = 2;
    vector<int>output;

    subSequenceWithSumK(0,input, output,0, n, k);

}