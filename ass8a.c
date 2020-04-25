#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
   
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
  
        
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
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
 printf("1.merge sort\n");
 printf("2.exit\n");
 printf("\n*******************\n");
 printf("enter your choice:\n");
 scanf("%d",&c);
 printf("\n*******************\n");
 switch(c)
 {case 1:start_t1 = clock();
         mergeSort(arr,0,n-1);
         printf("the sorted array\n");
         for(i=0;i<n;i++)
          printf("%d \n",arr[i]);
         end_t1 = clock();
         total_t1 = (double)end_t1 - start_t1/CLOCKS_PER_SEC;
         printf("Total time taken by CPU for merge sort: %f\n",total_t1);
         break;
  
 case 2: exit(0);
 }
 }while(1==1); 
 return 0;}
