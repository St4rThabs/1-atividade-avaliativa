#include <stdio.h>

int main(void) {
  int qntd, opcao;
  float valor = 0;

  printf("Menu: \n1 - Café - R$ 15,00\n2 - Leite - R$ 9,00\n3 - Pão de forma - R$ 12,00\n4 - Sabonete - R$ 2,00\n5 - Detergente - R$ 2,90 \nEntre com o código do produto: ");
  scanf("%d", &opcao);
  printf("Entre com a quantidade: ");
  scanf("%d", &qntd);

  switch(opcao){
    case 1:
      valor = valor + 15.00*qntd;
    
    break;
    case 2:
      valor = valor + 9.90*qntd;
    
    break;
    case 3:
      valor = valor + 12.00*qntd;
    
    break;
    case 4:
      valor = valor + 2.00*qntd;
    
    break;
    case 5:
      valor = valor + 2.90*qntd;
    break;
    default:
    printf("Valor inválido!");
    break;

  }
  printf("Total a pagar é de R$ %.2f",valor);
}