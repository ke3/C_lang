//**********************************//
//		�t�@�C�����Fex0510.c		//
//		�ۑ�ԍ�  �F5-1	        	//
//		�쐬��    �F��F      		//
//		�ԍ�      :	8				//
//		���t      :2020-08-13		//
//**********************************//
#include <stdio.h>

void month_out(int lang,int month);

int main(void)
{
	int lang=1;
	int month;
	
	while(lang!=0){
		printf("�������͂��ĉ�����(1:�p�� 2:���{�� 0:�I��)==>");
		scanf("%d",&lang);
		if(lang!=0){
			printf("������͂��ĉ�����(1�`12)==>");
			scanf("%d",&month);
			month_out(lang,month);
			lang=1;
		}
		
	}
	printf("�I�����܂��B\n");
	return 0;
}

void month_out(int lang,int month)
{
	char en_dt[][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	char ja_dt[][10]={"�r��","�@��","�퐶","�K��","�H��","������","����","�t��","����","�_����","����","�t��"};

	if(lang==1){
		printf("%d���͉p���%s�ł��B\n",month,en_dt[month-1]);
	}else{
		printf("%d���͓��{���%s�ł��B\n",month,ja_dt[month-1]);
	}

	return;
}

/* ���s����
�������͂��ĉ�����(1:�p�� 2:���{�� 0:�I��)==>1
������͂��ĉ�����(1�`12)==>8
8���͉p���August�ł��B
�������͂��ĉ�����(1:�p�� 2:���{�� 0:�I��)==>2
������͂��ĉ�����(1�`12)==>8
8���͓��{��ŗt���ł��B
�������͂��ĉ�����(1:�p�� 2:���{�� 0:�I��)==>2
������͂��ĉ�����(1�`12)==>10
10���͓��{��Ő_�����ł��B
�������͂��ĉ�����(1:�p�� 2:���{�� 0:�I��)==>0
�I�����܂��B
*/