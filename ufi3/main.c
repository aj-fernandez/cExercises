// Dar de alta un producto.
// Consultar un producto.
// Listar todos los productos.
//
// Created by ajfernandez on 7/3/18.
//

#include <stdio.h>
#include <string.h>
#include "structure.h"
#define FIRST_ITEMS 1

void show()
{
    int i = 0 ;

    FILE *pFile;
    pFile = fopen("articulos.dat","rb");

    TypeItem item;

    if (pFile == NULL) {
        printf("Error: The file could not be opened. \n");
        getchar();
    }else {
        while (fread(&item, sizeof(item), 1, pFile) == 1) {
            printf("\nInformation about articles: \n\n\tCode: %i", item.cod);
            printf("\tDescription: %s", item.desc);
            printf("\tPrice: %i", item.price);
            printf("\n\n");
        }
    }
    fclose(pFile);
}

void newItem() {

    int i = 0;
    char opt = NULL;

    TypeItem newIt;

    FILE *pFile;
    pFile = fopen("articulos.dat", "a");

    printf("Add a new item? ('y'es or 'n'ot)");
    getchar(); // Without this; opt = 10 (LF). 'fflush(stdin)' don't do nothing here and i need to consume LF (line feed).
    scanf("%c", &opt);

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while (opt == 121) {
            printf("\n\tInsert item[%i] code (max -> 9999): ", i);
            scanf("%i", &newIt.cod);
            getchar();
            printf("\n\tInsert a item[%i] description (max -> 30 characters): ", i);
            fgets(newIt.desc, 30, stdin);
            printf("\n\tInsert item[%i] price: ", i);
            scanf("%i", &newIt.price);
            getchar();
            printf("\n");
            fwrite(&newIt, sizeof(newIt), 1, pFile);
            printf("Add a new item? ('y'es or 'n'ot)");
            scanf("%c", &opt);
            getchar();
            i++;
        }
        fclose(pFile);
    }

    printf("%i new items were added.", i);
}

void findItem() {

    FILE *pFile;
    pFile = fopen("articulos.dat", "r");

    TypeItem item;

    char keyWord[10];
    memset(keyWord, '\0', sizeof(keyWord)); // Unknown behaviour if the block of memory assigned has garbage.

    printf("Type a keyword of product specifications (max. 10 characters ): ");
    getchar();
    fgets(keyWord, 10, stdin);

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while (fread(&item, sizeof(item), 1, pFile) == 1) {
            if (strstr(item.desc, keyWord) != NULL) { //NULL is a MACRO, in this case null pointer evaluates to 0 or 0L.
                printf("'%s' found in article with code %i an price %i.\n", keyWord, item.cod, item.price);
            }else if (fread(&item, sizeof(item), 1, pFile) == 0) {
                printf("EOF reached without any occurrence of keyword '%s'.\n", keyWord);
            }
        }
    }
}

int main() {

    int maxItem = FIRST_ITEMS;
    int i = 0;
    int opt;

    FILE *pFile;
    pFile = fopen("articulos.dat","w");

    TypeItem item;

    printf("Now you must fill the items info; 5 initial elements for this PoC.\n");

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while(maxItem--) {
            printf("\n\tInsert item[%i] code (max -> 9999): ", i);
            scanf("%i", &item.cod);
            printf("\n\tInsert a item[%i] description (max -> 30 characters): ", i);
            getchar(); // TODO: remove '\n' for next fgets() because 'fflush(stdin)' seems doesn't flush the stream.
            fgets(item.desc, 30, stdin);
            printf("\n\tInsert item[%i] price: ", i);
            scanf("%i", &item.price); // TODO: compiling on Windows printf() this &item.price in show() is wrong.
            printf("\n");
            fwrite(&item, sizeof(item), 1, pFile);
            i++;
        }
        fclose(pFile);
    }

    // menu with switch here.
    // 1 function remaining: select a specific item to list (not all).


    show();
    newItem();
    show();
    findItem();

    return 0;
}