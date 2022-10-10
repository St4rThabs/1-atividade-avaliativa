#include <stdio.h>

int main(void) {
  int idade, qntd = 0;
  float media, soma = 0, max = 0, min = 150;
  do{
    printf("Entre com uma idade (digite 0 para terminar): ");
    scanf("%d", &idade);
    if(idade == 0){
      printf("\nForam lidas %d idades.\n", qntd);
    } else {
      qntd++;
    soma = soma+idade;
      media = soma/qntd;
    }
    if(idade>max){
      max = idade;
    } 
    
    if(idade<min && idade>0){
      min = idade;
    }
    
  } while(idade>0);
  printf("\nMédia idade: %f\nMáxmimo: %f\nMínimo: %f", media,max,min);
}