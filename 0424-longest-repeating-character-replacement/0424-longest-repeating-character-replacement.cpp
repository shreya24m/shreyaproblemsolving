class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> count(26, 0);

        int left = 0;
        int maxFrequency = 0;
        int maxLength = 0;

        for(int index = 0; index < s.size(); index++) {

            count[s[index] - 'A']++;

            maxFrequency = max(maxFrequency,
                                count[s[index] - 'A']);

            int windowLength = index - left + 1;

            if(windowLength - maxFrequency > k) {

                count[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength,
                            index - left + 1);
        }

        return maxLength;
    }
};