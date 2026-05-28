
#define _XTAL_FREQ 4000000
#include <xc.h>
#define __delay_ms(x) 

void main(void){
    CMCON = 7;
    TRISA = 0b00111111;
    TRISB = 0b00110111;
    TRISA7 = 0;
    TRISB3 = 0;
    TRISB4 = 0;
    TRISB5 = 0;
    T2CON = 0b00000101;
    PR2 = 100;
    CCPR1L = 0;
    CCP1CON = 0b00001100;
    int inicio = 0;
    RB4 = 0;
    RB7 = 0;
    RB5 = 0;
    int sentido = 0;

    while(1){
        if (RB1==1){
            inicio = !inicio;
            __delay_ms(300);
            sentido = 0;
        }

        if(RB2==1 && inicio == 1){
            RB5 == 1;
            __delay_ms(300);
            sentido = 1;
        }

        if(RB3==1 && inicio == 1 && sentido == 1){
            RB5==0;
            __delay_ms(300);
            sentido = 0;
        }
    }
}
