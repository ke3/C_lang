//**********************************//
//		�t�@�C�����Fex0620.c		//
//		�ۑ�ԍ�  �F6-2      		//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-09-08       //
//**********************************//
#include <stdio.h>
int input_check(int min,int max,int *num_p);
int enzan_func(int n1,int n2,int *add,int *sub,int *mul,int *div);
int main(void)
{
	int n1;
	int n2;
	int add;
	int sub;
	int mul;
	int div;
	int inp_rtn=0;
	int enz_rtn;
	
	while(inp_rtn!=-1){
		printf("����1����͂��Ă�������(0�`9999)==>");
		inp_rtn=input_check(-1,9999,&n1);
		if(inp_rtn!=-1){
			printf("����2����͂��Ă�������(0�`9999)==>");
			inp_rtn=input_check(-1,9999,&n2);
		}
		if(inp_rtn!=-1){
			enz_rtn=enzan_func(n1,n2,&add,&sub,&mul,&div);
			printf("�a�F%d  ���F%d  �ρF%d  ",add,sub,mul,div);
			if(enz_rtn!=1){
				printf("���F%d\n",div);
			}else{
				printf("���F***\n");
			}
		}
	}
	printf("�I�����܂�\n");
	
	return 0;
}

int enzan_func(int n1,int n2,int *add,int *sub,int *mul,int *div)
{
	int enz_rtn;
	
	*add=n1+n2;
	*sub=n1-n2;
	*mul=n1*n2;
	if(n2!=0){
		*div=n1/n2;
		enz_rtn=0;
	}else{
		enz_rtn=1;
		
	}
	
	return enz_rtn;
}

int input_check(int min,int max,int *num_p)
{
	int inp_rtn;
	
	scanf("%d",num_p);
	while(*num_p<min||*num_p>max){
				printf("(%d�`%d)����͂��Ă�������==>",min+1,max);
				scanf("%d",num_p);
	}
	if(*num_p!=-1){
		inp_rtn=0;
	}else{
		inp_rtn=-1;
	}
	return inp_rtn;
}
/* ���s����
�@���̓G���[�f�[�^
����1����͂��Ă�������(0�`9999)==>10000
(0�`9999)����͂��Ă�������==>-2
(0�`9999)����͂��Ă�������==>
�An1>n2
����1����͂��Ă�������(0�`9999)==>10
����2����͂��Ă�������(0�`9999)==>5
�a�F15  ���F5  �ρF50  ���F2
�Bn1=n2
����1����͂��Ă�������(0�`9999)==>100
����2����͂��Ă�������(0�`9999)==>100
�a�F200  ���F0  �ρF10000  ���F1
�Cn1<n2
����1����͂��Ă�������(0�`9999)==>5
����2����͂��Ă�������(0�`9999)==>10
�a�F15  ���F-5  �ρF50  ���F0
�Dn1=0 n2��0
����1����͂��Ă�������(0�`9999)==>0
����2����͂��Ă�������(0�`9999)==>5
�a�F5  ���F-5  �ρF0  ���F0
�En1��0 n2=0
����1����͂��Ă�������(0�`9999)==>10
����2����͂��Ă�������(0�`9999)==>0
�a�F10  ���F10  �ρF0  ���F***
*/