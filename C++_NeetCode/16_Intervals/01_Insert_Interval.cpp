class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> answer;
        int first = newInterval[0], last = newInterval[1];
        int i = 0;
        for(i = 0; i < intervals.size(); i++)
        {
            
            
            if(intervals[i][0] > last)
            {
                answer.push_back(newInterval);
                while(i < intervals.size())
                {
                    answer.push_back(intervals[i]);
                    i++;
                }
                return answer;
            }
            else if(first > intervals[i][1])
                answer.push_back(intervals[i]);
            else
            {
                newInterval = {min(newInterval[0], intervals[i][0]), max(newInterval[1], intervals[i][1])};
                
            }
        }
        answer.push_back(newInterval);
        return answer;
    }
};