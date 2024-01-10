#line 1 "D:/Programmation/PIC18F/PIC18F26K80/MAX7219/MAX7219_matrice.c"
#line 1 "d:/programmation/librairie/librairie max7219/softmax7219/max7219_type.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdbool.h"



 typedef char _Bool;
#line 114 "d:/programmation/librairie/librairie max7219/softmax7219/max7219_type.h"
 typedef unsigned short* ptr;
#line 124 "d:/programmation/librairie/librairie max7219/softmax7219/max7219_type.h"
typedef struct LedDisplay_t {

 ptr __load__;
 ptr __load_direction__;
 unsigned char pin;
 unsigned char tempDecodage;
 unsigned char _animation;
 unsigned char Buffer[ (8U) *(8) ];
 int nbreDigit;
 unsigned int Max;

} LedDisplay;
#line 1 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdbool.h"
#line 1 "d:/programmation/librairie/librairie max7219/softmax7219/max7219_type.h"
#line 11 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_Refresh(LedDisplay *ld);
#line 17 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_Init7Segment(LedDisplay *ld, ptr CS, ptr CS_direction,
 unsigned char pin, unsigned char Digit);
#line 44 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_InitMatrix(LedDisplay *ld, ptr CS, ptr CS_direction,
 unsigned char pin, unsigned int Matrix);
#line 73 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
unsigned char SoftMAX7219_DeviceCount(LedDisplay *ld);
#line 79 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_ClearDevice(LedDisplay *ld, unsigned int device_number);
#line 89 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_ClearDisplay(LedDisplay *ld);
#line 95 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_SetColumn(LedDisplay *ld, unsigned int device_number, unsigned char col, unsigned char value);
#line 119 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_SetLine(LedDisplay *ld, unsigned int device_number, unsigned char lin,unsigned char value);
#line 142 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_SetPixel(LedDisplay *ld, unsigned int device_number, unsigned char lin, unsigned char col);
#line 166 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_ClearPixel(LedDisplay *ld, unsigned int device_number, unsigned char lin, unsigned char col);
#line 191 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_CMDDecodeMode(LedDisplay *ld, unsigned int device_number, unsigned char value);
#line 216 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_CMDLuminosity(LedDisplay *ld, unsigned char luminosity);
#line 233 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_CMDScanLimit(LedDisplay *ld, unsigned int device_number, unsigned char value);
#line 263 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_CMDShutdown(LedDisplay *ld,  _Bool  true_or_false);
#line 279 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_CMDTestLed(LedDisplay *ld,  _Bool  true_or_false);
#line 294 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_PrintChar(LedDisplay *ld, unsigned int device_number, unsigned char _digit,char ch);
#line 332 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_PrintInt(LedDisplay *ld, long number);
#line 348 "d:/programmation/librairie/librairie max7219/softmax7219/softmax7219.h"
void SoftMAX7219_PrintDec(LedDisplay *ld, double real);
#line 1 "d:/programmation/librairie/librairie max7219/softmax7219/softmatrix_8x8.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for pic/include/stdbool.h"
#line 1 "d:/programmation/librairie/librairie max7219/softmax7219/max7219_type.h"
#line 22 "d:/programmation/librairie/librairie max7219/softmax7219/softmatrix_8x8.h"
void SoftMAX7219_ScrollTextLeft(LedDisplay *ld, char text[], unsigned char delaiDefilement_ms);

void SoftMAX7219_ScrollTextRight(LedDisplay *ld, char text[], unsigned char delaiDefilement_ms);

void SoftMAX7219_ScrollTextUp(LedDisplay *ld, char text[], unsigned char delaiDefilement_ms);

void SoftMAX7219_ScrollTextDown(LedDisplay *ld, char text[], unsigned char delaiDefilement_ms);

void SoftMAX7219_PrintText(LedDisplay *ld, char text[], int col);

static void SoftMAX7219_MirrorText(LedDisplay *ld,  _Bool  etat);

void SoftMAX7219_MirrorV(LedDisplay *ld,  _Bool  etat);
#line 56 "d:/programmation/librairie/librairie max7219/softmax7219/softmatrix_8x8.h"
void SoftMAX7219_MirrorH(LedDisplay *ld,  _Bool  etat);
#line 78 "d:/programmation/librairie/librairie max7219/softmax7219/softmatrix_8x8.h"
void SoftMAX7219_FillScreen(LedDisplay *ld);
#line 96 "d:/programmation/librairie/librairie max7219/softmax7219/softmatrix_8x8.h"
void SoftMAX7219_InvertScreen(LedDisplay *ld,  _Bool  etat);
#line 14 "D:/Programmation/PIC18F/PIC18F26K80/MAX7219/MAX7219_matrice.c"
sbit MAX7219_Clk at RC3_bit;
sbit MAX7219_Din at RC5_bit;

sbit MAX7219_Clk_Direction at TRISC3_bit;
sbit MAX7219_Din_Direction at TRISC5_bit;





void main() {

 LedDisplay matrice;

 SoftMAX7219_InitMatrix(&matrice,  &PORTC ,  &TRISC ,  0 , 8);

 while(1){


 SoftMAX7219_PrintText(&matrice,"LedDisplay ",-2);
 SoftMAX7219_Refresh(&matrice);

 }
}
