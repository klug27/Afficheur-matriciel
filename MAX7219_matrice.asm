
_main:

;MAX7219_matrice.c,24 :: 		void main() {
;MAX7219_matrice.c,28 :: 		SoftMAX7219_InitMatrix(&matrice, LOAD1_ADDR, LOAD1_DIRECTION_ADDR, PIN_LOAD1, 8);
	MOVLW       main_matrice_L0+0
	MOVWF       FARG_SoftMAX7219_InitMatrix_ld+0 
	MOVLW       hi_addr(main_matrice_L0+0)
	MOVWF       FARG_SoftMAX7219_InitMatrix_ld+1 
	MOVLW       PORTC+0
	MOVWF       FARG_SoftMAX7219_InitMatrix_CS+0 
	MOVLW       hi_addr(PORTC+0)
	MOVWF       FARG_SoftMAX7219_InitMatrix_CS+1 
	MOVLW       TRISC+0
	MOVWF       FARG_SoftMAX7219_InitMatrix_CS_direction+0 
	MOVLW       hi_addr(TRISC+0)
	MOVWF       FARG_SoftMAX7219_InitMatrix_CS_direction+1 
	CLRF        FARG_SoftMAX7219_InitMatrix_pin+0 
	MOVLW       8
	MOVWF       FARG_SoftMAX7219_InitMatrix_Matrix+0 
	MOVLW       0
	MOVWF       FARG_SoftMAX7219_InitMatrix_Matrix+1 
	CALL        _SoftMAX7219_InitMatrix+0, 0
;MAX7219_matrice.c,30 :: 		while(1){
L_main0:
;MAX7219_matrice.c,33 :: 		SoftMAX7219_PrintText(&matrice,"LedDisplay ",-2);
	MOVLW       main_matrice_L0+0
	MOVWF       FARG_SoftMAX7219_PrintText_ld+0 
	MOVLW       hi_addr(main_matrice_L0+0)
	MOVWF       FARG_SoftMAX7219_PrintText_ld+1 
	MOVLW       76
	MOVWF       ?lstr1_MAX7219_matrice+0 
	MOVLW       101
	MOVWF       ?lstr1_MAX7219_matrice+1 
	MOVLW       100
	MOVWF       ?lstr1_MAX7219_matrice+2 
	MOVLW       68
	MOVWF       ?lstr1_MAX7219_matrice+3 
	MOVLW       105
	MOVWF       ?lstr1_MAX7219_matrice+4 
	MOVLW       115
	MOVWF       ?lstr1_MAX7219_matrice+5 
	MOVLW       112
	MOVWF       ?lstr1_MAX7219_matrice+6 
	MOVLW       108
	MOVWF       ?lstr1_MAX7219_matrice+7 
	MOVLW       97
	MOVWF       ?lstr1_MAX7219_matrice+8 
	MOVLW       121
	MOVWF       ?lstr1_MAX7219_matrice+9 
	MOVLW       32
	MOVWF       ?lstr1_MAX7219_matrice+10 
	CLRF        ?lstr1_MAX7219_matrice+11 
	MOVLW       ?lstr1_MAX7219_matrice+0
	MOVWF       FARG_SoftMAX7219_PrintText_text+0 
	MOVLW       hi_addr(?lstr1_MAX7219_matrice+0)
	MOVWF       FARG_SoftMAX7219_PrintText_text+1 
	MOVLW       254
	MOVWF       FARG_SoftMAX7219_PrintText_col+0 
	MOVLW       255
	MOVWF       FARG_SoftMAX7219_PrintText_col+1 
	CALL        _SoftMAX7219_PrintText+0, 0
;MAX7219_matrice.c,34 :: 		SoftMAX7219_Refresh(&matrice);
	MOVLW       main_matrice_L0+0
	MOVWF       FARG_SoftMAX7219_Refresh_ld+0 
	MOVLW       hi_addr(main_matrice_L0+0)
	MOVWF       FARG_SoftMAX7219_Refresh_ld+1 
	CALL        _SoftMAX7219_Refresh+0, 0
;MAX7219_matrice.c,36 :: 		}
	GOTO        L_main0
;MAX7219_matrice.c,37 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
