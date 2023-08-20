class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> forward;
        vector<int> backward;
        forward.push_back(nums[0]);
        backward.push_back(nums[nums.size()-1]);
        for(int i = 1; i < nums.size(); i++)
        {
            forward.push_back(forward[i-1]*nums[i]);
        }
        for(int i = 1; i < nums.size(); i++)
        {
            backward.push_back(backward[i-1]*nums[nums.size() - i - 1]);
        }
        reverse(backward.begin(), backward.end());

        vector<int> ans;
        for(int i = 0; i < nums.size();i++)
        {
            if(i == 0)
                ans.push_back(backward[1]);
            else if(i == nums.size()-1)
                ans.push_back(forward[i-1]);
            else
                ans.push_back(forward[i-1]*backward[i+1]);
        }
        return ans;        
    }
};