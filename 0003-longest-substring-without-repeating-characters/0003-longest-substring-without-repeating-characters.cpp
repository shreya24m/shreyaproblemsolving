class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left = 0;
        int maxLength = 0;

        for(int index = 0; index < s.size(); index++) {

            while(st.count(s[index])) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[index]);

            maxLength = max(maxLength, index - left + 1);
        }

        return maxLength;
    }
};