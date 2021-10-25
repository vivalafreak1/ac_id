#include <stdio.h>

int main(){
	printf("Masukkan 3 angka: ");
	int x,y,z;
	int perkalian,penjumlahan,pengurangan;

	scanf("%d%d%d",&x,&y,&z);
	perkalian = x*y*z;
	pengurangan = x-y-z;
	penjumlahan = x+y+z;

	printf( "Hasil penjumlahan 3 bilangan: %d\n",penjumlahan); 
    printf( "Hasil perkalian 3 bilangan: %d\n",perkalian); 
    printf( "Hasil pengurangan 3 bilangan: %d",pengurangan);

    return 0;



}