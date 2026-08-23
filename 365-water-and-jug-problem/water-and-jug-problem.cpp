class Solution {
public:
    int gcd(int x, int y) {
        while(y != 0) {
            int temp = x % y;
            x = y;
            y = temp;
        }
        return x;
    }
    bool canMeasureWater(int x, int y, int target) {
        if(x + y < target) {
            return false;
        }

        return target % gcd(x, y) == 0;
    }
};