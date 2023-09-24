/*
> use example "3 4 5 1 2"
> use binary search
> put minimum as the right most element, coz we know the array is rotated atleast once.
> find mid and compare it with the min element
> if the (mid > left) element -> that means left to mid is in sorted order, so we need to check right side and the opposite for the else case.
> and the main condition is, if the left element is > than right element, we know the minimum is there, so we check if nums[l] > nums[r] or nums[l] < nums[r]
> and update mid every time in the loop.
*/


class Solution {
public:
   int findMin(vector<int>& nums) 
   {
      int l=0, r = nums.size() - 1;

      int mini = nums[r];

      while(l <= r)
      {
         int mid = (r+l)/2;
         mini = min(mini, nums[mid]);

         if(nums[l] > nums[r])
            mini = min(mini, nums[r]);
        else 
            mini = min(mini, nums[l]);
        
        if(nums[mid] > nums[l])
            l = mid + 1;
        else  r = mid - 1;
      }

      return mini;
   }
};