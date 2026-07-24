class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int leftmax = h[l];
        int rightmax = h[r];
        int res = 0;
        while(l<r){
            if(leftmax<rightmax){
                l++;
                leftmax = max(leftmax, h[l]);
                res += leftmax - h[l];
            }else{
                r--;
                rightmax = max(rightmax, h[r]);
                res += rightmax - h[r];
            }

        }
        return res;
    }
};
