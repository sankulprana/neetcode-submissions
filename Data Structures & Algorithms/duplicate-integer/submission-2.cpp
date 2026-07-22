class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     int n=nums.size();
     sort(nums.begin(),nums.end());
     int left=0;
    //  int right = left+1;
     for(int right=1;right<n;right++){
        if(nums[left]==nums[right]){
            return true;
        }
        left++;
     }
     return false;  
    }
};