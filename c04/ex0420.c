//**********************************//
//		�t�@�C�����Fex0420.c		//
//		�ۑ�ԍ�  �F4-2	        	//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-07-09		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int a[]={2,4,6,8,10,12,14,16,18,20};
	int c[10]={0};
	int j;

	printf("�����l�f�[�^\n");
	printf("�z�� a:");
	for(i=0; i<10; i++){
		printf("%4d",a[i]);
	}
	printf("\n");
	printf("�z�� c:�Ȃ�\n");
	printf("\n");
	
	printf("�@�z��c�ɔz��a�̗v�f���ׂĂ�]������\n");
	printf("�z�� a:");
	for(i=0; i<10; i++){
		printf("%4d",a[i]);
		c[i] = a[i];
	}
	printf("\n");
	printf("�z�� c:");
	for(i=0; i<10; i++){
		printf("%4d",c[i]);
	}
	printf("\n");
	printf("\n");
	
	printf("�A�z��c�ɔz��a�̗v�f���ׂĂ��t���ɐݒ肷��\n");
	printf("�z�� a:");
	for(i=0; i<10; i++){
		printf("%4d",a[i]);
	}
	printf("\n");
	printf("�z�� c:");
	
	i=0;
	for(j=9; j>=0; j--){
		c[i] = a[j];
		i++;
	}
	for(i=0; i<10; i++){
		printf("%4d",c[i]);
	}
	
	
	return 0;
}
/* ���s����
�����l�f�[�^
�z�� a:   2   4   6   8  10  12  14  16  18  20
�z�� c:�Ȃ�

�@�z��c�ɔz��a�̗v�f���ׂĂ�]������
�z�� a:   2   4   6   8  10  12  14  16  18  20
�z�� c:   2   4   6   8  10  12  14  16  18  20

�A�z��c�ɔz��a�̗v�f���ׂĂ��t���ɐݒ肷��
�z�� a:   2   4   6   8  10  12  14  16  18  20
�z�� c:  20  18  16  14  12  10   8   6   4   2
*/