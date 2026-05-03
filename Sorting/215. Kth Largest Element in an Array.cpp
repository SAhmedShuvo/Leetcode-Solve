class Solution {
    int quickSelect(vector<int>& nums, int k)
    {
        int pivot= nums[rand()%nums.size()];
        vector<int> greaterValues, smallerValues, pivotValues;
        for(auto k: nums)
        {
            if(k>pivot) greaterValues.push_back(k);
            else if(k<pivot) smallerValues.push_back(k);
            else pivotValues.push_back(k);
        }
        int gl= greaterValues.size(), sl= smallerValues.size(), pl=pivotValues.size();
        if(gl>=k) return quickSelect(greaterValues, k);
        else if(gl+pl<k) return quickSelect(smallerValues, k-gl-pl);
        return pivot;

    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, k);
    }
};