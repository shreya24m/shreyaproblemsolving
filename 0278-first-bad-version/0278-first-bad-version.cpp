// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int left = 1;
        int right = n;

        while(left < right) {

            int index = left + (right - left) / 2;

            if(isBadVersion(index))
                right = index;
            else
                left = index + 1;
        }

        return left;
    }
};