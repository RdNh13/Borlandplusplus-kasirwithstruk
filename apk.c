#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10

struct struk
{
    char menu[50];
    // int harga[max] = {14000, 22000, 22000, 18000, 19000, 12000, 13000, 19000, 17000, 16000};
    int harga;
    int jumlah;
    int jumlah_harga;
};

void menubelanja();
void strukbelanja(struct struk list[10],int size);
void selamatdatang();
void terimakasih();

int main(int argc, char const *argv[])
{
    struct struk data[max];
    int n;

    menubelanja();
    printf("Berapa Menu yang ingin anda pilih? ");scanf("%d", &n);

    int a,count;
    int pil;
    char ulang;
    int uang;
    system("cls");
    do
    {
        selamatdatang();
        menubelanja();
        for (int i = 0; i < n ; i++){
        printf("Masukan Pilhan : ");scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Espresso");
            data[i].harga = 14000;
            data[i].jumlah_harga = 14000*count;
            data[i].jumlah = count;
            break;
        
        case 2:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Affogato");
            data[i].harga = 22000;
            data[i].jumlah_harga = 22000*count;
            data[i].jumlah = count;
            break;
        case 3:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Cappucino");
            data[i].harga = 22000;
            data[i].jumlah_harga = 22000*count;
            data[i].jumlah = count;
            break;
        case 4:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Mochaccino");
            data[i].harga = 18000;
            data[i].jumlah_harga = 18000*count;
            data[i].jumlah = count;
            break;
        case 5:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Mocha");
            data[i].harga = 19000;
            data[i].jumlah_harga = 19000*count;
            data[i].jumlah = count;
            break;
        case 6:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Piccola");
            data[i].harga = 20000;
            data[i].jumlah_harga = 12000*count;
            data[i].jumlah = count;
            break;
        case 7:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Americano");
            data[i].harga = 13000;
            data[i].jumlah_harga = 13000*count;
            data[i].jumlah = count;
            break;
        case 8:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Cafe Latte");
            data[i].harga = 19000;
            data[i].jumlah_harga = 19000*count;
            data[i].jumlah = count;
            break;
        case 9:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Flat White");
            data[i].harga = 17000;
            data[i].jumlah_harga = 17000*count;
            data[i].jumlah = count;
            break;
        case 10:
            printf("Jumlah Yang Anda Inginkan : ");scanf("%d",&count);
            strcpy(data[i].menu,"Creme Brule");
            data[i].harga = 14000;
            data[i].jumlah_harga = 16000*count;
            data[i].jumlah = count;
            break;     
        default:
            break;
        }
        }
        printf("\n");
        
        printf("Ingin memilih menu lain (y/t)? ");
        scanf(" %c",&ulang);
        printf("\n");
    } 
    while (ulang!= 't');
    strukbelanja(data,n);
    terimakasih();
    return 0;
}


void menubelanja(){
   printf("\n\t\tDAFTAR MENU\n");
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
}

void strukbelanja(struct struk list[10],int size){
    system("cls");
    int total=0;
    int uang;
    printf("--------------------------------------\n");
    printf("|          STRUK BELANJAAN           |\n");
    printf("--------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
            printf("%s\t%d\t\t      \n",list[i].menu,list[i].harga);
            printf("\t%dx\t\t\t%d \n",list[i].jumlah,list[i].jumlah_harga);
    }
    printf("======================================\n");
    for (int i = 0; i < size ; i++){
        total += list[i].jumlah_harga;
    }
    printf("Total \t\t\t\t%d\n",total);    
    printf("Uang  \t\t\t\t");scanf("%d", &uang);    
    printf("======================================\n");
    int temp;
    temp = uang - total;
    printf("Kembalian    \t\t\t%d\n",temp);    
}

void selamatdatang(){
    printf("================================================\n");
    printf("====== Selamat Datang di Cafe Borland++ ========\n");
    printf("================================================\n");
}

void terimakasih(){
    printf("Terima Kasih Telah Datang di Cafe kamii\n");
    printf("ENJOY YOUR DRINK'S :)");
}