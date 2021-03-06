//**********************************//
//		ファイル名：ex0620.c		//
//		課題番号  ：6-2      		//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-09-08       //
//**********************************//
#include <stdio.h>
int input_check(int min,int max,int *num_p);
int enzan_func(int n1,int n2,int *add,int *sub,int *mul,int *div);
int main(void)
{
	int n1;
	int n2;
	int add;
	int sub;
	int mul;
	int div;
	int inp_rtn=0;
	int enz_rtn;
	
	while(inp_rtn!=-1){
		printf("整数1を入力してください(0〜9999)==>");
		inp_rtn=input_check(-1,9999,&n1);
		if(inp_rtn!=-1){
			printf("整数2を入力してください(0〜9999)==>");
			inp_rtn=input_check(-1,9999,&n2);
		}
		if(inp_rtn!=-1){
			enz_rtn=enzan_func(n1,n2,&add,&sub,&mul,&div);
			printf("和：%d  差：%d  積：%d  ",add,sub,mul,div);
			if(enz_rtn!=1){
				printf("商：%d\n",div);
			}else{
				printf("商：***\n");
			}
		}
	}
	printf("終了します\n");
	
	return 0;
}

int enzan_func(int n1,int n2,int *add,int *sub,int *mul,int *div)
{
	int enz_rtn;
	
	*add=n1+n2;
	*sub=n1-n2;
	*mul=n1*n2;
	if(n2!=0){
		*div=n1/n2;
		enz_rtn=0;
	}else{
		enz_rtn=1;
		
	}
	
	return enz_rtn;
}

int input_check(int min,int max,int *num_p)
{
	int inp_rtn;
	
	scanf("%d",num_p);
	while(*num_p<min||*num_p>max){
				printf("(%d〜%d)を入力してください==>",min+1,max);
				scanf("%d",num_p);
	}
	if(*num_p!=-1){
		inp_rtn=0;
	}else{
		inp_rtn=-1;
	}
	return inp_rtn;
}
/* 実行結果
�@入力エラーデータ
整数1を入力してください(0〜9999)==>10000
(0〜9999)を入力してください==>-2
(0〜9999)を入力してください==>
�An1>n2
整数1を入力してください(0〜9999)==>10
整数2を入力してください(0〜9999)==>5
和：15  差：5  積：50  商：2
�Bn1=n2
整数1を入力してください(0〜9999)==>100
整数2を入力してください(0〜9999)==>100
和：200  差：0  積：10000  商：1
�Cn1<n2
整数1を入力してください(0〜9999)==>5
整数2を入力してください(0〜9999)==>10
和：15  差：-5  積：50  商：0
�Dn1=0 n2≠0
整数1を入力してください(0〜9999)==>0
整数2を入力してください(0〜9999)==>5
和：5  差：-5  積：0  商：0
�En1≠0 n2=0
整数1を入力してください(0〜9999)==>10
整数2を入力してください(0〜9999)==>0
和：10  差：10  積：0  商：***
*/