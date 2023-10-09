class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer;
        int i = 0;
        vector<int> newbox = intervals[0];
        
        //sorting
        sort(intervals.begin(), intervals.end());

        for(i = 0; i < intervals.size(); i++)
        {
            newbox = intervals[i];
            while((i < intervals.size()-1) && newbox[1] >= intervals[i+1][0])
            {
                newbox = {newbox[0], max(intervals[i+1][1], newbox[1])};
                if((i < intervals.size()-1) )
                    i++;
            }
            answer.push_back(newbox);
        }
        return answer;
    }
};