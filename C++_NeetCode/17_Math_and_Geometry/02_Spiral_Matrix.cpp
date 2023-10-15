class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m, n;
        m = matrix.size();
        n = matrix[0].size();
        int top = 0, bottom = m-1, left = 0, right = n-1;
        int direction = 1;
        vector<int> ans;
        while((left <= right) && (top <= bottom))
        {
            if(direction == 1)
            {
                for(int i=left;i <=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                direction = 2;
                top++;
            }
            else if(direction == 2)
            {
                for(int i= top; i <= bottom;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                direction = 3;
                right--;
            }
            else if(direction == 3)
            {
                for(int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                direction = 4;
            }
            else if(direction == 4)
            {
                for(int i = bottom; i >= top ; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
                direction = 1;
            }
        }
        return ans;
    }
};