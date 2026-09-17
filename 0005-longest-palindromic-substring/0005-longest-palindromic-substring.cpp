class Solution {
public:

    string expand(string s, int left, int right) {

        while(left >= 0 && right < s.size() &&
              s[left] == s[right]) {

            left--;
            right++;
        }

        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s) {

        string ans = "";

        for(int center = 0; center < s.size(); center++) {

            string odd = expand(s, center, center);

            string even = expand(s, center, center + 1);

            if(odd.size() > ans.size())
                ans = odd;

            if(even.size() > ans.size())
                ans = even;
        }

        return ans;
    }
};