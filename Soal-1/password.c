#include <stdio.h>
#include <stdlib.h>

int main(){
    char pass[255];

    FILE *password;
    
    password = fopen("pass.txt", "w");

    printf("Masukan Password: ");

    fgets(pass, sizeof(pass),stdin);

    fputs(pass,password);
    fclose(password);
    return EXIT_SUCCESS; 
}