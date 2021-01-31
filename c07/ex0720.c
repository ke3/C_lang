//**********************************//
//		ファイル名：ex0720.c		//
//		課題番号  ：7-2      		//
//		作成者    ：大友      		//
//		番号      :	8				//
//		日付      :2020-09-16       //
//**********************************//
#include <stdio.h>
struct pres{
	int no;
	char name;
	int en;
	int ma;
	int ja;;
};
int main(void)
{
	struct pres ps;
	int end;
	double sum[20];
	double avg[20];
	double ensum=0;
	double masum=0;
	double jasum=0;
	double totalavg=0;
	int cnt;
	int i;
	

	scanf("%d""%s""%d""%d""%d",&ps.no,&ps.name,&ps.en,&ps.ma,&ps.ja);
	while(endc!=EOF){
		sum[i]=ps.en+ps.ma+ps.ja;
			scanf("%d""%s""%d""%d""%d",&ps.no,ps.name,&ps.en,&ps.ma,&ps.ja);
		i++
	}
	i=0;
	while(i<=cnt){
		printf("%d %s %d %d %d",ps.no,ps.name,ps.en,ps.ma,ps.ja,sum[i]);
		i++
	}
	return 0;
}


/* 実行結果

*/