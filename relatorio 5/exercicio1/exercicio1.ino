#define LIGA   PD2
#define DESL   PD3
#define S1     PD4

#define MOTOR  PB0
#define ALARME PB1

int main(void) {
    DDRB |= (1 << MOTOR) | (1 << ALARME);
    DDRD &= ~((1 << LIGA) | (1 << DESL) | (1 << S1));
    PORTD |= (1 << LIGA) | (1 << DESL) | (1 << S1);

    while(1) {
        if(!(PIND & (1 << S1))) {
            PORTB |= (1 << ALARME);   
            PORTB &= ~(1 << MOTOR);   
        } else {
            PORTB &= ~(1 << ALARME); 
            if(!(PIND & (1 << LIGA))) {
                PORTB |= (1 << MOTOR);
            }

            if(!(PIND & (1 << DESL))) {
                PORTB &= ~(1 << MOTOR);
            }
        }
    }

    return 0;
}
