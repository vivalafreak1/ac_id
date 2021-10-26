#include <stdio.h>

int main(){
	int i,j;

	i = 0;
	j = 0;

	cetak:
		printf("Angka ke - %d : %d \n",i,j);
		i++;
		j += 3;

	if(i<31){
		goto cetak;
	}
}