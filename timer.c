/*
 * File:   timer.c
 * Authors:
 *
 * Created on December 30, 2014, 8:07 PM
 */

#include <xc.h>
#include "timer.h"

void delayUs(unsigned int delay){

    //TODO: Create a delay for "delay" micro seconds using timer 2
    
    
    
    
    TMR1 = 0;
    PR1 = delay*624;
    IFS0bits.T1IF = 0;
    T1CONbits.ON = 1;
    while(IFS0bits.T1IF == 0);
    T1CONbits.ON = 0;
    
    
}