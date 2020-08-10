#include <stdio.h>


int main(void) {

  int n,n2,cont,cont2,restozero=0,restozero2=0,res,res2,contrestozero=0,contrestozero2=0,i,j,primos=0;
  int Restozero[20] = { [0 ... 19] = 0 };
  int Restozero2[20] = { [0 ... 19] = 0 };
  int Iguais[20] = { [0 ... 19] = 0 };


  printf("Digite um número: ");
  scanf ("%d", &n);
  printf("Digite outro número: ");
  scanf ("%d", &n2);
  cont = n;
  printf("\nPrimeiro número digitado: %d\n",n);
  printf("Segundo número digitado: %d\n\n",n2);
  printf("Contador: %d\n\n",cont);
  printf("Contador2: %d\n\n",cont2);

/*__________________________________________________________________________*/

  while(cont<=n && cont > 0){
    res = n%cont;
    //printf("Resto: %d\n",res);
    
    if(res == 0 & cont > 0 ){
      Restozero[restozero] = cont;
      restozero++;
    } 
    
    cont--;
  }

  while(Restozero[contrestozero]!=0){

  printf("Resto zero: %d\n",Restozero[contrestozero]);
  contrestozero++;
  }
/*__________________________________________________________________________*/

printf("Primos: %d\n\n",primos);
printf("\n\n\n\nSegundo calculo \n\n");
 cont2 = n2; 

 while(cont2<=n2 && cont2 > 0){
    res2 = n2%cont2;
   // printf("Resto: %d\n",res2);
    
    if(res2 == 0 & cont2 > 0 ){
      Restozero2[restozero2] = cont2;
      restozero2++;
    } 
    
    cont2--;
  }

  while(Restozero2[contrestozero2]!=0){

  printf("Resto zero: %d\n",Restozero2[contrestozero2]);
  contrestozero2++;
  }
/*__________________________________________________________________________*/

for ( i = 0; i < 20; i++ ){
  //printf("I: %d\n\n",i);
  for ( j = 0; j < 20; j++ ){
    
  //  printf("J: %d\n\n",j);

    if ((Restozero[i] == Restozero2[j]) && Restozero[i] > 1 ) {
      primos++;
      printf("Restozero: %d\n",Restozero[i]);
      //printf("Primos: %d\n\n",primos);
      //printf("I: %d\n\n",i);
      //printf("J: %d\n\n",j);
      
    }}
}

printf("Primos: %d\n\n",primos);
printf("\n\n\n\nResultado \n\n");

if (primos == 0){
printf("São primos entre si\n");
}
else
printf("Não são primos entre si\n");


return 0;
}
