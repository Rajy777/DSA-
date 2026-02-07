// The API isBadVersion is already defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                // If mid is bad, the first bad version is at mid or before
                right = mid;
            } else {
                // If mid is good, the first bad version must be after mid
                left = mid + 1;
            }
        }
        return left; // left == right → first bad version
    }
};
