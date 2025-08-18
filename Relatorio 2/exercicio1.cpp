#define LED_VERDE    PD2
#define LED_AMARELO  PD3
#define LED_VERMELHO PD4

#define TEMPO_VERDE    12000
#define TEMPO_AMARELO  3000
#define TEMPO_VERMELHO 15000

enum Estado {VERDE, AMARELO, VERMELHO};
Estado estado_atual = VERDE;

int main(void) {
    DDRD |= (1<<LED_VERDE) | (1<<LED_AMARELO) | (1<<LED_VERMELHO);

    while(1) {
        switch(estado_atual) {
            case VERDE:
                PORTD = (1<<LED_VERDE);    
                _delay_ms(TEMPO_VERDE);
                estado_atual = AMARELO;
                break;

            case AMARELO:
                PORTD = (1<<LED_AMARELO);  
                _delay_ms(TEMPO_AMARELO);
                estado_atual = VERMELHO;
                break;

            case VERMELHO:
                PORTD = (1<<LED_VERMELHO);  
                _delay_ms(TEMPO_VERMELHO);
                estado_atual = VERDE;
                break;
        }
    }
}
