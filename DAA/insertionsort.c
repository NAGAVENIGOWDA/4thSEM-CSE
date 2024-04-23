#include <math.h>
#include <stdio.h>
  

void find_swaps(int sl[], int n)
{
    int key,j;
    int count=0;
    //write your code here
   for(int i=1;i<n;i++){
    key=sl[i];
    j=i-1;
    while(sl[j]>key){
       sl[j+1]=sl[j];
       j--;
       count++;
    }
    sl[j+1]=key;

   }
   printf("%d",count);
}
  



void main()
{
    //Drivers Code
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    find_swaps(arr,n);

}
