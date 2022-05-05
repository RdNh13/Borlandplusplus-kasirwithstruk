#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main (){
    FILE *fsignup;

    //membuka file login.bin 
    fsignup = fopen("login.bin","wb");

    //deklarasikan variable untuk membuat user dan password kita 
    char user_pass[25] = "admin@root";

    //menuliskan user dan password pada file login.bin
    fprintf(fsignup,"%s",user_pass);
    fwrite(login, (sizeof(char), sizeof(login)/sizeof(char), fsignup); //agar karakter file login.bin sama dengan array login

    //menutup file kembali setelah dibuka
    fclose(fsignup);
    return 0;

}
