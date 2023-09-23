class Solution {

private:
   bool can_eat(int mid, vector<int>& piles, int h)
   {
      int total_hours = 0;
      for(int i = 0; i < piles.size(); i++)
      {
         int hours = piles[i]/mid;
         int remainder = piles[i] % mid;
         total_hours += hours;
         if(remainder > 0) 
            total_hours++;
      }
      return (total_hours <= h);
   }

public:
   int minEatingSpeed(vector<int>& piles, int h) 
   {
      int min = 1, max = *max_element(piles.begin(), piles.end());
      while(min < max)
      {
         int mid = min + (max-min)/2;
         if(can_eat(mid, piles, h))
         {
            max = mid;
         }
         else
         {
            min = mid + 1;
         }
      }
      return min;
   }
};