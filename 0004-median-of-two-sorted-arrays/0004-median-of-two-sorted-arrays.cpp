class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> tmp;
        
        for (auto num : nums1)
            tmp.push_back(num);
        for (auto num : nums2)
            tmp.push_back(num);
        
        sort(tmp.begin(), tmp.end());
        int n = tmp.size();
        
        // if odd size return middle element, 
        // if even return median of two middle elements
        return n%2==1 ? tmp[n/2] : (tmp[n/2] + tmp[n/2-1])/2.0; 
    }
};