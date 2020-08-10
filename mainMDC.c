#include <stdio.h>

int main() 
{
  int n;         /* no. de elementos na sequencia */
  int i;         /* contador de numeros lidos */
  int mdc;       /* maximo divisor comum dos numeros lidos */
  int numero;    /* guarda um numero da sequencia */ 
  int novo_mdc;  /* candidato a novo mdc */
  int divisor;   /* usado para encontrar  o novo mdc */


  printf("Entre com um numero: ");
  scanf ("%d", &mdc);
  
  i = 1;
  printf("Entre com outro numero: ");
  scanf ("%d", &numero);

  /* calcule o max divisor comum de mdc e numero */ 
  divisor = 1;
  while (divisor <= mdc && divisor <= numero) 
     {
       if (mdc % divisor == 0 && numero % divisor == 0) 
	   {
          novo_mdc = divisor;                
     }
          divisor = divisor + 1;
     }

      /* atualize o mdc dos numeros lidos */
      mdc = novo_mdc;
    
  printf("\n\n");
  printf("MDC = %d\n", mdc);

  printf("\n\n");
  if (mdc>1){
    printf("Não são primos entre si");
  }
  else
  printf("São primos entre si");

  return 0;
} 
