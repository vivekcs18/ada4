#include <iostream>
using namespace std;

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

int main() 
{
    
    int t;
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
    }
	return 0;
}
