#include <stdio.h>
#include <string.h>
int main(void)
{
   char money[100];
   
   int i,j,k;
   char *unit01[]={"��","��","��", "��", "��"};	
   printf("�ݾ��� �Է��ϰ� Enter>");
   scanf("%s", money);
   printf("\nȭ�����\n");
   k=strlen(money);		//���ڿ� ����  
   if(k>20){			//������ �Ѿ ���� �ԷµǸ� �� ��  
   		printf("������ �Ѿ����ϴ�.");
   		return 0;
   	}
   	else
   	{	  
   		j=4-(k/4);		//�Է¹��� ���� ���� ���� ���� 
   		if(k%4==0&&k!=0)	
   			j+=1;
   			
   		for(i=0;i<k;i++)		//�� ��  
   		{
   			printf("%c",money[i]);
   			if((k-1-i)%4==0)	//���� ���  
   				printf("%s ",unit01[j++]);
   		}
   		return 0;
   	}
}

