class Solution {
public:

    double calculate(double x, int n)
    {
        if(n == 0)
            return 1;
        double res = calculate(x, n/2);
        res = res * res;
        if(n%2 != 0)
            return x*res;
        
        return res;
    }
    
    
    /*double calculate(double x, int n)
    {
        if(n == 0)
            return 1;
        x = x*x;
        if(n%2 == 0)
            return calculate(x, n/2);
        else
            return calculate(x, (n-1)/2);
    }*/

    // double calculate(double x, int n)
    // {
    //     if(n == 0)
    //         return 1;
    //     return pow(x, n);
    // }
    double myPow(double x, int n) 
    {
        // unsigned_int
        if(x == 0)
            return 0;
        if(n == 0)
            return 1;
        double answer = (calculate(x, abs(n)));
        if(n < 0)
            answer = 1/ answer;
        return answer;
    }
};