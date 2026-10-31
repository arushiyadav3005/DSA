class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total_subsets = 1 << n;
        vector<vector<int>>result;
        for(int i = 0; i < total_subsets; i++){
            vector<int>current;
            for(int j = 0; j < n; j++){
                if((i & (1 << j)) != 0){
                    current.push_back(nums[j]);
                }
            }
            result.push_back(current);
        }
        return result;
    }
};