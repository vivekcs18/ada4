#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionsort(int arr[], int n) 
{ 
    int i, j, min; 
  
   
    for (i = 0; i < n-1; i++) 
    { 
        
        min= i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
       
        swap(&arr[min], &arr[i]); 
    } 
} 

void klarge(int arr[], int n, int k) 
{int i;

 for (i=n-1;i>n-k-1;i--) 
  printf(" %d ",arr[i]);      
} 

int main()
{clock_t start_t1, end_t1, start_t2, end_t2;
 double total_t1, total_t2;
 int arr[100];
 int i,n,c,k;
 
 printf("enter the size of the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 
 printf("\n*****MAIN MENU*****\n");
 printf("1.selection sort\n");
 printf("2.k largest element\n");
 printf("3.exit\n");
 printf("\n*******************\n");
 printf("enter your choice:\n");
 scanf("%d",&c);
 printf("\n*******************\n");
 switch(c)
 {case 1:start_t1 = clock();
         selectionsort(arr,n);
         printf("the sorted array\n");
         for(i=0;i<n;i++)
          printf("%d \n",arr[i]);
         end_t1 = clock();
         total_t1 = (double)end_t1 - start_t1/CLOCKS_PER_SEC;
         printf("Total time taken by CPU for selection sort: %f\n",total_t1);
         break;
  case 2:start_t2 = clock();
         printf("enter the value of k:\n");
         scanf("%d",&k);
         selectionsort(arr,n);
         klarge(arr,n,k);
         end_t2 = clock();
         total_t2 = (double)end_t2 - start_t2/CLOCKS_PER_SEC;
         printf("Total time taken by CPU for selection sort: %f\n",total_t2); 
         break;               
 case 3: exit(0);
 }
  
 return 0;}
 
