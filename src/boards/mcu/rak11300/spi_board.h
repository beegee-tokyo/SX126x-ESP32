#if defined RAK11300 
#ifndef SPI_BOARD_H
#define SPI_BOARD_H
#include <SPI.h>

extern SPIClassRP2040 SPI_LORA;

void initSPI(void);
#endif // SPI_BOARD_H
#endif // RAK11300