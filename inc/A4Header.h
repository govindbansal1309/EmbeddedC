#ifndef A4HEADER_H_INCLUDED
#define A4HEADER_H_INCLUDED
/*Brief
* Initializes USART Communication by setting baud rate and enabling rx and tx
* Parameter : Baud rate of data type uint16_t
*/
void USARTInit(uint16_t);

/*Brief
* Reads Data from Rx pin
*/
char USARTReadChar();

/*Brief
* Reads data from ADC channel and sends it to UDR0. 
*/
void USARTWriteChar();


#endif // A4HEADER_H_INCLUDED
