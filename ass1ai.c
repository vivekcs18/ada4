#include<stdio.h>

void towers(int n,char frompeg,char topeg,char temp)
 { if(n==1)
   {printf("\n move disk 1 from peg %c to peg %c",frompeg,topeg);
    return;}
 towers(n-1,frompeg,temp,topeg);
 printf("\n move disk %d from peg %c to peg %c",n,frompeg,topeg);
 towers(n-1,temp,topeg,frompeg);
 }

int main()
{int n;
 printf("enter the number of disks:\n");
 scanf("%d",&n);
 printf("the sequence of moves involved in the tower of hanoi are :\n");
 towers(n,'a','c','b');
 return 0;
 }
 
