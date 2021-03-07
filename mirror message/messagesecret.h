#include <stdio.h>
#include <string.h>
int MessageSecret() {
    //Variable pour stocker votre phrase - variable to stock our sentence
    char a[40];
    printf("Veillez saisir le message a transformer: \n\"IMPORTANT!!->\"Caracteres speciaux interdit! \nInput the message to transform\n\"IMPORTANT!!->\"Special characters are forbidden! \n--> ");
    gets(a);
    //autres variables - others variables
    char alphabet[29] =" abcdefghijklmnopqrstuvwxyz ";
    char alphabet2[29] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    char *alpha = alphabet;
    char *lettre = a;
    char *alpha2 = alphabet2;
    int j = 0;
    //Boucle pour remplacer les caractères - Loop to replace the characters
    for(int i = 0; i < strlen(a); i++){
        for(j = 0; !(*(lettre+i) == *(alpha+j)) && !(*(lettre+i) == *(alpha2+j)); j++);
        if(*(lettre+i) == *(alpha+j)){
            a[i]= *(alpha+(27-j));
            };
        if(*(lettre+i) == *(alpha2+j)){
            a[i]= *(alpha2+(27-j));
            };
    };
    //affichage du message - display message
    puts(a);
    return 0;
}