class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n=temperatures.size();
        vector<int> answer(n, 0); //n size with all 0s

        stack<pair<int, int>> s; // temp, index
        for(int i = 0; i < n; i++)
        {
            // if(s.empty())
            //     s.push({temperatures[i],i});

            while(!s.empty() && (temperatures[i] > s.top().first))
            {
                answer[s.top().second] = abs(i - s.top().second);
                s.pop();
            }
            s.push({temperatures[i], i});
            // if(temperatures[i] <= s.top().first)
            // {
            //     s.push({temperatures[i], i});
            // }
        }


        return answer;

/********Brute force method**********/
      /*
      int flag = 0;
      for(int i=0;i<n;i++)
      {
         count = 0;
         for(int j=i;j<n;j++)
         {
               if(temperatures[j] <= temperatures[i])
               {
                  count++;
                  flag = 0;
               }
               else
               {
                  flag = 1;
                  break;
               }
         }
         if(flag)
               answer.push_back(count);
         else
               answer.push_back(0);
      }*/
        
    }
};