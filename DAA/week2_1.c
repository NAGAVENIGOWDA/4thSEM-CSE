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

void multiplyMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1)

{


for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        second[j][i]=first[i][j];
    }
}

for(int i=0;i<r1;i++){
    for(int j=0;j<r1;j++){
        result[i][j]=0;
        for(int k=0;k<c1;k++){
            result[i][j]= result[i][j]+(first[i][k]* second[k][j]);

        }
    }
}


}

// Driver Code

int main()

{

int i, j, r1, c1;

scanf("%d %d", &r1, &c1);

int A[10][10], B[10][10], result[10][10];

getMatrixElements(A, r1, c1);

multiplyMatrices(A, B, result, r1, c1);

printf("Output -\n");

for (i = 0; i < r1; i++) {

for (j = 0; j < r1; j++)

printf("%d\t", result[i][j]);

printf("\n");

}

return 0;

}