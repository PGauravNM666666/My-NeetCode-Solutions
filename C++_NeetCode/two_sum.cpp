class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> istha;
        int n = nums.size();
        bool flag = false;
        for(int i=0;i<n && !flag; i++)
        {
            for(int j=i+1;j<n && !flag;j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                        istha.push_back(i);
                        istha.push_back(j);
                        cout <<i<<j;
                        flag = true;
                    // if(flag)
                    //     break;
                }
            }
            // if(flag)
            //     break;
        }
        return istha;
    }
};