class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size();i++)
        {
            if(m.find(nums[i]) == m.end())
                m[nums[i]] = 1;
            else
                m[nums[i]]++;
            
        }
        vector<pair<int, int>> temp;
        for(auto i: m)
        {
            temp.push_back(make_pair(i.second, i.first));
        }
        sort(temp.rbegin(), temp.rend());
        vector<int> ans;
        for(int i = 0; i<k;i++)
        {
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};