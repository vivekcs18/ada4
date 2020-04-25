#include<stdio.h> 
int max(int a, int b)
 { 
     return (a > b)? a : b;
}  
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 
    for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
     return K[n][W]; 
} 
int main() 
{
    int W,n,i;
    int val[10] , wt[10] ; 
    printf("Enter number of items:\n");
    scanf("%d",&n);
    printf("Enter value for each item\n");
    for(i=0;i<n;i++)
    scanf("%d",&val[i]);
    printf("Enter weight of each item respectively\n");
    for(i=0;i<n;i++)
    scanf("%d",&wt[i]);
    printf("Enter total weight :\n");
    scanf("%d",&W);
    printf("Maximum amount : %d", knapSack(W, wt, val, n)); 
    return 0; 
}
