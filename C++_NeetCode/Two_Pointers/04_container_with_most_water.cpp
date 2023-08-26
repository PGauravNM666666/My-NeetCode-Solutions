class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = INT_MIN;
        int left = 0, right = height.size()-1;

        while(left < right)
        {
            int area = abs(right - left)*min(height[left], height[right]);
            if(area > max_area)
            {
                max_area = area;
            }
            if(height[left] < height[right])
                left++;
            else    right--;

        }
        return max_area;
    }
};