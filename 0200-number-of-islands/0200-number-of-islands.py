class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows = len(grid)
        cols = len(grid[0])

        i = 0

        def dfs(row: int, col: int) -> None:
            if(row>=rows or row<0 or col>=cols or col<0 or grid[row][col] == "0"):
                return None

            grid[row][col] = "0"

            dfs(row+1, col)
            dfs(row, col+1)
            dfs(row-1, col)
            dfs(row, col-1)

        for row in range(rows):
            for col in range(cols):
                if grid[row][col] == "1":
                    i += 1
                    dfs(row, col)

        return i