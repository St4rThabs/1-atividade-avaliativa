#include <stdio.h>

int main(void) {
  int qntd, opcao;
  float valor = 0;

  do{
    
  printf("Menu: \n1 - Café - R$ 15,00\n2 - Leite - R$ 9,90\n3 - Pão de forma - R$ 12,00\n4 - Sabonete - R$ 2,00\n5 - Detergente - R$ 2,90 \nPara finalizar, entre com código maior que 5 ou menor que 1\nEntre com o código do produto: ");
  scanf("%d", &opcao);
    if(opcao>5 || opcao<1){
      printf("\nCompra finalizada!\n");
    }else {
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
      }
    } while(opcao>0 && opcao<5);
    
  printf("Total a pagar é de R$ %.2f",valor);
}