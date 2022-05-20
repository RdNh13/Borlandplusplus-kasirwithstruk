#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int parameter, char *argumen[]){
    //ngecek parameter nya 
    if (parameter != 3) {
        printf("Anda Harus Memasukan username & password saaat menjalankan program ini!!!");
        EXIT_FAILURE;
    }
    
    //  deklarasikan variable
    char username[25], password[25];
    strcpy(username,argumen[1]);
    strcpy(password,argumen[2]);
    
    // printf("User_arg : %s\n",username);
    // printf("Pass_arg : %s\n",password); 
    // baca file login.bin dengan read
    
    FILE *flogin;
    if ((flogin = fopen("Database/login.bin","rb")) == NULL ){
        printf("Silahkan Cek File Anda!!!");
        EXIT_FAILURE;
    }

    //baca file binary
    char baca_simpan[25];
    fgets(baca_simpan,25,flogin);
    fclose(flogin); 

    //ngecek username dan password abis tu di pisahkan antara username dan password\

    char *string[3];
    int temp = 0;

    string[0] = strtok(baca_simpan,"@");

    while(string[temp++] != NULL){
        string[temp] = strtok(NULL,"@");
    }

    // printf("string 1 : %s\n",string[0]);
    // printf("String 2 : %s \n",string[1]);

    // setelah di pisah kita buat variabel lagi untuk membandingkan
    char id[25],pass[25];
    strcpy(id,string[0]);
    strcpy(pass,string[1]);
    
    // printf("user_id : %s\n",id);
    // printf("pass_pass : %s\n",pass);

    if ((strcmp(username,id) == 0) && (strcmp(password,pass)) == 0){
       printf("selamat anda berhasil login!!");
    }else {
         printf("anda gagal login!");
        EXIT_FAILURE;
    }
}