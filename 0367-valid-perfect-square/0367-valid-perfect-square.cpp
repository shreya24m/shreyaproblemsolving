class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = num;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == num) return true;
            if (square < num) {
                left = mid + 1;   // Need a larger number
            } else {
                right = mid - 1;  // Need a smaller number
            }
        }

        return false;
    }
};