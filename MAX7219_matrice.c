#include "MAX7219_Type.h"
#include "SoftMAX7219.h"
#include "SoftMatrix_8X8.h"
#define LOAD1_ADDR              &PORTC
#define LOAD1_DIRECTION_ADDR    &TRISC
#define PIN_LOAD1               0


#define NUMBER_DIGIT                   4
#define NUMBER_MATRIX                  8


//port
sbit MAX7219_Clk  at      RC3_bit;
sbit MAX7219_Din  at      RC5_bit;
//registre de direction
sbit MAX7219_Clk_Direction  at    TRISC3_bit;
sbit MAX7219_Din_Direction  at    TRISC5_bit;


//=======================================================
//Fonction principale

void main() {

  LedDisplay matrice;

  SoftMAX7219_InitMatrix(&matrice, LOAD1_ADDR, LOAD1_DIRECTION_ADDR, PIN_LOAD1, 8);
  //SoftMAX7219_Init7segment(&matrice, LOAD1_ADDR, LOAD1_DIRECTION_ADDR, PIN_LOAD1, 8);
  while(1){

  //SoftMAX7219_PrintDec(&matrice,99999999.0);
  SoftMAX7219_PrintText(&matrice,"LedDisplay ",-2);
  SoftMAX7219_Refresh(&matrice);

  }
}