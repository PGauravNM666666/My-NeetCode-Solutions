class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int, int> m;
         int res =0, l = 0, r, maxf = 0;
        for(r = 0;r<s.size();r++)
        {
            m[s[r]]++;
            maxf = max(maxf, m[s[r]]);
            while(((r-l+1) - maxf) >k)
            {
                m[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};