//**********************************//
//		t@C¼Fex0610.c   		//
//		ÛèÔ  F6-1-0        	//
//		ì¬Ò    FåF      		//
//		Ô      :	8				//
//		út      :2020-09-07       //
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int a[10]={2,4,6,8,10,12,14,16,18,20};
	int c[10]={0};
	int *pta;
	int *ptc;
	
	printf("zñaÌvfðzñcÉ]·é\n");
	printf("zña:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("zñc:");
	pta=a;
	ptc=c;
	while(ptc<c+10){
		*ptc=*pta;
		printf("%3d",*ptc);
		pta++;
		ptc++;		
	}
	printf("\n");
	printf("zñaÌvfðtÉzñcÉÝè·é\n");
	printf("zña:");
	pta=a;
	while(pta<a+10){
		printf("%3d",*pta);
		pta++;
	}
	printf("\n");
	printf("zñc:");
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
/* ÀsÊ
zñaÌvfðzñcÉ]·é
zña:  2  4  6  8 10 12 14 16 18 20
zñc:  2  4  6  8 10 12 14 16 18 20
zñaÌvfðtÉzñcÉÝè·é
zña:  2  4  6  8 10 12 14 16 18 20
zñc: 20 18 16 14 12 10  8  6  4  2
*/