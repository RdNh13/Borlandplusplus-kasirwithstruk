#include <stdio.h>
#include <stdlib.h>

int main (){
    FILE *file;

    //membuka file.bin yang telah kita buat
    file = fopen("file.bin","ab");

    //deklarasikan variabel yang akan kita gunakan untuk inputan
    char masukan[1001];
    
    //menerima inputan 
    gets(masukan);


    //menuliskan inputan pada file login.bin
    fprintf(file,"\n%s",masukan);

    //menutup file kembali setelah dibuka
    fclose(file);
    return 0;

}