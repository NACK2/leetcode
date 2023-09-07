class Solution {
public:
    int startColor = 0;
    int newColor = 0;
    
    void fill(vector<vector<int>>& img, int r, int c) {
        if (r == img.size() || r == -1 || c == img[0].size() || c == -1 || img[r][c] == newColor) // out of bounds
            return;
        
        if (img[r][c] == startColor) {
            img[r][c] = newColor;
            fill(img, r+1, c);
            fill(img, r-1, c);
            fill(img, r, c+1);
            fill(img, r, c-1);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        startColor = image[sr][sc];
        newColor = color;
        
        fill(image, sr, sc);
        
        return image;
    }
};