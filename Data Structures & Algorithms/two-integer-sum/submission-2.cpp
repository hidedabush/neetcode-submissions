class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ans;
        

        int n = nums.size();
        for(int i = 0; i<n; i++){
            int diff = target - nums[i];
            if(ans.find(diff) != ans.end()){
                return {ans[diff], i};
            }
            ans.insert({nums[i],i});
        }

        return{};
    }
};
