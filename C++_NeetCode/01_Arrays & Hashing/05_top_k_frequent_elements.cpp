class Solution {
public:
/*
-> put a map with <int, int>
-> initilie with 1 if the number is not present, otherwise, increase with 1
-> put them in a vector of int pairs with frequency as first of the pair, so we can easy sort the vector
-> reverse sort
-> loop the vector of pairs for k times and print .second of each pair. 
*/
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