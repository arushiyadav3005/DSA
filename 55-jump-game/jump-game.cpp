class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxToReach = 0;
        int n = nums.size();

        for(int i = 0; i < n; ++i) {
            if (i > maxToReach) {
                return false;
            }
            maxToReach = max(maxToReach, i + nums[i]);

            if (maxToReach >= n - 1) {
                return true;
            }
        }
        return true;
        
    }
};