#include <stdio.h>

void getMatrixElements(int matrix[][10], int row, int column)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int minimum(int x1,int x2){
    if(x1<x2){
        return x1;
    }
    else{
        return x2;
    }
}

void multiplyMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1, int r2, int c2)
{
	//Write your solution here
	if((r1+c2)%2!=0){
        for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        result[i][j]=0;
        for(int k=0;k<r1;k++){
            result[i][j]= result[i][j]+(first[i][k]* second[k][j]);

        }
    }
}
}

else{
    for(int i=0;i<(minimum(r1,r2));i++){
        for(int j=0;j<(minimum(c1,c2));j++){
            result[i][j]=first[i][j]+second[i][j];
        }
    }
}
}


void display(int result[][10], int row, int column)
{
    printf("Output -\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

// Driver code
int main()
{
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    while (c1 != r2)
    {
        printf("Error! Enter rows and columns again.\n");
        scanf("%d%d", &r1, &c1);
        scanf("%d%d", &r2, &c2);
    }

    getMatrixElements(first, r1, c1);
    getMatrixElements(second, r2, c2);

    multiplyMatrices(first, second, result, r1, c1, r2, c2);
    display(result, r1, c2);

    return 0;
}
