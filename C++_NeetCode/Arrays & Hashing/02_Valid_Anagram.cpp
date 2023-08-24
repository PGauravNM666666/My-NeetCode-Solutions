class Solution {
public:
    bool isAnagram(string s, string t) {
        /*sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)
            return 1;
        else return 0;*/

       unordered_map<int, int> check1, check2;
        for(int i=0;i<s.size();i++)
        {
            check1[s[i]]++;
            
        }
        for(int i=0;i<t.size();i++)
        {
            check1[t[i]]++;
        }
    }
};