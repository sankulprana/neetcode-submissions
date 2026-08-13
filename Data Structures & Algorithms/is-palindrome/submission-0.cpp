class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int right = n-1;
        int left = 0;
        while(left<right){
            if(!isalnum(s[left])){
                left++;
            }
            else if(!isalnum(s[right])){
                right--;
            }
            else if(toupper(s[left])==toupper(s[right])){
                left++;
                right--;
            }
            else
            {
                return false;
            } 
        }
        return true;
    }
};
