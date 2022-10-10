#include <stdio.h>

int main(void) {
  float a, b, c, x, y;
  printf("Entre com valores de 1 a 50\nEntre com o valor de x: ");
  scanf("%f", &x);
  printf("Entre com o valor de y: ");
  scanf("%f", &y);

  if(x<=50 && x>=1 && y<=50 && y>=1){
    
  a = ((3*x)*(3*x))+y*y;
  b = (2*(x*x))+((5*y)*(5*y));
  c = ((-100)*x)+y*y*y;

  if(a>b && a>c){
    printf("Para x = %f e y = %f, o maior resultado é o da função A",x,y);
  }
  if(b>a && b>c){
    printf("Para x = %f e y = %f, o maior resultado é o da função B",x,y);
  }
  if(c>b && c>b){
    printf("\nPara x = %f e y = %f, o maior resultado é o da função C",x,y);
    }
  }  else {

    printf("Entre com valores de 1 a 50!");
 }
}