class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=1;
        int current=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                current++;
            }
            else{
                current=1;
            }
            longest = max(longest,current);
        }
    return longest;    
    }
};
