class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret(numRows);
        
        for (int r=0; r<numRows; ++r) {
            ret[r].resize(r+1);
            ret[r][0] = 1; // first col always 1
            for (int c=1; c<r; ++c) { // loop through middle cols 
                ret[r][c] = ret[r-1][c-1] + ret[r-1][c];
            }
            ret[r][r] = 1; // last col always 1
        }
        
        /*
        [
        [1], arr[0][0]
        [1, 1], arr[1][0] arr[1][1]
        [1, 2, 1], arr[2][0] arr[2][1] arr[2][2]
        [1, 3, 3, 1], arr[3][0] arr[3][1] arr[3][2] arr[3][3]
        [1, 4, 6, 4, 1] arr[4][0] arr[4][1] arr[4][2] arr[4][3] arr[4][4]
        ] 
        */
        
        return ret;
    }
};