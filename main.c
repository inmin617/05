#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int number;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", number);
	
	if (number>=0)
		if (number==0)
		printf("0�Դϴ�.");
		if (number>0)
		printf("����Դϴ�.");
		
	else (number<0)
	printf("�����Դϴ�.");
 
	
	return 0;
}
