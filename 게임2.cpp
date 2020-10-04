#include <stdio.h>
#include <string.h>
int main(void)
{
   char money[100];
   
   int i,j,k;
   char *unit01[]={"경","조","억", "만", "원"};	
   printf("금액을 입력하고 Enter>");
   scanf("%s", money);
   printf("\n화폐단위\n");
   k=strlen(money);		//문자열 길이  
   if(k>20){			//범위를 넘어선 값이 입력되면 종 료  
   		printf("범위를 넘었습니다.");
   		return 0;
   	}
   	else
   	{	  
   		j=4-(k/4);		//입력받은 값에 따라 단위 조절 
   		if(k%4==0&&k!=0)	
   			j+=1;
   			
   		for(i=0;i<k;i++)		//출 력  
   		{
   			printf("%c",money[i]);
   			if((k-1-i)%4==0)	//단위 출력  
   				printf("%s ",unit01[j++]);
   		}
   		return 0;
   	}
}

