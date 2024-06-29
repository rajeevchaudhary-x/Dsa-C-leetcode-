#include<iostream>
#include<vector>
#include<set>
#include <bits/stdc++.h>

using namespace std;
void permuteUniqueHelper(vector<int>& nums,vector<vector<int>> & ans,int start){
    if(start==nums.size()){
        ans.push_back(nums);
        return;
    }
    unordered_map<int,bool>visited;
    for(int i=start;i<nums.size();i++){
        if(visited.find(nums[i])!=visited.end()){
            continue;
        }
        visited[nums[i]]=true;
        swap(nums[i],nums[start]);
        permuteUniqueHelper(nums,ans,start+1);
        swap(nums[i],nums[start]);

    }
}


int main(){
        vector<int> nums{1,1,2};
        vector<vector<int>> ans;
        permuteUniqueHelper(nums,ans,0);
        set<vector<int>>st;
        for(auto e:ans){
            st.insert(e);
        }
        ans.clear();
        for(auto e:st){
            ans.push_back(e);
        }
        for(int i=0;i<ans.size();i++){
            cout<<nums[i]<<" ";
        }
    }
