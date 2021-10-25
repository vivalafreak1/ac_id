// Fungsi main untuk memulai eksekusi program
#include <stdio.h>
int main()
{
    // Deklarasi variabel x dan y dengan tipe data integer
    int x,y;

    // Mencetak output kalimat dan menginput variabel x dan y
    // dalam satu statement dengan 2 digit field pada variabel x
    printf("%s" , "Masukkan enam digit angka: \n");
    scanf("%d",&x);
    y=x%10000;
    x/=10000;
    // Mencetak output variabel x dan y dalam satu statement
    printf("\nInteger yang di-input adalah %d dan %d\n", x, y );

    return 0;
} // Mengakhiri fungsi main()
