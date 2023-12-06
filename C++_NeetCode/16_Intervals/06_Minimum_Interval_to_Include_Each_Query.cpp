class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(intervals.begin(), intervals.end());
        vector<int> answer(queries.size(), -1);
        int mini = 10000002;
        for(int i= 0; i < queries.size(); i++)
        {
            mini = 10000002;
            for(int j=0;j<intervals.size();j++)
            {
                if(queries[i] >= intervals[j][0] && queries[i] <= intervals[j][1])
                {
                    int difference = intervals[j][1] - intervals[j][0] + 1;
                    mini = min(difference, mini);
                    answer[i] = mini;
                }
                if(queries[i] < intervals[j][0])
                    break;
            }
            
        }
        return answer;
    }
    
};