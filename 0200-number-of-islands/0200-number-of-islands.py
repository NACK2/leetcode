class Solution:
    def dfs(self, grid, r, c):
        if r == len(grid) or r == -1 or c == len(grid[0]) or c == -1 or grid[r][c] == "0" or ((r, c)) in self.visited:
            return
        
        self.visited.add((r, c))
        self.dfs(grid, r+1, c)
        self.dfs(grid, r-1, c)
        self.dfs(grid, r, c+1)
        self.dfs(grid, r, c-1)
                
    def numIslands(self, grid: List[List[str]]) -> int:
        islands = 0
        self.visited = set()
        rows = len(grid)
        cols = len(grid[0])
        
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == "1" and ((r, c)) not in self.visited:
                    self.dfs(grid, r, c)
                    islands += 1
        
        return islands
                