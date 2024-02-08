#include<stdio.h>
int main()

{
   int a=0;
   int b=0;
   int c=0;
   printf("\nEnter a,b,c:",a,b,c);
   scanf("%d%d%d",&a,&b,&c);

   if (a>b && b>c) printf("Maximum value is %d\n",a);
   
   else if (a<b & b<c) printf("Maximum value is %d\n",c);
   
   else if (a<b & b>c) printf("Maximum value is %d\n",b);
   
   else if (a>b & b<c) 
   { if (a>c) printf("Maximum Value is %d\n",a);
   else printf("Maximum Value is %d\n",c);
   }
   
   else printf("fuck off");
  

   return 0;







}