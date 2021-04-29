#include <avr/io.h>
#include <util/delay.h>

void Buttons()
{
    if(!(PIND&(1<<PD0)) && !(PIND&(1<<PD4)))
        {
            PORTD|=(1<<PD6);
            _delay_ms(1000);
        }
        else
        {
            PORTD&=~(1<<PD6);
            _delay_ms(1000);
        }
}
