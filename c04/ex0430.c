//**********************************//
//		ファイル名：ex0430.c		//
//		課題番号  ：4-3	        	//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-07-20		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int n;
	int cut;
	int i;
	int j;
	int w;
	int data[20]={0};
	
	n=0;
	i=0;
	while(i<15 && n!=-1){
		printf("正の整数(1〜100)を入力してください。-1(終了)\n");
		scanf("%d",&n);
		if(n!=-1){
			data[i]=n;
			i++;
		}
	}
	
	cut=i;
	printf("ソート前\n");
	for(i=0; i<cut; i++){
		printf("%5d",data[i]);
		if((i+1)%7==0)
			printf("\n");
	}
	printf("\n");
	
	for(i=0; i<cut-1; i++){
		for(j=i+1; j<cut;  j++){
			if(data[i]>data[j]){
			w=data[i];
			data[i]=data[j];
			data[j]=w;
			}
		}
	}
		printf("ソート後\n");
	for(i=0; i<cut; i++){
		printf("%5d",data[i]);
		if((i+1)%7==0)
			printf("\n");
	}
		
		
	return 0;
}
/* 実行結果
�@35,87,21,18,3,98,100,13,9,7,67,29,41,72,-1

正の整数(1〜100)を入力してください。-1(終了)
35
・
・
正の整数(1〜100)を入力してください。-1(終了)
-1
ソート前
   35   87   21   18    3   98  100
   13    9    7   67   29   41   72

ソート後
    3    7    9   13   18   21   29
   35   41   67   72   87   98  100
	
�A15個以上の整数データ

正の整数(1〜100)を入力してください。-1(終了)
35
・
・
正の整数(1〜100)を入力してください。-1(終了)
55
ソート前
   35   87   21   18    3   98  100
   13    9    7   67   29   41   72
   55
ソート後
    3    7    9   13   18   21   29
   35   41   55   67   72   87   98
  100

*/