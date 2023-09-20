class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') 
                stac.push(s[i]);
            else
            {
                if((stac.empty()) || (s[i] == ')' && stac.top() != '(') || (s[i] == '}' && stac.top() != '{') || (s[i] == ']' && stac.top() != '[')) 
                {
                    return false;
                }
                stac.pop();
            }
        }
        return stac.empty();
    }
};