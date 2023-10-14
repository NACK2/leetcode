class Solution:
    def bfs(self, grid, r, c):
        q = [];
        self.visited.add((r, c))
        q.append((r, c))
        
        while q:
            pairIndex = q.pop(0)
            directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]
            
            # exploring adjacent nodes, checking if its land and not visited
            for i in directions:
                dr, dc = i[0], i[1]
                r = pairIndex[0] + dr
                c = pairIndex[1] + dc
                if r < len(grid) and c < len(grid[0]) and r > -1 and c > -1 and grid[r][c] == "1" and (r, c) not in self.visited:
                    self.visited.add((r, c))
                    q.append((r, c))
                
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid: 
            return 0
        
        rows = len(grid)
        cols = len(grid[0])
        islands = 0
        self.visited = set() # (r, c) is in visited if we have visited it before

        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == "1" and (r, c) not in self.visited:
                    self.bfs(grid, r, c)
                    islands += 1
                    
        return islands
                