#include <avr/io.h>
void InitADC()
{
    ADMUX=(1<<REFS0); // For Aref = AVcc
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
