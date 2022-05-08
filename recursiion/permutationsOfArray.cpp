#include<bits/stdc++.h>
using namespace std;

void generatePermutationsRecu(int ind, vector<int>&nums, vector<vector<int>>&res){
    
    if(nums.size()==ind){
        res.push_back(nums);
        return;
    }
    
    for(int i=ind; i<nums.size(); i++){
        
        //Swap
        swap(nums[ind], nums[i]);
        
        generatePermutationsRecu(ind+1, nums, res);
        
        //Re-swap
        swap(nums[ind], nums[i]);
        
    }
    
    
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>res;
    
    generatePermutationsRecu(0, nums, res);
    return res;
}

int main(){
    vector<int>nums = {1,2,3};
    vector<vector<int>> ans = permute(nums);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){

            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}