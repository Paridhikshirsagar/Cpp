
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       
        int depth = triangle.size();
      
  
        vector<int> minPathSums(depth + 1, 0);
    
        for (int row = depth - 1; row >= 0; --row) {
       
            for (int col = 0; col <= row; ++col) {
                
                minPathSums[col] = min(minPathSums[col], minPathSums[col + 1]) + triangle[row][col];
            }
        }
      
       
        return minPathSums[0];
    }
};
