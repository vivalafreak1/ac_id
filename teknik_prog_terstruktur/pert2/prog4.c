#include <stdio.h>
#include <stdlib.h>

int main(){
	int pil_awal, pil_minuman, pil_makanan;

	printf("o o o o Menu Makanan dan Minuman di Warung Makan Ibu Asih o o o o\n");
	printf("\n");
	printf("1. Makanan\n");
	printf("2. Minuman\n");
	printf("\n");

	printf("Masukkan pilihan kamu : ");
	scanf("%d", &pil_awal);


	if(pil_awal==1){
		goto makanan;
	}else if(pil_awal==2){
		goto minuman;
	}


	makanan:
		printf("1. Tumis Cumi \t \t \t  Rp. 6.000\n");
		printf("2. Tumis Kangkung\t \t  Rp. 5.000\n");
		printf("3. Tempe Orak Arik\t \t  Rp. 3.000\n");
		printf("4. Ikan Tongkol Balado\t \t  Rp. 7.000\n");
		printf("5. Ati Ampela\t \t \t  Rp. 7.000\n");
		printf("6. Kembali\n");
		printf("\n");
		printf("Tekan 6 untuk kembali : ");
		scanf("%i", &pil_makanan);

			if(pil_makanan==6){
				goto makanan;
			}else{
				printf("Terimakasih telah melihat menu kami! ^^ \n");
				exit(0);
			}

	minuman:
		printf("1. Teh Manis (Es/Panas) \t Rp. 4.000\n");
		printf("2. Air Putih\t \t \t Rp. 2.000 \n");
		printf("3. Jeruk (Es/Panas) \t \t Rp. 5.000\n");
		printf("4. Nutrisari (Es/Panas)\t \t Rp. 5.000\n");
		printf("5. Kopi (Es/Panas)\t \t Rp. 5.000\n");
		printf("6. Kembali\n");
		printf("\n");
		printf("Tekan 6 untuk kembali : ");
		scanf("%i", &pil_minuman);

		if(pil_makanan==6){
			goto minuman;
		}else{
			printf("Terimakasih telah melihat menu kami! ^^ \n");
			exit(0);
		}

	return 0;
}