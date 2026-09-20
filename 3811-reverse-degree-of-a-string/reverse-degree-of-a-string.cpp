class Solution {
public:
    int reverseDegree(string s) {
        long long totalDegree = 0;
        for(int i = 0; i < s.length(); i++) {
            long long positionInString = i + 1;
            long long revAlphabetVal = 26 - (s[i] - 'a');

            totalDegree = totalDegree + positionInString * revAlphabetVal;
        }
        return totalDegree;
    }
};