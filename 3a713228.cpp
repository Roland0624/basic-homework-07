#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int hi,i,sum;   	
 printf("�п�J�@�Ӿ��:");
 scanf("%d",&hi);
 sum=(hi*(hi+1)/2);
 printf("����");
  for(i =1; i<=hi; i++)
  {
    if(i!=hi)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
    

}



