class Solution {
public:
    int mySqrt(int x) {

        int left = 1;
        int right = x;
        int answer = 0;

        while(left <= right) {

            int index = left + (right - left) / 2;

            if(index <= x / index) {
                answer = index;
                left = index + 1;
            }
            else {
                right = index - 1;
            }
        }

        return answer;
    }
};