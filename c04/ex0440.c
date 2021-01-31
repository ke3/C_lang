//**********************************//
//		ファイル名：ex0440.c		//
//		課題番号  ：4-4	        	//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-07-21		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	char data1[41]={0};
	char data2[21]={0};
	
	printf("Please Input data1(半角20文字まで)==>");
	scanf("%s",data1);
	printf("Please Input data2(半角20文字まで)==>");
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
/* 実行結果
�@半角1文字と半角1文字
Please Input data1(半角20文字まで)==>a
Please Input data2(半角20文字まで)==>b
Input data1:a
Input data2:b
data1+data2==>ab

�A半角20文字と半角20文字
Please Input data1(半角20文字まで)==>aaaaaaaaaabbbbbbbbbb
Please Input data2(半角20文字まで)==>ccccccccccdddddddddd
Input data1:aaaaaaaaaabbbbbbbbbb
Input data2:ccccccccccdddddddddd
data1+data2==>aaaaaaaaaabbbbbbbbbbccccccccccdddddddddd

�Brandom data
Please Input data1(半角20文字まで)==>abcdefg
Please Input data2(半角20文字まで)==>xyz
Input data1:abcdefg
Input data2:xyz
data1+data2==>abcxyz

*/