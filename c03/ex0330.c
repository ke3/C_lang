//**********************************//
//		ファイル名：ex0330.c		//
//		課題番号  ：サンプル		//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-06-29		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	int k;
	
	printf("   -----------------------九九表--------------------------\n");
	printf("   ");
	
	for(i=1; i<=9; i++){
		printf("%6d",i);
	}
	printf("\n");
	printf("   -------------------------------------------------------\n");
		
	for(j=1; j<=9; j++){
		printf("%2d|",j);
			for(k=1; k<=9; k++){
				printf("%6d",j*k);
			}
		printf("\n");
	}
	return 0;
}
/* 実行結果
   -----------------------九九表--------------------------
        1     2     3     4     5     6     7     8     9
   -------------------------------------------------------
 1|     1     2     3     4     5     6     7     8     9
 2|     2     4     6     8    10    12    14    16    18
 3|     3     6     9    12    15    18    21    24    27
 4|     4     8    12    16    20    24    28    32    36
 5|     5    10    15    20    25    30    35    40    45
 6|     6    12    18    24    30    36    42    48    54
 7|     7    14    21    28    35    42    49    56    63
 8|     8    16    24    32    40    48    56    64    72
 9|     9    18    27    36    45    54    63    72    81
	
*/