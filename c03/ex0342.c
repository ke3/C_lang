//**********************************//
//		�t�@�C�����Fex0342.c		//
//		�ۑ�ԍ�  �F�T���v��		//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-0702    	//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	int h;
	
	printf("���̐����l(3�`9)����́B\n");
	scanf("%d",&h);
	
	for(i=1; i<=h; i++){
		for(j=0; j<=i; j++){
			printf(" ");
		}
		
		for(j=h; j<=h; j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/* ���s����

*/