class Solution {
public:
    int mySqrt(int x) {
        long left = 0;
        long right = x;
        long approx=0;
        while(left<=right){
            long mid = left + (right - left)/2;
            if(mid*mid==x){
                return mid;
            }
            else if((mid*mid)<x){
                left = mid + 1;
                approx = max(mid,approx);
            }
            else if((mid*mid)>x){
                right = mid - 1;
            }
        }
        return approx;
    }
};