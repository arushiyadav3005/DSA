class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int firstTrueIdx = -1;
        while(start <= end) {
            int mid = start + (end - start)/2;
                if(guess(mid) <= 0){
                  firstTrueIdx = mid;
                  end = mid - 1;
                } else {
                   start = mid + 1;
                }
        }
        return firstTrueIdx;
    }
};