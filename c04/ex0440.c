//**********************************//
//		ƒtƒ@ƒCƒ‹–¼Fex0440.c		//
//		‰Û‘è”Ô†  F4-4	        	//
//		ì¬ŽÒ    F‘å—F      		//
//		”Ô†      :	8				//
//		“ú•t      :2020-07-21		//
//**********************************//
#include <stdio.h>
	
int main(void)
{
	int i;
	int j;
	char data1[41]={0};
	char data2[21]={0};
	
	printf("Please Input data1(”¼Šp20•¶Žš‚Ü‚Å)==>");
	scanf("%s",data1);
	printf("Please Input data2(”¼Šp20•¶Žš‚Ü‚Å)==>");
	scanf("%s",data2);

	printf("Input data1:");
	for(i=0; data1[i]!='\0'; i++){
		printf("%c",data1[i]);
	}	
	printf("\n");
	printf("Input data2:");
	for(i=0; data2[i]!='\0'; i++){
		printf("%c",data2[i]);
	}
	printf("\n");
	for(j=0; data2[j]!='\0'; j++,i++){
		data1[i]=data2[j];
	}
	data1[i]='\0';
	printf("data1+data2==>");
	printf("%s",data1);
	printf("\n");

	return 0;
}
/* ŽÀsŒ‹‰Ê
‡@”¼Šp1•¶Žš‚Æ”¼Šp1•¶Žš
Please Input data1(”¼Šp20•¶Žš‚Ü‚Å)==>a
Please Input data2(”¼Šp20•¶Žš‚Ü‚Å)==>b
Input data1:a
Input data2:b
data1+data2==>ab

‡A”¼Šp20•¶Žš‚Æ”¼Šp20•¶Žš
Please Input data1(”¼Šp20•¶Žš‚Ü‚Å)==>aaaaaaaaaabbbbbbbbbb
Please Input data2(”¼Šp20•¶Žš‚Ü‚Å)==>ccccccccccdddddddddd
Input data1:aaaaaaaaaabbbbbbbbbb
Input data2:ccccccccccdddddddddd
data1+data2==>aaaaaaaaaabbbbbbbbbbccccccccccdddddddddd

‡Brandom data
Please Input data1(”¼Šp20•¶Žš‚Ü‚Å)==>abcdefg
Please Input data2(”¼Šp20•¶Žš‚Ü‚Å)==>xyz
Input data1:abcdefg
Input data2:xyz
data1+data2==>abcxyz

*/