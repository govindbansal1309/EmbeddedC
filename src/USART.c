#include <avr/io.h>
#include <util/delay.h>

void USARTInit(uint16_t ubrr)
{
    //setting baud rate
    UBRR0L = ubrr;
    UBRR0H = (ubrr>>8)&0x00ff;
    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    //enable rx and tx

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char USARTReadChar()
{
    while(!(UCSR0A&(1<<RXC0)))
    {
        //do nothing
    }
    return UDR0;
}

unsigned volatile int temp;

void USARTWriteChar()
{
    char data;
    while(!(UCSR0A&&(1<<UDR0)))
    {
        //do nothing
    }
    temp = ReadADC(0);
    if((temp>=0)&&(temp<=200))
        data = 20;
    if((temp>=210)&&(temp<=500))
        data = 25;
    if((temp>=510)&&(temp<=700))
        data = 29;
    if((temp>=710)&&(temp<=1024))
        data = 33;
    UDR0=data;
}
