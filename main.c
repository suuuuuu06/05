#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int a;
   
   printf("���� �ϳ��� �Է��Ͻÿ� : ");
   scanf("%d",&a);
   
   if (a<0)
	{
	a=-1*a;
    printf("������ %d �Դϴ�.",a);
    }
   
   
   else
    printf("������ %d �Դϴ�.",a);
    
   return 0;  
	 
	
}
