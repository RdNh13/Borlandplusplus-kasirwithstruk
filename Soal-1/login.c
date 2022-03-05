#include<stdio.h>
#include <stdlib.h>

void login(){
    char user[255];
    char pass[255];

    gets(user);
    gets(pass);

    compare_user = strcmp(user,username);
    compare_pass = strcmp(pass,password);

    if(compare_user == 1 && compare_pass == 1){
        printf("Anda Berhasil Login!!\n");
        // auto masuk ke program
    }else {
        printf("Anda Gagal Login!!!");
        system("cls");
        EXIT_SUCCESS;
    }
}