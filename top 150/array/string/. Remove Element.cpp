class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int indx=0;
        for(auto k: nums)
        {
            if(k!=val) 
            {
                cnt++;
                nums[indx]=k;
                indx++;
            }

        }
        return cnt;
    }
};