#include<bits/stdc++.h>
using namespace std;
void findCombinations(int ind, vector<int>input, vector<int>&output, vector<vector<int>>&res, int target){
    if(ind==input.size() ){
        if(target==0){
            res.push_back(output);
        }
        return;
    }


    //Pick Element
    if(input[ind]<=target){
        output.push_back(input[ind]);
        findCombinations(ind, input, output, res, target-input[ind]);
        
        output.pop_back();
        
    }

    //Not pick Element
    findCombinations(ind+1, input, output, res, target);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>res;
    vector<int>output;
    
    
    findCombinations(0,candidates,output,res,target);
    
    return res;
}

int main(){
    vector<int>candites = {2,3,6,7};
    int target = 7;

   vector<vector<int>>ans = combinationSum(candites, target);

   for(int i=0; i<ans.size(); i++){
       for(int j=0; j<ans[i].size(); j++){
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }


}