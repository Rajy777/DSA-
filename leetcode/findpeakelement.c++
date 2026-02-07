class Solution {
public:
    int findPeakElement(vector<int>& A) {
        int n = A.size();
        if (n == 0) return -1;   // safe-guard, though problem usually guarantees n>=1

        int st = 0, end = n - 1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (A[mid] > A[mid + 1]) {
                // peak is at mid or to the left
                end = mid;
            } else {
                // peak is to the right
                st = mid + 1;
            }
        }
        return st; // st == end == index of a peak
    }
};
