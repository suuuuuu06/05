#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
   
   int x,y,result;
   char a;
   
   printf("enter the calculation: ");
   scanf("%d%c%d",&x,&a,&y);
   
   if(a=='+')
     result= x+y;
    
    
   else if (a=='-')
     result= x-y;
    
    
    else if (a=='*')
     result= x*y;
    

   else
     result= x/y;
   
   printf("=%d",result);
    
   
   return 0;
}

