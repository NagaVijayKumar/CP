#include<bits/stdc++.h>
using namespace std;

void findCombinations(int ind, vector<int>input, vector<int>&output, vector<vector<int>>&res, int target){
    

    if(target == 0){
        res.push_back(output);
        return;
    }

    
    for(int i=ind; i<input.size(); i++){
        
        if(i>ind && input[i]==input[i-1]) continue;
        
        if(input[i]>target) break;
        
        output.push_back(input[i]);
        findCombinations(i+1, input, output, res, target-input[i]);
        
        output.pop_back();
        
    }
    
    
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    
    vector<vector<int>>res;
    
    vector<int>output;
    sort(candidates.begin(), candidates.end());
    findCombinations(0, candidates, output, res, target);
    
    return res;
    
}

int main(){
    vector<int>candites = {10,1,2,7,6,1,5};
    int target = 9;

   vector<vector<int>>ans = combinationSum2(candites, target);

   for(int i=0; i<ans.size(); i++){
       for(int j=0; j<ans[i].size(); j++){
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }


}