class Solution:
    def dfs(self, image, r, c, color):
        if r == len(image) or r == -1 or c == len(image[0]) or c == -1 or image[r][c] != self.startColor:
            return
        
        image[r][c] = color
        self.dfs(image, r+1, c, color)
        self.dfs(image, r-1, c, color)
        self.dfs(image, r, c+1, color)
        self.dfs(image, r, c-1, color)
    

    
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if image[sr][sc] == color:
            return image
        
        self.startColor = image[sr][sc]
        self.dfs(image, sr, sc, color)
        
        return image