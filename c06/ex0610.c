//**********************************//
//		�t�@�C�����Fex0610.c   		//
//		�ۑ�ԍ�  �F6-1-0        	//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-09-07       //
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int a[10]={2,4,6,8,10,12,14,16,18,20};
	int c[10]={0};
	int *pta;
	int *ptc;
	
	printf("�z��a�̗v�f��z��c�ɓ]������\n");
	printf("�z��a:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("�z��c:");
	pta=a;
	ptc=c;
	while(ptc<c+10){
		*ptc=*pta;
		printf("%3d",*ptc);
		pta++;
		ptc++;		
	}
	printf("\n");
	printf("�z��a�̗v�f���t���ɔz��c�ɐݒ肷��\n");
	printf("�z��a:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("�z��c:");
	pta=a+9;
	ptc=c;
	while(ptc<c+10){
		*ptc=*pta;
		printf("%3d",*ptc);
		pta--;
		ptc++;
	}
	return 0;
}
/* ���s����
�z��a�̗v�f��z��c�ɓ]������
�z��a:  2  4  6  8 10 12 14 16 18 20
�z��c:  2  4  6  8 10 12 14 16 18 20
�z��a�̗v�f���t���ɔz��c�ɐݒ肷��
�z��a:  2  4  6  8 10 12 14 16 18 20
�z��c: 20 18 16 14 12 10  8  6  4  2
*/