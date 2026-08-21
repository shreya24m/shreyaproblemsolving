class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> count;

        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for(int index = 0; index < s.size(); index++) {

            count[s[index]]++;

            maxFreq = max(maxFreq, count[s[index]]);

            while((index - left + 1) - maxFreq > k) {
                count[s[left]]--;
                left++;
            }

            ans = max(ans, index - left + 1);
        }

        return ans;
    }
};