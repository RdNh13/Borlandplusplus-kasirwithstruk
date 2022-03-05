#include <stdio.h>
#include <stdlib.h>

int main(){
    char user[255];

    FILE *username;
    
    username = fopen("user.txt", "w");

    printf("Masukan Username: ");

    fgets(user, sizeof(user),stdin);

    fputs(user,username);
    fclose(username);
    return EXIT_SUCCESS; 
}