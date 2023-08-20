class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        std::sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            int l = i+1, r = nums.size()-1;
            int fixed = nums[i];
            int target = -nums[i];
            while(l < r)
            {
                int sum = nums[l] + nums[r];
                if(sum< target) 
                {
                    l++;
                }
                else if(sum > target)
                {
                    r--;
                }
                else if(sum == target)
                {
                    vector<int> temp = {nums[i], nums[l], nums[r]};
                    ans.push_back(temp);

                    while(l+1<r && nums[l]==nums[l+1])l++;
                       while(l<r-1 && nums[r]==nums[r-1]) r--;
                    
                    l++; r--;
                }
            }

            while(i+1 < nums.size() && nums[i+1] == nums[i])
            {
                i++;
            }
        }
        return ans;
    }
};