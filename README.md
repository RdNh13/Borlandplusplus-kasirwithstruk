#include <stdio.h>

void main(void) {
    int kode, jumlah;
    float harga, total, totalKeseluruhan, tunai, kembalian;
    char tambahanLain;

    // do-while loop -> post-test
    // while loop    -> pre-test
    // for loop      -> pre-test

    do {
        system("cls");
        printf("================================\n");
        printf("MENU MAKAN AYAM GEPREK BORLAND++\n");
        printf("================================\n");
        printf("[1] Ayam Geprek Level 1-5 + Milo\t\tRp20.000,00\n");
        printf("[2] Ayam Geprek Level 1-5 + Aneka Jus\t\tRp18.000,00\n");
        printf("[3] Ayam Geprek Level 1-5 + Air Mineral\t\tRp17.000,00\n");
        printf("[4] Ayam Geprek Level 1-5 + Teh\t\t\tRp18.000,00\n");
        printf("[5] Ayam Geprek Level 1-5\t\t\tRp15.000,00\n");

        printf("\nMasukkan Kode\t\t: ");
        scanf("%d", &kode);
        printf("\nMasukkan Jumlah\t\t: ");
        scanf("%d", &jumlah);

        switch(kode) {
            case 1: harga = 20000;
                    break;
            case 2: harga = 18000;
                    break;
            case 3: harga = 17000;
                    break;
            case 4: harga = 18000;
                    break;
            case 5: harga = 15000;
                    break;
        }
        total = harga * jumlah;

        printf("\nTotal\t\t\t: %.f", total);

        totalKeseluruhan = totalKeseluruhan + total;
        printf("\nTotal Keseluruhan\t: %.f", totalKeseluruhan);
        printf("\nAda Tambahan yang lain? [y/n]");
        tambahanLain = getche();
    }while(tambahanLain == 'y' || tambahanLain == 'Y');

    do {
        printf("\nUang Tunai\t\t: ");
        scanf("%f", &tunai);
    }while(tunai < totalKeseluruhan);


    kembalian = tunai - totalKeseluruhan;
    printf("\nKembalian\t\t: %.f", kembalian);
}
