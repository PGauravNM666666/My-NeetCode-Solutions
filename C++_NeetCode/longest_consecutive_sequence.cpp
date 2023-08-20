class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    return 0;

        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int max=1, temp_max=1;
        vector<int> v(s.begin(), s.end());
        // for(auto i: v)  cout << i << "\t";
        for(int i=1;i<v.size();i++)
        {
            if(v[i] == (v[i-1]+1))
                temp_max++;
            else    temp_max = 1;
            // cout << "temp max = " << temp_max << endl;
            if(temp_max > max)
                max = temp_max;
        }
        return max;
    }
};