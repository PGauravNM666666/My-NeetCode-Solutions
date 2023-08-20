class Solution {
public:
    int trap(vector<int>& height) 
    {
        vector<int> left, right;
        int volume = 0, n = height.size(), maxi = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, height[i]);
            left.push_back(maxi);
        }
        maxi = INT_MIN;
        for(int i = n-1; i >= 0; i--)
        {
            maxi = max(maxi, height[i]);
            right.push_back(maxi);
        }
        reverse(right.begin(), right.end());
        for(int i = 0;i < n; i++)
        {
            volume += (min(left[i], right[i]) - height[i]);
        }
        return volume;
    }
};