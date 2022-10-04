#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
   
   int a,answer=59,num=0;

   do
   {
    printf("guess a number : ");
    scanf("%d",&a);
    
    if (a>answer)
    {
		printf("high \n");
    	num= num+1;
    }  
    else if (a<answer)
    {
    	printf("low \n");
    	num= num+1;
    }    
   }
   while(a!=59);
   num= num+1;
   printf("congratulation! trials: %d",num);
   
   return 0;
}

