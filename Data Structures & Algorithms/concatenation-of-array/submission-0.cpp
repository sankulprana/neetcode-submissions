class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n =nums.size();
        // vector<int> ans(m);
        int m = n*2;
        vector<int> ans(m);
        for(int i=0;i<m;i++){
            if(i<nums.size()){
                ans[i] = nums[i];
            }
            else{
                ans[i] = nums[i-n]; 
            }
        }
        return ans; 
    }
};