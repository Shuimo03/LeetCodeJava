#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int>twoSum(vector<int>& nums, int target){
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            auto iter = map.find(target-nums[i]);
            if(iter != map.end()){
                return {iter->second,i};
            }
            map.insert(pair<int,int>(nums[i],i));
        }
        return {};
    }
};