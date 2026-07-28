class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> number;

        for(auto it: freq){
            number.push_back({it.second,it.first});
        }
        sort(number.begin(),number.end(),greater<pair<int,int>>());

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(number[i].second);
        } 
        return ans;
    }
};