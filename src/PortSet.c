#include <avr/io.h>
void PortSet()
{
    // Setting the Direction of Ports
    DDRD|=(1<<PD6);
    DDRD&=~(1<<PD0);
    DDRD&=~(1<<PD4);

    // Setting PORTD pins
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD4);
}
