class Solution {
public:
    string multiply(string num1, string num2) 
    {
        if(num1 == "0" || num2 == "0")
            return "0";
        int n = num1.size(), m = num2.size();
        vector<int> result(n+m, 0); 
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i = 0;i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int a = (num1[i] - '0') * (num2[j] - '0');
                
                result[i+j] += a;
                result[i+j+1] += result[i+j]/10;
                result[i+j] %= 10;
            }
        }
        reverse(result.begin(), result.end());
        
        string str = "";
        int i = 0;
        while (result[i] == 0) i++;
        while (i < result.size()) str += to_string(result[i++]);
        return str;
    }
};