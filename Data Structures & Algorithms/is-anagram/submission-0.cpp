class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        int n1=t.size();
        if(n1!=n){
            return false;
        }
        int i=0;
        while(i<n){
            if(s[i]==t[i]){
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
