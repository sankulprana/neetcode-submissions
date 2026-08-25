class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        string word3 = "";
        int left = 0;
        int right = 0;
        while(left<n && right<m){
            word3 += word1[left];
            left++;

            word3 += word2[right];
            right++;
        }

        while(right<m){
            word3 += word2[right];
            right++;
        }

        while(left<n){
            word3 += word1[left];
            left++;
        }

        return word3;
    }
};