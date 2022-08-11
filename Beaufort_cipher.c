#include<stdio.h>
#include<string.h>
#include <assert.h>
#include <stdlib.h>
/*Beaufort cipher encryption*/
char* beaufort_encr(char* plaintext,char* keyword);
/*Beaufort cipher decryption*/
char* beaufort_decr(char* ciphertext,char* keyword);

char* beaufort_encr(char plaintext[],char keyword[]){
    int txtsize = strlen(plaintext), keysize = strlen(keyword), i, j;
    char key[txtsize];
    char *ciphertext = malloc (sizeof (char) * txtsize);
  /*Creating the key */
    for(i = 0, j = 0; i < txtsize; ++i, ++j){
        if(j == keysize){
            j = 0;
        }
        key[i] = keyword[j];
    }
 
    key[i] = '\0';
    /*Loop for encryption*/
    for(i = 0; i < txtsize; ++i){
        ciphertext[i] = (((key[i] - plaintext[i])+26) % 26)+'A' ;
        plaintext[i]=ciphertext[i];
    }
    ciphertext[i] = '\0';
    return ciphertext;
}

char* beaufort_decr(char ciphertext[],char keyword[]){
     int txtsize = strlen(ciphertext), keysize = strlen(keyword), i, j;
    char key[txtsize];
    char *plaintext = malloc (sizeof (char) * txtsize);
  /*Creating the key */
    for(i = 0, j = 0; i < txtsize; ++i, ++j){
        if(j == keysize){
            j = 0;
        }
        key[i] = keyword[j];
    }
 
    key[i] = '\0';
    /*Loop for decryption*/
    for(i = 0; i < txtsize; ++i){
        plaintext[i] = ((( key[i] - ciphertext[i]) +26) % 26)+'A';
        ciphertext[i]=plaintext[i];
    }
    plaintext[i] = '\0';
    return plaintext;
}
/*Function to test beuafort cipher*/
int main(void){
    /*BEAUFORT  CIPHER TEST 1*/
    char test[]="TESTMESSAGEHERE";
    char key[]="LEMONLEMONLE";
    printf("\nBEAUFORT CIPHER TEST 1:\n");
    char* en_test=beaufort_encr(test,key);
    printf("Encrypted text :%s\n",en_test);
    printf("Decrypted text :%s\n",beaufort_decr(en_test,key));
   /*BEAUFORT  CIPHER TEST 2*/
    char test2[]="ATTACKATDOWN";
    char key2[]="LEMON";
    printf("\nBEAUFORT CIPHER TEST 2:\n");
    char* en_test2=beaufort_encr(test2,key2);
    printf("Encrypted text :%s\n",en_test2);
    printf("Decrypted text :%s\n",beaufort_decr(en_test2,key2));
    return 0;
}