class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> ans;
        int l = 0;
        int r = num.size()-1;
        bool found = false;
        while(l<r && !found){
            if(num[l]+num[r]>target){
                r--;
            }
            if(num[l]+num[r]<target){
                l++;
            }
            if(num[l]+num[r] == target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                found = true;
            }
        }
        return ans;
    }
};
