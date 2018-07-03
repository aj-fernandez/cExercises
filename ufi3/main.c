//
// Created by ajfernandez on 7/3/18.
//

#include <stdio.h>
#include "structure.h"

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
    getchar(); // Without this; opt = 10 (LF). fflush(stdin) don't do nothing here and i need to consume LF (line feed).
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

int main() {

    int maxItem = 1;
    int i = 0;

    FILE *pFile;
    pFile = fopen("articulos.dat","w");

    TypeItem item;

    printf("Now you must fill the items info; 5 elements for this PoC.\n");

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
            scanf("%i", &item.price);
            printf("\n");
            fwrite(&item, sizeof(item), 1, pFile);
            i++;
        }
        fclose(pFile);
    }

    show();
    newItem();

    return 0;
}
