class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int max = 0;
        while(l<r){
            int b = r-l;
            int area;
            if(heights[l]<heights[r]){
                area = heights[l]*b;
                l++;
            }else{
                area = heights[r]*b;
                r--;
            }
            if(area>max)
                max = area;
        }
        return max;
    }
};
