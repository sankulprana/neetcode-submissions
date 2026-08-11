class Solution {
public:
    int maxArea(vector<int>& heights) {
        int length;
        int breadth;
        int n=heights.size();
        int left=0;
        int right=n-1;
        int area;
        int TotalArea=0;
        while(left<right){
                int length = right - left;
                int breadth = min(heights[left],heights[right]);
                int area = length * breadth;
                TotalArea = max(TotalArea,area);
                if(heights[left]<heights[right]){
                    left++;
                }
                else if(heights[right]<heights[left]){
                    right--;
                }
                else{
                    left++;
                    right--;
                }
        }
        return TotalArea;
    }
};
