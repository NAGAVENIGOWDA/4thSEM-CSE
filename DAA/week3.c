#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int matrixScore(int **grid, int gridSize, int *gridColSize)
{
    // Write your code here
    int count = 0;
    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < *gridColSize; j++)
        {
            if(grid[i][j] == 0)
            {
                grid[i][j] = 1;
                count++;
            }
            else if(count > 0)
            {
                grid[i][j] = 0;
            }
            else
            {
                break;
            }
        }
        count = 0;
    }
    count = 0;

    for(int i = 0; i < *gridColSize; i++)
    {
        int zero_count = 0;
        int one_count = 0;
        for(int j = 0; j < gridSize; j++)
        {
            if(grid[j][i] == 0)
            {
                zero_count++;
            }
            else{
                one_count++;
            }
        }
        for(int j = 0; j < gridSize; j++)
        {
            if(zero_count > one_count)
            {
                if(grid[j][i] == 0)
                {
                    grid[j][i] = 1;
                }
                else{
                    grid[j][i] = 0;
                }
            }
        }      
        count = 0;
        one_count = 0;
        zero_count = 0;
    }

    int sum = 0;
    int c =0;
    for(int i = 0; i < gridSize; i++)
    {
        for(int j = (*gridColSize)-1; j >=0; j--)
        {
            
            sum = sum + (grid[i][c] * (pow(2,j)));
            c++;
        }
        c = 0;
    }
    
    return sum;
}

void main()
{
    // Driver Code
    int n;
    int m;
    scanf("%d", &n);

    int **mat = (int **)malloc(n * sizeof(int *));

    scanf("%d", &m);

    for (int i = 0; i < n; i++)
        mat[i] = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("%d", matrixScore(mat, n, &m));
}