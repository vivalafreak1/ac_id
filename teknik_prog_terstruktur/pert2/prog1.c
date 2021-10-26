#include <stdio.h>
#include <string.h>

int main(){
	printf("*****BIODATA MAHASISWA UNIVERSITAS GUNADARMA*****\n\n");
	char nama[20],npm[10],kelas[8];

	printf("Masukkan Nama Anda (max 15 karakter) : ");
	scanf("%[^\n]%*c",nama);


	printf("Masukkan NPM Anda (max 8 karakter) : ");
	scanf("%s", npm);

	printf("Masukkan Kelas Anda (max 5 karakter) : ");
	scanf("%s", kelas);


	if(strlen(nama) > 15 || strlen(npm) > 8 || strlen(kelas) > 5){
		return 0;
	}else{
		printf("\n");
		printf("Nama : %s \n",nama);
		printf("NPM : %s \n",npm);
		printf("Kelas : %s \n",kelas);
	}

	return 0;

}
