#include<stdio.h>
int main()
{
	int a[9]={40,16,74,22,77,59,80,72,91};
	int i;
	// original order
	for (i=0; i<9; i++){
		printf("%d ",a[i]);
		
	}
	printf("\n");
	// Reverse number
	for(i=8; i>=0; i--){
		printf("%d ",a[i]);
	}
	return 0;
}
