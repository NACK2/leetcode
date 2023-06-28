class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target)
            return true;
        
        // col and row same bc its n x n matrix
        int n = mat.size();
        vector<vector<int>> tmp(n, vector<int>(n));
        
        // 90 cw
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                tmp[i][j] = mat[n-1-j][i];
            }
        }
        if (tmp == target) 
            return true;
        
         // 180
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                tmp[i][j] = mat[n-1-i][n-1-j];
            }
        }
        if (tmp == target) 
            return true;
    
        // 90 ccw       
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                tmp[i][j] = mat[j][n-1-i];  
            }
        }
        if (tmp == target) 
            return true;
        
        return false;
    }
};