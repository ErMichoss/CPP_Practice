#include <vector>
#include <algorithm> 

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> merged = nums1;
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        std::sort(merged.begin(), merged.end());

        int size = merged.size();
        if (size % 2 == 1) {
            return merged[size / 2];
        } else {
            return (merged[size /2 -1] + merged[size / 2]) / 2.0;
        }
    }
};