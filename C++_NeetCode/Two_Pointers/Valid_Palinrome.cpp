class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++)
        
        {
            if(s[i] >=65 && s[i] <=90 )
                v.push_back(char(s[i] + 32));
            else if ((s[i] >= 97 && s[i] <= 122) || ( s[i] >= 48 && s[i] <= 57))
                v.push_back(s[i]);
            else    continue;
                
        }
        int first = 0, last = v.size() - 1;
        for(first=0;first<v.size()/2;first++, last--)
        {
            if(v[first] == v[last])
                continue;
            else
            {
                return 0;
                break;
            }
        }
        return 1;
    }
};