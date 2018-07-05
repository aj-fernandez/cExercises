//
// Created by ajfernandez on 7/3/18.
//

// #pragma once Conseguiría lo mismo que el include guarda de abajo
// para evitar problemas de doble inclusión.
//
//typedef struct article {
//    int cod;            // 4 bytes
//    char desc[30];      // 1 byte
//    int price;          // 4 bytes
//}TypeItem;              // Total structure size: 40 bytes

#ifndef UFI3_STRUCTURE_H
#define UFI3_STRUCTURE_H

typedef struct article {
    int cod;            // 4 bytes
    char desc[30];      // 1 byte
    int price;          // 4 bytes
}TypeItem;              // Total structure size: 40 bytes,  xD? (30*1)+4+4-> 38 bytes.

#endif //UFI3_STRUCTURE_H


