#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1); 
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;  
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
 
void quicksort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
} 
  

int main()
{clock_t start_t1, end_t1;
 double total_t1, total_t2;
 int arr[100];
 int i,n,c,k;
 
 printf("enter the size of the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 
 do{
 printf("\n*****MAIN MENU*****\n");
 printf("1.quick sort\n");
 printf("2.exit\n");
 printf("\n*******************\n");
 printf("enter your choice:\n");
 scanf("%d",&c);
 printf("\n*******************\n");
 switch(c)
 {case 1:start_t1 = clock();
         quicksort(arr,0,n-1);
         printf("the sorted array\n");
         for(i=0;i<n;i++)
          printf("%d \n",arr[i]);
         end_t1 = clock();
         total_t1 = (double)end_t1 - start_t1/CLOCKS_PER_SEC;
         printf("Total time taken by CPU for quick sort: %f\n",total_t1);
         break;
  
 case 2: exit(0);
 }
 }while(1==1); 
 return 0;}
