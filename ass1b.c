#include <stdio.h>

int binarysearch(int arr[], int low, int high, int k) 
{
    if(low<=high) 
    {
        int mid = (low+high)/2;
        
        if(arr[mid] == k) 
        {
            return 1;
        }
        if(arr[mid] < k) 
        {
            return binarysearch(arr, mid+1,high, k);
        }
        else 
        {
            return binarysearch(arr, low, mid-1, k);
        }
    }
    return -1;
}

void findFirstAndLast(int arr[], int n, int x) 
{ 
    int first = -1, last = -1; 
    for (int i=0; i<n; i++) 
    { 
        if (x != arr[i]) 
            continue; 
        if (first == -1) 
            first = i; 
        last = i; 
    } 
    if (first != -1) 
        {printf("\n First Occurrence = %d",first); 
         printf("\n Last Occurrence = %d",last);} 
    else
        printf("Not Found"); 
} 

int main() 
{
    
    int t,key,count;
    printf("enter number of test cases\n");
    scanf("%d",&t);
    while(t--) 
    {
        int n, k,i;
        printf("enter number of elements\n");
        scanf("%d",&n);
        printf("which element do you want to search\n");
        scanf("%d",&k);
        int arr[n];
        printf("enter elements:\n");
        for(i=0;i<n;i++) 
        {
            scanf("%d",&arr[i]);
        }
        printf("%d \n",binarysearch(arr, 0, n-1, k));
        
        printf("enter key\n");
        scanf("%d",&key);
        
        for(i=0;i<n;i++)
        {if(arr[i]==key)
          count++;}
          
        printf("number of occurences- %d ",count);
        findFirstAndLast(arr,n,key);
        
    
    
    }
	
	return 0;
}
