int main(){
  DDRD = 0b00001110; //acionando PD1, PD2, PD3 como saida e mantendo o restante como entrada

  while(1){

    PORTD = 0b00001110; // Acionando PD1, PD2 e PD3 com niveis logicos altos 

  }
}