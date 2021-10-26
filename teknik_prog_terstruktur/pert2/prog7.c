#include <stdio.h>

int main(){
	int a,b,mod;

	printf("Masukkan nilai a : ");
	scanf("%d",&a);

	printf("Masukkan nilai b : ");
	scanf("%d",&b);

	a = a%2;
	b = b%2;

	mod = (a=b) ? b:a;

	if(mod==0){
		printf("Hasil modulus dari a & b = 0 is TRUE");
	}else{
		printf("Ulangi step\n");
	}

	return 0;
}