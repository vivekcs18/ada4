#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void insertionsort(int arr[], int n) 
{ 
   int i, ele, j; 
    for (i = 1; i < n; i++) { 
        ele = arr[i]; 
        j = i - 1; 
        
        while (j >= 0 && arr[j] > ele) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = ele; 
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
 printf("1.selection sort\n");
 printf("2.exit\n");
 printf("\n*******************\n");
 printf("enter your choice:\n");
 scanf("%d",&c);
 printf("\n*******************\n");
 switch(c)
 {case 1:start_t1 = clock();
         insertionsort(arr,n);
         printf("the sorted array\n");
         for(i=0;i<n;i++)
          printf("%d \n",arr[i]);
         end_t1 = clock();
         total_t1 = (double)end_t1 - start_t1/CLOCKS_PER_SEC;
         printf("Total time taken by CPU for insertion sort: %f\n",total_t1);
         break;
  
 case 2: exit(0);
 }
 }while(1==1); 
 return 0;}
