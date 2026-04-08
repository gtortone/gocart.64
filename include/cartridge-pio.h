#ifndef CARTRIDGE_PIO_H
#define CARTRIDGE_PIO_H

#include "FileReader.h"
#include "BufferReader.h"
#include "Reader.h"
#include "CRTParser.h"

#define COMPILER_BARRIER() asm volatile("" ::: "memory")

uint8_t run_cart(IDataReader &r);

void run_cart_normal_pio(void);
void run_cart_magic_desk_pio(void);
void run_cart_ocean_pio(void);
void run_cart_fun_play_pio(void);
void run_cart_super_games_pio(void);
void run_cart_easyflash_pio(void);
void run_cart_dinamic_pio(void);
void run_cart_zaxxon_pio(void);

#endif
