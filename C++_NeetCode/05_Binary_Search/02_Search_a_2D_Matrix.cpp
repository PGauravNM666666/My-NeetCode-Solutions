class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) 
   {
      if(matrix.empty() ||  matrix[0].empty())   return false;
      int l = 0, r = (matrix.size() * matrix[0].size()) - 1; // first and last elements
    
      while(l <= r)
      {
         int mid = l + (r-l)/2;
         int mid_elem = matrix[mid / matrix[0].size()][mid % matrix[0].size()];

         if(mid_elem > target)
            r = mid - 1;
         else if(mid_elem < target)
         {
            l = mid+1;
         }
         else return true;
      }

      return false;
   }
};