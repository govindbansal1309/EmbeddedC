#include <avr/io.h>
unsigned volatile int temp;
void Pulse()
{
    temp = ReadADC(0);
    if((temp>=0)&&(temp<=200))
        OCR1A=205;
    if((temp>=210)&&(temp<=500))
        OCR1A=410;
    if((temp>=510)&&(temp<=700))
        OCR1A=717;
    if((temp>=710)&&(temp<=1024))
        OCR1A=973;
}
