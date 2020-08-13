#include<stdio.h>
main()
{
   int a,b,c;
   printf("Enter values of a and b:");
   scanf("%d%d",&a,&b);
   c = a;
   a = b;
   b = c;
   printf("After swapping: a=%d,b=%d",a,b);
   return 0;
}
