class Solution {
public:
    int calPoints(vector<string>& operations) {
        // stack<char> st;
        // int n = operations.size();
        vector<int> ans;

        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="+"){
                int n = ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(operations[i]=="C"){
                ans.pop_back();
            }
            else if(operations[i]=="D"){
                ans.push_back(2*ans.back());
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i=0;i<ans.size();i++){
            sum += ans[i];
        }
        return sum;
    }
};