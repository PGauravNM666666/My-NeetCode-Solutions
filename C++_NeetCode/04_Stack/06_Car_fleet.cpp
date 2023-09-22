class Solution {
public:
   int carFleet(int target, vector<int>& position, vector<int>& speed) 
   {
      //make the position and speed pairs
      vector<pair<int, int>> pair; 
      int n = speed.size();
      for(int i = 0; i < n; i++)
      {
         pair.push_back({position[i], speed[i]});
      }
      // sort them in reverse order
      sort(pair.rbegin(), pair.rend());

      /*
      calculate the time for each car.
      if the stack is empty -> push. after that, check the current adding time is less than the stack.top() 
      which is the speed of the vehicle which is ahead to the current one(since we sorted them in reverse order).
      if the current time is lower than the top one, it means the current one is faster than the ahead one and they will cross the paths before reaching the target.
      so they make a fleet with the speed of the ahead vehicle [which is top]. 
      so dont add the current one.
      repeat the same process for remaining cars.

      lastly, for the number of fleets, return the size of the stack.
      */
      stack<float> s;
      for(int i = 0; i < n; i++)
      {
         float time = (float(target - pair[i].first)/float(pair[i].second));
         if(s.empty())
            s.push(time);
         if(s.top() >= time)
               continue;
         else 
               s.push(time);
      }

      return s.size();
   }
};