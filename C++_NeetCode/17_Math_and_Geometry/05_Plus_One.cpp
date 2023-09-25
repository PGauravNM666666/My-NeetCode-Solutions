class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // reverse(digits.begin(), digits.end());

        int extra = 0;
        int n = digits.size();
        int digit_after = digits[n-1] + 1;
        int rem = 1;
        if(digit_after < 10)
        {
            digits[n-1]++;
            return digits;
        }
        else
        {
            digits[n-1] = 0;
            for(int i = digits.size() - 2; i >=0; i--)
            {
                rem = 1;
                int digit_after_in_loop = digits[i] + 1;
                if(digit_after_in_loop < 10)
                {
                    digits[i]++;
                    return digits;
                }
                else
                {
                    digits[i] = 0;
                    rem = digit_after_in_loop / 10;
                    continue;
                }
            }
        }
        
        digits.insert(digits.begin(), rem);
        return digits;
    }
};