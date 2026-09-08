class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = 0;
        for(int pile : piles){
            if(pile>maxpile){
                maxpile = pile;
            }
        }
        int left = 1;
        int right = maxpile;
        while(left<=right){
            int mid = left + (right-left)/2;
            double hours = 0;
            for(int pile : piles){
                hours += ceil((double)pile/mid);
            }
            if(hours<=h){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return left;
    }
};
