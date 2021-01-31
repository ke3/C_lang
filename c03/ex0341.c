//**********************************//
//		ファイル名：ex0341.c		//
//		課題番号  ：サンプル		//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-0702    	//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	int h;
	
	printf("正の整数値(3〜9)を入力。\n");
	scanf("%d",&h);
	
	for(i=1; i<=h; i++){
		for(j=1; j<=h-i; j++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/* 実行結果
正の整数値(3〜9)を入力。
9
        *
       **
      ***
     ****
    *****
   ******
  *******
 ********
*********

*/