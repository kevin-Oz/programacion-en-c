//calcular el factorial de un numero usando recursividad

#include<stdio.h>

long factorial(int);
int main(){
 int numero;
long fact;
printf("ingrese un numero positivo para calcular su factorial: ");
scanf("%d",&numero);
if(numero<0){
printf("el numero debe de ser mayor a cero");
printf("\n");
}
else{

fact=factorial(numero);
printf("el factorial del numero %d es :  %ld",numero,fact);
printf("\n");
}
return 0;
}

long factorial(int numero)
{
if(numero==0)
return 1;
else
return  numero*factorial(numero-1);
}
