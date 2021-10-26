#include <stdio.h>

int main(){
	int i = 0;

	loop:
		i++;

	if(i<=10){
		if(i%2==0){
			printf("%d adalah genap \n",i);
		}else{
			printf("%d adalah ganjil \n",i);
		}
		
		goto loop;
	}
}