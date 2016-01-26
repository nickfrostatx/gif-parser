#ifndef BIT_UNPACKER_H
#define BIT_UNPACKER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyLib.h"

#define UINT_SIZE 32
#define UINT_MASK 0xFFFFFFFF

typedef struct {
   UInt curData;
   UInt nextData;
   int bitsLeft;
   int validNext;
} BitUnpacker;

void BuInit(BitUnpacker *bu);

void BuTakeData(BitUnpacker *bu, UInt nextData);

int BuUnpack(BitUnpacker *bu, int size, UInt *code);

#endif
