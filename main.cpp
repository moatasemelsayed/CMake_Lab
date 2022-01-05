#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

class LED
{
public:
        LED();
        void LED_toggle();
};

LED::LED()
{
        DDRA = 0xff;
        PORTA = 0x00;
}
void LED::LED_toggle()
{
        _delay_ms(500);
        PORTA = ~PORTA;
}
int main(void)
{
        LED ledblink;

        while (1)
        {
                ledblink.LED_toggle();
        }
        return 0;
}