class Solution {
public:
    int sumofSquares(int n)
    {
        int output = 0;
        while(n !=0)
        {
            int temp = n%10;
            output += pow(temp, 2);
            n /= 10;
        }
        return output;
        
    }
    bool isHappy(int n) {
        set<int> s;

        while(s.find(n) == s.end())
        {
            s.insert(n);
            n = sumofSquares(n);
            if(n == 1)
                return true;
        }
        return false;
    }
};