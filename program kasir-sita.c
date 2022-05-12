#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama_pelanggan, bln;
    int harga,tgl,thn, menu, jml, total;

    /*SOURCE CODE*/
    printf("|<<< Selamat Datang di CAFE BORLAND++  >>>|\n");
    printf("|---------------------------------------|\n");
    printf("|Daftar Menu                Harga       |\n");
    printf("|  1. Ice Tea               @6000       |\n");
    printf("|  2. Caramel Machiato      @30000      |\n");
    printf("|  3. Green Tea Latte       @25000      |\n");
    printf("|  4. Milkshake             @15000      |\n");
    printf("|  5. Chocolate Hazelnut    @25000      |\n");
    printf("|---------------------------------------|\n\n");
    printf("Nama Pelanggan = "); scanf("%s",&nama_pelanggan);
    printf("Tanggal Pembelian = "); scanf("%d %s %d",&tgl,&bln,&thn);
    printf("Silahkan pilih menu = "); scanf("%d",&menu);

    switch(menu)
    {
        case 1:
            {
                printf("Menu Yang Di Pilih = Ice Tea\n");
                printf("Masukkan Jumlah Pesanan Ice Tea\t: ");
                scanf("%d",&jml);
                harga=6000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");
            }break;
        case 2:
            {
                printf("Menu Yang Di Pilih = Caramel Machiato\n");
                printf("Masukkan Jumlah Pesanan Caramel Machiato\t: ");
                scanf("%d",&jml);
                harga=30000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");
            }break;
        case 3:
            {
                printf("Menu Yang Di Pilih = Green Tea Latte\n");
                printf("Masukkan Jumlah Pesanan Green Tea Latte\t: ");
                scanf("%d",&jml);
                harga=25000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");
            }break;
        case 4:
            {
                printf("Menu Yang Di Pilih = Milkshake\n");
                printf("Masukkan Jumlah Pesanan Milkshake\t: ");
                scanf("%d",&jml);
                harga=15000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");
            }break;
        case 5:
            {
                printf("Menu Yang Di Pilih = Chocolate Hazelnut\n");
                printf("Masukkan Jumlah Pesanan Chocolate Hazelnut\t: ");
                scanf("%d",&jml);
                harga=25000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");
            }break;
        default:
        {
            printf("Menu Pilihan Kamu Tidak Ada !!!");
        }
    }

    return 0;

}
