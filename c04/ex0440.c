//**********************************//
//		�t�@�C�����Fex0440.c		//
//		�ۑ�ԍ�  �F4-4	        	//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-07-21		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	char data1[41]={0};
	char data2[21]={0};
	
	printf("Please Input data1(���p20�����܂�)==>");
	scanf("%s",data1);
	printf("Please Input data2(���p20�����܂�)==>");
	scanf("%s",data2);

	printf("Input data1:");
	for(i=0; data1[i]!='\0'; i++){
		printf("%c",data1[i]);
	}	
	printf("\n");
	printf("Input data2:");
	for(i=0; data2[i]!='\0'; i++){
		printf("%c",data2[i]);
	}
	printf("\n");
	for(j=0; data2[j]!='\0'; j++,i++){
		data1[i]=data2[j];
	}
	data1[i]='\0';
	printf("data1+data2==>");
	printf("%s",data1);
	printf("\n");

	return 0;
}
/* ���s����
�@���p1�����Ɣ��p1����
Please Input data1(���p20�����܂�)==>a
Please Input data2(���p20�����܂�)==>b
Input data1:a
Input data2:b
data1+data2==>ab

�A���p20�����Ɣ��p20����
Please Input data1(���p20�����܂�)==>aaaaaaaaaabbbbbbbbbb
Please Input data2(���p20�����܂�)==>ccccccccccdddddddddd
Input data1:aaaaaaaaaabbbbbbbbbb
Input data2:ccccccccccdddddddddd
data1+data2==>aaaaaaaaaabbbbbbbbbbccccccccccdddddddddd

�Brandom data
Please Input data1(���p20�����܂�)==>abcdefg
Please Input data2(���p20�����܂�)==>xyz
Input data1:abcdefg
Input data2:xyz
data1+data2==>abcxyz

*/