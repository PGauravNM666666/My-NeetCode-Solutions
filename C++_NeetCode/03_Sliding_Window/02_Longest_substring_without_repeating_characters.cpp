class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        else if(s.length() == 1)
            return 1;
        unordered_set<char> sett;
        int max_count = 0, count = 0;
        int l = 0;
        for(int i=0;i<s.size();i++)
        {
            if(sett.find(s[i]) == sett.end())
            {
                cout << count << " " ;
                sett.insert(s[i]);
                count++;
            }
            else
            {
                sett.erase(s[l]);
                l++;
                count--;
                i--;
            }
            max_count = max(max_count, count);
        }
        
        return max_count;
        
    }
};