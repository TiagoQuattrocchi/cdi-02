#include <stdio.h>
int main(void) {
  int billetes1 =0
  int billetes5 =0;
  int billetes10 =0;
  int billetes20 =0;
  int billetes50 =0;
  int billetes100 =0
  int monto =0;
  printf(“Seleccione el monto a retirar:\n”);
  scanf(“%d\n”,&monto);
  if(monto<20) {
    printf(“El monto minimo es 20$\n”);
    return 1;
  }
  else if(monto>5000) {
    printf("El monto maximo es 5000$\n");
    return 2;
  }
  else {
    while(monto>=100) {
      monto=monto-100;
      billetes100=billetes100+1;
    }
    while(monto>=50) {
      monto=monto-50;
      billetes50=billetes50+1;
    }
    while(monto>=20) {
      monto=monto-20;
      billetes20=billetes20+1;
    }
    while(monto>=10) {
      monto=monto-10;
      billetes10=billetes10+1;
    }
    while(monto>=5) {
      monto=monto-5;
      billetes5=billetes5+1;
    }
    while(monto>=1) {
      monto=monto-100;
      billetes1=billetes1+1;
    }
    printf("Billetes de 100: %d/n", billetes100);
    printf("Billetes de 50: %d/n", billetes50);
    printf("Billetes de 20: %d/n", billetes20);
    printf("Billetes de 10: %d/n", billetes10);
    printf("Billetes de 5: %d/n", billetes5);
    printf("Billetes de 1: %d/n", billetes1);
  }
  return 0:
}
  
