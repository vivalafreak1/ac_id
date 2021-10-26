#include <stdio.h>

int main(){
	float a,b,hasil;

	 printf("masukkan nilai a : ");
	 scanf("%f",&a);

	 printf("masukkan nilai b : ");
	 scanf("%f",&b);

	 if(b != 0){
	 	hasil = a/b;
	 	printf("%f dibagi dengan %f adalah %f\n",a,b,hasil);
	 }else{
	 	printf("%f dibagi dengan 0 adalah TAK BERHINGGA\n",a);
	 }


	 return 0;
}