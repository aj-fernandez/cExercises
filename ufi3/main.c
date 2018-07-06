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

void show() {
    int i = 0 ;

    FILE *pFile;
    pFile = fopen("articulos.dat","rb");

    TypeItem item;

    if (pFile == NULL) {
        printf("Error: The file could not be opened. \n");
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
    pFile = fopen("articulos.dat", "ab");

    printf("\nAdd a new item? ('y'es or 'n'ot)");
    scanf("%c%*c", &opt);

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while (opt == 121) {
            printf("\n\tInsert item[%i] code (max -> 9999): ", i);
            scanf("%i%*c", &newIt.cod);
            printf("\n\tInsert a item[%i] description (max -> 30 characters): ", i);
            fgets(newIt.desc, 30, stdin); // Dont need remove '\n', next scanf() exclude it '...*c' ->any char, escape character too
            printf("\n\tInsert item[%i] price: ", i);
            scanf("%i%*c", &newIt.price);
            printf("\n");
            fwrite(&newIt, sizeof(newIt), 1, pFile);
            printf("Add a new item? ('y'es or 'n'ot)\n");
            scanf("%c%*c", &opt);
            i++;
        }
        fclose(pFile);
    }

    printf("%i new items were added.\n", i);
}

void findItem() {

    FILE *pFile;
    pFile = fopen("articulos.dat", "r");

    TypeItem item;

    char keyWord[10];
    memset(keyWord, '\0', sizeof(keyWord)); // Set array to zero, unknown behaviour if the block of memory assigned has garbage

    printf("\nType a keyword of product specifications (max. 10 characters ): ");
    fgets(keyWord, 10, stdin);
    strtok(keyWord, "\n"); // Need remove escape character so that strstr() can compare strings in the correct way

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while (fread(&item, sizeof(item), 1, pFile) == 1) {
            if (strstr(item.desc, keyWord) != NULL) { //NULL is a MACRO, in this case null pointer evaluates to 0 or 0L
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

    printf("Now you must fill the items info; %i initial elements for this PoC.\n", FIRST_ITEMS);

    if (pFile == NULL) {
        printf("Error: the file could not be created/opened.");
    }else {
        while(maxItem--) {
            printf("\n\tInsert item[%i] code (max -> 9999): ", i);
            scanf("%i%*c", &item.cod);
            printf("\n\tInsert a item[%i] description (max -> 30 characters): ", i);
            fgets(item.desc, 30, stdin);
            printf("\n\tInsert item[%i] price: ", i);
            scanf("%i%*c", &item.price); // TODO: compiling on Windows printf() this &item.price in show() is wrong.
            printf("\n");
            fwrite(&item, sizeof(item), 1, pFile);
            i++;
        }
        fclose(pFile);
    }

    do {
        printf("\n1. Add new items to file\n2. Show items\n3. Find item\n4. Exit\n\n\t Select a option: ");
        scanf("%i%*c", &opt);

        switch (opt) {
            case 1: newItem();
                break;
            case 2: show();
                break;
            case 3: findItem();
                break;
            case 4: return 0;
            default: printf("\nMust enter a int among 1 - 4");
        }
    }while (opt != 4);

    return 0;
}