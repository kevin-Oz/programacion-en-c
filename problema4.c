#include<stdio.h>
int contar(int);
int numero,secuencia;
int contar(int numero){
if(numero>0)
return contar(numero-1),printf("%d",numero);
}

int main(){
printf("ingrese hasta que numero quiere llegar:   ");
scanf("%d",&numero);

printf("la secuencia es :  ");
contar(numero);
printf("\n");
return 0;
}



 
