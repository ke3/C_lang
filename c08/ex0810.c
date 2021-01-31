//**********************************//
//		ファイル名：ex0810.c		//
//		課題番号  ：8-1      		//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-09-28       //
//**********************************//
#include <stdio.h>
struct tf{
	int no;
	char mi[6];
	char name[11];
	int en;
	int ma;
	int ja;
	int sum;
	int avg;
};
int main(int argc, char *argv[])
{
	struct tf pd;
	FILE *fout;
	FILE *fin;
	int rc;

	if(argc!=3){
		printf("引数の数が違います。\n");
		return 1;
	}
	fin=fopen(argv[1],"r");
	if(fin==NULL){
		printf("得点ファイルをオープンできません。\n");
		return 1;
	}
	
	fout=fopen(argv[2],"w");
	
		if(fout==NULL){
		printf("成績ファイルをオープンできません。\n");
		return 1;
	}
	
	rc=fscanf(fin,"%d %s %s %d %d %d",&pd.no,&pd.mi,&pd.name,&pd.en,&pd.ma,&pd.ja);
	while(rc!=EOF){
		pd.sum=pd.en+pd.ma+pd.ja;
		pd.avg=pd.sum/3;
		if(pd.avg>=70||pd.ma>=80){
		fprintf(fout,"%d %s %s %d %d %d %d %d",pd.no,pd.mi,pd.name,pd.en,pd.ma,pd.ja,pd.sum,pd.avg);
	printf("%03d%-5s %-10s%4d%4d%4d%4d%4d\n",pd.no,pd.mi,pd.name,pd.en,pd.ma,pd.ja,pd.sum,pd.avg);
		}
		rc=fscanf(fin,"%2d %s %s %d %d %d",&pd.no,&pd.mi,&pd.name,&pd.en,&pd.ma,&pd.ja);
	}
	fclose(fin);
	fclose(fout);
	return 0;


}
/* 実行結果
001shina ichiro     100 100 100 300 100
002ebara jirou       90  90  90 270  90
003oota  hanako      80  85  88 253  84
004kamei saburo      70  71  73 214  71
010hachi ryuuichiro  11 100  50 161  53
011ootsu daigoro    100  99  87 286  95

*/