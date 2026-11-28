class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        int p1 = 0, p2 = 0;
        while(p1 < nums1.size() && p2 < nums2.size())
        {
            if(nums1[p1] <= nums2[p2])
            {
                result.push_back(nums1[p1]);
                p1++;
            }
            else
            {
                result.push_back(nums2[p2]);
                p2++;
            }
        }
        
            while(p1 < nums1.size())
            {
                result.push_back(nums1[p1]);
                p1++;
            }

            while(p2 < nums2.size())
            {
                result.push_back(nums2[p2]);
                p2++;
            }
        

        //  median part

        double median = 0.00000;
        int n = result.size();

        if(n % 2 != 0)
        {
            median = (double)result[n / 2];
        }
        else
        {
            int mid1 = n / 2;
            median = (double)((result[mid1 - 1] + result[mid1]) / 2.0);
        }

        return median;
    }
};