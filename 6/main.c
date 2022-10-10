#include <stdio.h>

int main(void) {
  int valor, p = 0, n = 0;

  for(int i = 0; i<15; i++){
    printf("Insira um valor:");
    scanf("%d", &valor);

    if(valor == 0){
      printf("O valor 0 será desconsiderado por ser um valor nulo!\n");
      
    }
    if(valor>0) p++;
    else n++;
      
  }
  printf("%d são positivos e %d são negativos", p, n);
  
}