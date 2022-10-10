#include <stdio.h>

int main(void) {
  printf("Valores pares:\n");
  for(int i=1; i<=100;i++){
    if(i %2 == 0){
      printf("%d \t", i);
    }
    }
  printf("\nValores ímpares: \n");
    for(int i=1; i<=100;i++){
    if(i %2 != 0){
      printf("%d \t", i);
    }
  }
}