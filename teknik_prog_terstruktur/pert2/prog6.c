#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){	
	char hr_kedatangan[10];
	char nama_pasien[100];
	char jenis_kelamin[20];
	char notelp_pasien[13];


	printf("o o o  Selamat Datang di Puskesmas Kelapa 2  o o o\n");
	printf("\n");

	printf("Masukkan Nama Anda \t \t: ");
	scanf("%[^\n]%*c", nama_pasien);

	printf("Jenis Kelamin \t \t \t: ");
	scanf("%[^\n]%*c", jenis_kelamin);

	printf("Masukkan Nomor Telepon Anda \t: ");
	scanf("%[^\n]%*c",notelp_pasien);

	hari_datang:
		printf("Harap masukkan hari kedatangan sesuai format yang benar.\n");
		printf("contoh : Senin\n");
		printf("\n");
		printf("Masukkan hari kedatangan : ");
		scanf("%[^\n]%*c",hr_kedatangan);




		if (strcmp(hr_kedatangan, "Senin")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Ghina\n");
			printf("2. Dokter Gigi \t \t: Dr. Disha\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Firman\n");
			printf("4. Dokter Kandungan \t: Dr. Santoso\n");
			printf("\n");
		} 
		else if (strcmp(hr_kedatangan, "Selasa")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Bunga\n");
			printf("2. Dokter Gigi \t \t: Dr. Seto\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Asih\n");
			printf("4. Dokter Kandungan \t: Dr. Oksal\n");
			printf("\n");
		}

		else if (strcmp(hr_kedatangan, "Rabu")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Bunga\n");
			printf("2. Dokter Gigi \t \t: Dr. Seto\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Asih\n");
			printf("4. Dokter Kandungan \t: Dr. Oksal\n");
			printf("\n");
		}

		else if (strcmp(hr_kedatangan, "Kamis")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Bunga\n");
			printf("2. Dokter Gigi \t \t: Dr. Seto\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Asih\n");
			printf("4. Dokter Kandungan \t: Dr. Oksal\n");
			printf("\n");
		}

		else if (strcmp(hr_kedatangan, "Jumat")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Bunga\n");
			printf("2. Dokter Gigi \t \t: Dr. Seto\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Asih\n");
			printf("4. Dokter Kandungan \t: Dr. Oksal\n");
			printf("\n");
		}

		else if (strcmp(hr_kedatangan, "Sabtu")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");

			printf("Berikut daftar Dokter yang bertugas hari %s : \n", hr_kedatangan);
			printf("1. Dokter Umum \t \t: Dr. Bunga\n");
			printf("2. Dokter Gigi \t \t: Dr. Seto\n");
			printf("3. Dokter Ibu & Anak \t: Dr. Asih\n");
			printf("4. Dokter Kandungan \t: Dr. Oksal\n");
			printf("\n");
		}

		else if(strcmp(hr_kedatangan, "Minggu")==0){
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");
			printf("Mohon maaf, tidak ada dokter yang berjaga di hari %s \n", hr_kedatangan);
			printf("\n");
			goto hari_datang;
		}


		else{
			printf("Selamat Datang, %s ...\n", nama_pasien);
			printf("\n");
			printf("Harap Masukkan format hari dengan benar\n");
			printf("\n");
			goto hari_datang;
		}


	return 0;
}