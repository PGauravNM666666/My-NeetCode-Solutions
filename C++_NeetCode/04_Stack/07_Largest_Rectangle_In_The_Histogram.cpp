class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area = 0;
        stack<pair<int, int>> stac; //index and height
        int start = 0; //to keep track of the index/area to check if we can extend the area backwards or not
        int index, height, n = heights.size();
        /*
        > you pop when the current height is less than the stac.top(), which is the previous one.
        > before poping, you check the area the single block created and pop it.
        > make the start point of it the index of it.
        > and in the while loop, if the current one is still lesser than the top, check the area from the current block -> to the stac.top block
        > keep updating the start variable with the index of the block you are popping.
        */
        for(int i = 0; i < n; i++)
        {
            start = i;
            while(!stac.empty() && stac.top().second > heights[i])
            {
                index = stac.top().first;
                height = stac.top().second;
                stac.pop();
                max_area = max(max_area, height * (i - index));
                start = index;
            }
            stac.push({start, heights[i]});
        }

        //now for the remaining items in the stack
        while(!stac.empty())
        {
            index = stac.top().first;
            height = stac.top().second;

            max_area = max(max_area, height * (n - index));
            stac.pop();
        }
        return max_area;
    }
};