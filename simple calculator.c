#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
 int v,n;
 float a;
 char o;
 printf("Enter calculation:\n\n");
 scanf("%d %c %d", &v, &o, &n);
 if (o=='/' || o=='*' || o=='+' || o=='-' || o=='^' || o=='%')
   {
     if(o=='/')
       {
       a=(v/n);
       }
     else if(o=='*')
       {
       a=(v*n);
       }
     else if(o=='+')
       {
       a=(v+n);
       }
     else if(o=='-')
       {
       a=(v-n);
       }
     else if(o=='^')
       {
       a=pow(v,n);
       }
     else
       {
       a=(v%n);
       }
     printf("%d%c%d =  %.2f\n\n",v,o, n, a);
   }
 else
  {
  printf("invalid operation");
  }
 return 0;
}
