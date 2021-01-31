//**********************************//
//		�t�@�C�����Fex0530.c		//
//		�ۑ�ԍ�  �F5-3	        	//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-08-25		//
//**********************************//
#include <stdio.h>

int input_check(int min,int max);
int search_dt(int num);

int main(void)
{
	int num;
	int flag;
	
	printf("��������͂��ĉ�����(0�`500) �I��(-1)==>");
	num=input_check(-1,500);
	
	while(num!=-1){
		flag=search_dt(num);
		if(flag==1){
			printf("%d�͔z����Ɍ�����܂����B\n",num);
		}else{
			printf("%d�͔z����Ɍ�����܂���ł����B\n",num);
		}
		printf("��������͂��ĉ�����(0�`500) �I��(-1)==>");
		num=input_check(-1,500);
	}
	printf("�I�����܂�\n");
			
	return 0;
}

int input_check(int min,int max )
{
	int num;
	
	scanf("%d",&num);
	while(num<min||num>max){
		printf("(%d�`%d)����͂��ĉ�����==>",min+1,max);
		scanf("%d",&num);
	}
	
	return num;
}

int search_dt(int num)
{
	int i=0;
	int flag;
	int num_dt[40]={15,225,0,500,34,176,7,78,380,92,64,86};
	
	while(i<12 && num!=num_dt[i]){
		i++;
	}
	if(i<12){
		flag=1;
	}else{
		flag=0;
	}
	
	return flag;
}
	
/* ���s����
��������͂��ĉ�����(0�`500) �I��(-1)==>15
15�͔z����Ɍ�����܂����B
��������͂��ĉ�����(0�`500) �I��(-1)==>86
86�͔z����Ɍ�����܂����B
��������͂��ĉ�����(0�`500) �I��(-1)==>0
0�͔z����Ɍ�����܂����B
��������͂��ĉ�����(0�`500) �I��(-1)==>500
500�͔z����Ɍ�����܂����B
��������͂��ĉ�����(0�`500) �I��(-1)==>501
(0�`500)����͂��ĉ�����==>-2
(0�`500)����͂��ĉ�����==>-1
�I�����܂�
*/