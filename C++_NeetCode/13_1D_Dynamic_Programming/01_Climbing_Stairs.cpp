class Solution {
public:
   int climbStairs(int n) 
   {
      int one = 1,two = 1;
      for(int i=0;i<n-1;i++)
      {
         int temp = one;
         one  = one + two;
         two  = temp;
      }
      return one;
      
      // int fib(int n)
      // {
      //     if(n == 0)
      //         return 1;
      //     if(n == 1)
      //         return 1;
      //     return fib(n-1) + fib(n-2);
      // }
      // return fib(n);
   }
};