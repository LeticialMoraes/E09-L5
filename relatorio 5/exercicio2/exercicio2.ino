#define A PD2
#define B PD3
#define C PD4

#define M1 PB0
#define M2 PB1
#define M3 PB2

int main(void) {
    DDRB |= (1 << M1) | (1 << M2) | (1 << M3);
    DDRD &= ~((1 << A) | (1 << B) | (1 << C));
    PORTD |= (1 << A) | (1 << B) | (1 << C);

    while(1) {
     
        int ligaM1 = !(PIND & (1 << A));
        int ligaM2 = !(PIND & (1 << B));
        int ligaM3 = !(PIND & (1 << C));

        int potencia = 0;
        if(ligaM1) potencia += 30;
        if(ligaM2) potencia += 50;
        if(ligaM3) potencia += 70;

        int m1On = ligaM1;
        int m2On = ligaM2;
        int m3On = ligaM3;

        if(potencia > 90) {
            if(m1On) {
                potencia -= 30;
                m1On = 0;
            } else if(m2On) {
                potencia -= 50;
                m2On = 0;
            } else if(m3On) {
                potencia -= 70;
                m3On = 0;
            }
        }

        if(potencia > 90) {
            if(m1On) {
                m1On = 0;
            } else if(m2On) {
                m2On = 0;
            } else if(m3On) {
                m3On = 0;
            }
        }

        if(m1On) PORTB |= (1 << M1); else PORTB &= ~(1 << M1);
        if(m2On) PORTB |= (1 << M2); else PORTB &= ~(1 << M2);
        if(m3On) PORTB |= (1 << M3); else PORTB &= ~(1 << M3);
    }

    return 0;
}
