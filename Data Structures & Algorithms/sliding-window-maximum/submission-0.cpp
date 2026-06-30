class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> max;
        for(int i = 0; i<=nums.size()-k; i++){
            int m = nums[i];
            for(int j = i; j<i+k;j++){
                
                if(nums[j]>m){
                    m = nums[j];
                }
            }
            max.push_back(m);
        }
        return max;
    }
};
