#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int index, vector<int>input, vector<int>&output, int n){

    if(index == n){
        for(auto it: output){
            cout<<it <<" ";
        }

        if(output.size()==0){
            cout<<" {} ";
        }

        cout<<"\n";
        return;
    }

    //Not pick condition, this is not added to subsequence;
    printSubsequence(index+1, input, output, n);

    //Take or pick the particular index to subsequece
    output.push_back(input[index]);
    printSubsequence(index+1, input, output, n);
    output.pop_back();


}

int main(){

    vector<int>input = {3,1,2};

    vector<int>output;
    int n = input.size();
    printSubsequence(0,input,output,n);


    return 0;
}