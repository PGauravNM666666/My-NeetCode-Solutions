class Solution {
public:
    string encode(vector<string> &strs) 
    {
        string Encoded = "";
        for(int i = 0;i<strs.size(); i++)
        {
            string temp = strs[i];
            int size = temp.length();
            temp = to_string(size) + "#" + temp;
            Encoded += temp;
        }
        return Encoded;
    }


    vector<string> decode(string &str) 
    {        
        vector<string> Decoded;
        int size = 0, i = 0;
        while(i<str.length())
        {
            //********* First Method *********
            int j = i;
            while(str[j] != '#')
            {
                j++;
            }
            int size = stoi(str.substr(i, j-i));            
            i = j+1;
            string to_push = "";
            while(size--)
            {
                to_push += str[i];
                i++;
            }
            Decoded.push_back(to_push);


            //********* Second Method *********
            /*
            int delimiter = str.find_first_of('#', i);
            int length = stoi(str.substr(i, delimiter-i));
            i = delimiter+1;
            Decoded.push_back(str.substr(i, length);
            i += length;
            */
        }

        return Decoded;
    }
};