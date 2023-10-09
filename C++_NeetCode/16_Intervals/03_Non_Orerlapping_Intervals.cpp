class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        int prevend = intervals[0][1];
        for( int i = 1; i < intervals.size(); i++)
        {
            if(prevend <= intervals[i][0])
            {
                prevend = intervals[i][1];
            }
            else
            {
                count++;
                prevend = min(prevend, intervals[i][1]);
            }
        }
        return count;
    }
};