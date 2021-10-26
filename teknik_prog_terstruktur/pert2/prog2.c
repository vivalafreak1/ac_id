#include <stdio.h>

int main(){

	int a,b,min;

	printf("Masukkan nilai a : ");
	scanf("%d",&a);

	printf("Masukkan nilai b : ");
	scanf("%d",&b);

	min = (b>a) ? b:a;
	printf("Dari A dan B, variabel yang nilainya paling besar adalah : %d\n", min);


	return 0;
}