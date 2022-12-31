/*
  Date : 31/12/2022
  Platform : Leetcode
  Problem Link : https://leetcode.com/problems/unique-paths-iii/description/
*/  


class Solution {
    public int uniquePathsIII(int[][] grid) {
        int zero = 0;    // count the 0's
        int sx = 0;      // starting x index
        int sy = 0;      // starting y index


        for(int r = 0; r < grid.length;r++)   // r for rows and c for columns
        {
            for(int c = 0 ; c < grid[0].length;c++)
            {
                if(grid[r][c] == 0)           // if current cell = 0 count it in zero variable.
                    zero++;
                else if(grid[r][c] == 1)      // If we get 1 as it is starting index save the coordinates in sx and sy
                {
                    sx = r;
                    sy = c;
                }    
            }
        }
        return dfs(grid, sx,sy,zero);
    }

    private int dfs(int grid[][], int x, int y, int zero)
    {
         if(x < 0 || y < 0 || x>=grid.length || y >= grid[0].length || grid[x][y] == -1)
        return 0;

    if(grid[x][y] == 2)
        return zero == -1 ? 1 : 0;

    grid[x][y] = -1;
    zero--;


    int totalcount = 
    dfs(grid, x+1,y,zero) +   
    dfs(grid, x-1,y,zero) +   
    dfs(grid, x,y+1,zero) +   
    dfs(grid, x,y-1,zero);

    // backtrack

    grid[x][y] = 0;
    zero++;

    return totalcount;     
    }
}
