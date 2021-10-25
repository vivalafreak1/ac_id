#include <stdio.h>

int main(){
	int x,y,penjumlahan,pengurangan;

	printf( "Masukkan 2 angka untuk dihitung: " );
	scanf("%d%d",&x,&y);
	penjumlahan = x+y;
	pengurangan = x-y;

	printf( "Hasil penjumlahan 2 bilangan: %d\n",penjumlahan); // Menampilkan hasil penjumlahan
    printf( "Hasil pengurangan 2 bilangan: %d",pengurangan);

    return 0;


}