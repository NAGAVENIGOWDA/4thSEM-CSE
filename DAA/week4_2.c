#include <stdio.h>

#include <stdlib.h>

void solution(int rollnumber[],int n){
    int a,i,j;
for (i = 0; i < n; ++i){
   for (j = i + 1; j < n; ++j){
      if (rollnumber[i] > rollnumber[j]){
         a = rollnumber[i];
         rollnumber[i] =rollnumber[j];
         rollnumber[j] = a;
      }
   }
}
for(int i=0;i<n;i++){
    printf("%d ",rollnumber[i]);
}
}

int main()

{

// Driver code

int n;

scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

solution(arr,n);

return 0;

}