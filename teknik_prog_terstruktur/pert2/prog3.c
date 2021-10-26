#include <stdio.h>
#include <string.h>


int main(){
    char username[20];
    char password[16];

    printf("Username : ");
    scanf("%[^\n]%*c",username);

    printf("Password : ");
    scanf("%[^\n]%*c", password);


    if(strcmp(username,"admin1")==0 && strcmp(password,"admin1123)(*")==0){
         printf("\n   Selamat Datang Administrator");
    }else if(strcmp(username,"admin2")==0 && strcmp(password,"admin2321*%-")==0){
        printf("\n   Selamat Datang Administrator");
    }else{
        printf("Mohon maaf, username/password salah\n");
        printf("\n");
    }

    return 0;
}