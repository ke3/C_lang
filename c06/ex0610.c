//**********************************//
//		ファイル名：ex0610.c   		//
//		課題番号  ：6-1-0        	//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-09-07       //
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int a[10]={2,4,6,8,10,12,14,16,18,20};
	int c[10]={0};
	int *pta;
	int *ptc;
	
	printf("配列aの要素を配列cに転送する\n");
	printf("配列a:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("配列c:");
	pta=a;
	ptc=c;
	while(ptc<c+10){
		*ptc=*pta;
		printf("%3d",*ptc);
		pta++;
		ptc++;		
	}
	printf("\n");
	printf("配列aの要素を逆順に配列cに設定する\n");
	printf("配列a:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("配列c:");
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
/* 実行結果
配列aの要素を配列cに転送する
配列a:  2  4  6  8 10 12 14 16 18 20
配列c:  2  4  6  8 10 12 14 16 18 20
配列aの要素を逆順に配列cに設定する
配列a:  2  4  6  8 10 12 14 16 18 20
配列c: 20 18 16 14 12 10  8  6  4  2
*/