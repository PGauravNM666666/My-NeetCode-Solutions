class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int, int> m;
        vector<int> ans;
        for(int i = 0;i < numbers.size(); i++)
        {
            int target_num = target - numbers[i];
            if(m.find(target_num) != m.end())
            {
                ans.push_back(m[target_num]+1);
                ans.push_back(i+1);
            }
            m[numbers[i]] = i;
        }
        return ans;
    }
};