
#include <stdio.h>
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
int getMedian(int ar1[], int ar2[], int n) 
{ 
    int i = 0; 
    int j = 0; 
    int count; 
    int m1 = -1, m2 = -1; 
  
   
    for (count = 0; count <= n; count++) { 
        
        if (i == n) { 
            m1 = m2; 
            m2 = ar2[0]; 
            break; 
        } 
  
       
        else if (j == n) { 
            m1 = m2; 
            m2 = ar1[0]; 
            break; 
        } 
  
        if (ar1[i] < ar2[j]) { 
            m1 = m2; 
            m2 = ar1[i]; 
            i++; 
        } 
        else { 
            m1 = m2; 
            m2 = ar2[j]; 
            j++; 
        } 
    } 
  
    return (m1 + m2) / 2; 
} 
  

int main() 
{ 
    int ar1[100];
    int ar2[100];
    int n1,n2,i; 
    
    printf("enter the value for n1\n");
    scanf("%d",&n1);
    
    printf("enter the value for n2\n");
    scanf("%d",&n2);
    
    if(n1!=n2)
     exit(0);
    
    printf("enter the elements of first array \n");
    for(i=0;i<n1;i++)
     scanf("%d",&ar1[i]); 
    
    printf("enter the elements of second array \n");
    for(i=0;i<n2;i++)
     scanf("%d",&ar2[i]);
    
    mergeSort(ar1,0,n1-1);
    mergeSort(ar2,0,n2-1);
    
    if (n1 == n2) 
        printf("Median is %d \n", getMedian(ar1, ar2, n1)); 
    else
        printf("Doesn't work for arrays of unequal size"); 
    getchar(); 
    return 0; 
} 

