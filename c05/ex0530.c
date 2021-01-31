//**********************************//
//		ファイル名：ex0530.c		//
//		課題番号  ：5-3	        	//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-08-25		//
//**********************************//
#include <stdio.h>

int input_check(int min,int max);
int search_dt(int num);

int main(void)
{
	int num;
	int flag;
	
	printf("整数を入力して下さい(0～500) 終了(-1)==>");
	num=input_check(-1,500);
	
	while(num!=-1){
		flag=search_dt(num);
		if(flag==1){
			printf("%dは配列内に見つかりました。\n",num);
		}else{
			printf("%dは配列内に見つかりませんでした。\n",num);
		}
		printf("整数を入力して下さい(0～500) 終了(-1)==>");
		num=input_check(-1,500);
	}
	printf("終了します\n");
			
	return 0;
}

int input_check(int min,int max )
{
	int num;
	
	scanf("%d",&num);
	while(num<min||num>max){
		printf("(%d～%d)を入力して下さい==>",min+1,max);
		scanf("%d",&num);
	}
	
	return num;
}

int search_dt(int num)
{
	int i=0;
	int flag;
	int num_dt[40]={15,225,0,500,34,176,7,78,380,92,64,86};
	
	while(i<12 && num!=num_dt[i]){
		i++;
	}
	if(i<12){
		flag=1;
	}else{
		flag=0;
	}
	
	return flag;
}
	
/* 実行結果
整数を入力して下さい(0～500) 終了(-1)==>15
15は配列内に見つかりました。
整数を入力して下さい(0～500) 終了(-1)==>86
86は配列内に見つかりました。
整数を入力して下さい(0～500) 終了(-1)==>0
0は配列内に見つかりました。
整数を入力して下さい(0～500) 終了(-1)==>500
500は配列内に見つかりました。
整数を入力して下さい(0～500) 終了(-1)==>501
(0～500)を入力して下さい==>-2
(0～500)を入力して下さい==>-1
終了します
*/