class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int totalPoisonedTime = 0;
        int n = timeSeries.size();

        if(n == 0) return 0;

        for(int i = 0; i < n - 1; i++) {
            int timeGap = timeSeries[i + 1] - timeSeries[i];
            totalPoisonedTime += min(timeGap, duration);
        }

        totalPoisonedTime  = totalPoisonedTime + duration;
        return totalPoisonedTime;
    }
};