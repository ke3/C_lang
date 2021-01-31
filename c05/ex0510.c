//**********************************//
//		ファイル名：ex0510.c		//
//		課題番号  ：5-1	        	//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-08-13		//
//**********************************//
#include <stdio.h>

void month_out(int lang,int month);

int main(void)
{
	int lang=1;
	int month;
	
	while(lang!=0){
		printf("言語を入力して下さい(1:英語 2:日本語 0:終了)==>");
		scanf("%d",&lang);
		if(lang!=0){
			printf("月を入力して下さい(1～12)==>");
			scanf("%d",&month);
			month_out(lang,month);
			lang=1;
		}
		
	}
	printf("終了します。\n");
	return 0;
}

void month_out(int lang,int month)
{
	char en_dt[][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	char ja_dt[][10]={"睦月","如月","弥生","卯月","皐月","水無月","文月","葉月","長月","神無月","霜月","師走"};

	if(lang==1){
		printf("%d月は英語で%sです。\n",month,en_dt[month-1]);
	}else{
		printf("%d月は日本語で%sです。\n",month,ja_dt[month-1]);
	}

	return;
}

/* 実行結果
言語を入力して下さい(1:英語 2:日本語 0:終了)==>1
月を入力して下さい(1～12)==>8
8月は英語でAugustです。
言語を入力して下さい(1:英語 2:日本語 0:終了)==>2
月を入力して下さい(1～12)==>8
8月は日本語で葉月です。
言語を入力して下さい(1:英語 2:日本語 0:終了)==>2
月を入力して下さい(1～12)==>10
10月は日本語で神無月です。
言語を入力して下さい(1:英語 2:日本語 0:終了)==>0
終了します。
*/