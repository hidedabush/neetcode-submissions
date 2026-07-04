class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> count;
        vector<vector<int>> freq(nums.size()+1);
        vector<int> result;
        for(int i : nums){
            count[i] = count[i]+1;
        }
        for(const auto& entry:count){
            freq[entry.second].push_back(entry.first);
        }

        for(int i = freq.size()-1; i>0; i--){
            for(int j:freq[i]){
                result.push_back(j);
                if(result.size()==k){
                    return result;
                }
            }
        }

        return result;
    }
};
