class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if(s1.length() > s2.length())
            return false;
        
        unordered_map<char, int> one, two;

        for(int i=0;i<26;i++)
        {
            one[i + 'a'] = 0;
            two[i + 'a'] = 0;
        }
        int matches = 0;
        for(int i=0;i<s1.size();i++)
        {
            one[s1[i]]++;
            two[s2[i]]++;
        }
        for(int i=0;i<26;i++)
        {
            if(one[i+'a'] == two[i+'a'])
                matches++;
        }
        int l=0;
        char index;
        for(int i = s1.size(); i < s2.size(); i++)
        {
            if(matches == 26)
                return true;
            index = s2[i];
            two[index] += 1;
            if(one[index] == two[index])
                matches++;
            else if(one[index] + 1 == two[index])
                matches -= 1;

            
            index = s2[l];
            two[index] -= 1;
            if(one[index] == two[index])
                matches++;
            else if(one[index] - 1 == two[index])
                matches -= 1;
            
            l++;
        }

        return (matches == 26);
    }
};