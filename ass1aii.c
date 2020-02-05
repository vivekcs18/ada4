#include <stdio.h>


int gcd(int m,int n)
{if(n==0)
  return m;
 else
  gcd(n,m%n);
  } 

int main()
{int t,m,n,res;
 printf("enter number of test cases:\n");
 scanf("%d",&t);
 while(t--)
 {printf("enter the value of m:\n");
  scanf("%d",&m);
  printf("enter the value of n:\n");
  scanf("%d",&n);
  res=gcd(m,n);
  printf("gcd= %d",res);}
  return 0;
 }
  

