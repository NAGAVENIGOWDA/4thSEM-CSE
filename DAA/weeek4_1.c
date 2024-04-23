#include <stdio.h>

void sorting(int num[],int n){
    int a,i,j;
for (i = 0; i < n; ++i){
   for (j = i + 1; j < n; ++j){
      if (num[i] > num[j]){
         a = num[i];
         num[i] = num[j];
         num[j] = a;
      }
   }
}
}
int marriage(int boys[], int girls[], int n)

{
    int count=0;
    sorting(boys,n);
    sorting(girls,n);
    for(int i=0;i<n;i++){
        if(boys[i]==girls[i]){
            count++;
        }


  }
return count;
// Write your code here

}
int main()

{

int n;

scanf("%d", &n);

int boys[n], girls[n], res;

for (int i = 0; i < n; i++)

scanf("%d", &boys[i]);

for (int i = 0; i < n; i++)

scanf("%d", &girls[i]);

res = marriage(boys, girls, n);

printf("%d",res);

return 0;

}