#include <stdio.h>

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

void maxmeeting(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("Following activities are selected\n"); 
    i = 0; 
    printf(" meeting number: %d \n", i); 
    for (j = 1; j < n; j++) 
    { 
      if (s[j] >= f[i]) 
      { 
          printf (" \n meeting number: %d \n", j); 
          i = j; 
      } 
    } 
} 

int main() 
{   int n,i;
    int s[50];
    int f[50]; 
    printf("enter the number of meetngs:\n");
    scanf("%d",&n);
    printf("enter the start times:\n");
    for(i=0;i<n;i++)
     scanf("%d",&s[i]);
    printf("enter the finish times:\n"); 
    for(i=0;i<n;i++)
     scanf("%d",&f[i]); 
    insertionsort(s,n); 
    insertionsort(f,n);
    printf("start times:\n");
    for(i=0;i<n;i++)
     printf("%d\n",s[i]);
    printf("finish times:\n"); 
    for(i=0;i<n;i++)
     printf("%d\n",f[i]);
    maxmeeting(s, f, n); 
    return 0; 
} 
