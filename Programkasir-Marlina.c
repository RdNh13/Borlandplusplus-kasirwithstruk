#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* program kasir sederhana */
int main(int argc, char *argv[])
{
 // Deklarasi variabel //
 char name[50]; 
 char menu[10],lagi='Y',orang='Y';
 int jumlah,harga,total,bayar,kembali,totsel;
 int pendapatan=0;
 do{
 totsel=0;
 do{
    printf("\t\t\t\t**************************************************\n");
    printf("\t\t\t\t||     SELAMAT DATANG DI KEDAI KOPI BORLAND++   ||\n");
    printf("\t\t\t\t||             TERSEDIA BERBAGAI JENIS          ||\n");
    printf("\t\t\t\t||                       KOPI                   ||\n");
    printf("\t\t\t\t**************************************************\n\n");

    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    printf("\nDAFTAR MENU : \n");
    printf("+-----+--------------------+------------------+ \n");
    printf("| No  |       Menu         |      Harga       | \n");
    printf("+-----+--------------------+------------------+ \n");
    printf("| 1.  |     Espresso       |     14.000       | \n");
    printf("| 2.  |     Affogato       |     22.000       | \n");
    printf("| 3.  |     Cappucino      |     22.000       | \n");
    printf("| 4.  |     Mochaccino     |     18.000       | \n");
    printf("| 5.  |     Mocha          |     19.000       | \n");
    printf("| 6.  |     Piccola        |     12.000       | \n");
    printf("| 7.  |     Americano      |     13.000       | \n");
    printf("| 8.  |     Cafe Latte     |     19.000       | \n");
    printf("| 9.  |     Flat White     |     17.000       | \n");
    printf("| 10. |     Creme Brulee   |     16.000       | \n");
    printf("+-----+--------------------+------------------+ \n");

    printf("Masukkan Nama Anda : ");
    fgets(name, 50, stdin); // isi variabel name

    printf("\nHai %s\n", name);
    printf("Daftar pemesanan  : \n");

    printf("masukkan nama menu         : ");
    scanf("%s",&menu);
    printf("masukkan jumlah            : ");
    scanf("%d",&jumlah);
    printf("masukkan harga             : ");
    scanf("%d",&harga);
    total=jumlah * harga;
    printf("totalnya                   : %d\n",total);
    totsel=totsel+total;

 //printf("TOTAL SELURUH                      : %d\n",totsel);
 printf("--------------------------------------------------\n");
 printf("transaksi lagi (Y/N) ? ");scanf("\n%c",&lagi);
 printf("--------------------------------------------------\n");
 }
 while(lagi=='Y');
 printf("TOTAL SELURUH                      : %d\n",totsel);
 printf("__________________________________________________\n");
 printf("masukkan jumlah uang yang dibayar  : ");scanf("%d",&bayar);
 kembali=bayar-totsel;
 if(totsel<=bayar)
 {
  printf("jumlah kembali                     : %d\n\n",kembali); 
 }else
 {
  printf("\n\tSORRY uang anda tidak cukup guyys\n\n");
 }
 printf("\t --- TERIMAKSIH ---\n");
 getch();
 printf("==================================================\n");
 printf("ADA LAGI YANG MAU TRANSAKSI ? (Y/N) ");scanf("\n%c",&orang);
 printf("==================================================\n\n");
 }while(orang=='Y');
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
 printf("\t\t\t\tTERIMAKSIH SUDAH BELANJA DI KEDAI KAMI\n");
 printf("\t\t\t\t   SEMOGA HARI ANDA MENYENANGKAN\n");
 
 return 0;
}