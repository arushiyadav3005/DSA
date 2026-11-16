class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k) {
            string nextString;
            int stringLength = s.size();
            for(int i = 0; i < stringLength; i += k) {
                int sum = 0;
                for(int j = i; j < min(i + k, stringLength); j++) {
                    sum += s[j] - '0';
                }
                nextString += to_string(sum);
            }
            s = nextString;
        }
        return s;
    }
};