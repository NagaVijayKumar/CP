#include<bits/stdc++.h>
using namespace std;
void generateSubsets(int ind, vector<int>nums, vector<int>&ds, vector<vector<int>>&res){
    
    res.push_back(ds);
    for(int i=ind; i<nums.size(); i++){
        if(i!=ind && nums[i] == nums[i-1])
            continue;
        
        
        ds.push_back(nums[i]);
        generateSubsets(i+1, nums,ds,res);
        ds.pop_back();
        
    }
    
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>>res;
    vector<int>ds;
    
    sort(nums.begin(), nums.end());
    generateSubsets(0,nums,ds,res);
    
    return res;
}
int main(){

    vector<int>arr = {1,2,2};

    vector<vector<int>>ans = subsetsWithDup(arr);


    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}