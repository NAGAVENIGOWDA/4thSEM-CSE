#include <stdio.h>



int partition(int array[], int low, int high)
{int tmp1;
int tmp2;
    int pivot = array[low];
    int i=low;
    int j=high;
    do{
    while(array[i]<=pivot){
        i++;
    }
    while(array[j]>pivot){
        j--;
    }
    if(i<j)
    {tmp1=array[i];
    array[i]=array[j];
    array[j]=tmp1;
    }
    }while(i<j);
  //if j>i
    tmp2=array[low];
    array[low]=array[j];
    array[j]=tmp2;
// Continue
return j; //j is at correct p

}

void carsequence(int array[], int low, int high)
{int partition_val;
	// Write your code here
    if(low<high){
        partition_val=partition(array,low,high);
        carsequence(array,low,partition_val-1);
        carsequence(array,partition_val+1,high);
    }
}

// Driver's code
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    carsequence(arr, 0, n - 1);
    for (int i = 0; i < n; ++i)
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

