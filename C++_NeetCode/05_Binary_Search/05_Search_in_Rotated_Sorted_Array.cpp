/*
> same as find minimum in rotated soarted array
> search right side when m > l
> and opposite
> before shifting side, compare the target element with left and mid element, coz it changes the side you have to shift.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int curr = nums[0];
        while(l <= r)
        {
            int m = (l+r)/2;
            if(nums[m] == target)
                return m;
            
            if(nums[m] >= nums[l])
            {
                if(nums[l] <= target && target <= nums[m])
                    r = m - 1;
                else
                    l = m+1;
            }
            else
            {
                if(nums[m] <= target && target <= nums[r])
                    l = m+1;
                else
                    r = m - 1;
            }
        }
        return -1;
    }
};