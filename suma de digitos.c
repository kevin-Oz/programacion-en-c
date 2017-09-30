#include <stdio.h>
int main()
{
int numero;
int sumatot=0;
printf("Ingrese el numero\n");
scanf("%d",&numero);
sumatot=suma(numero);
printf("La suma de los digitos del numero ingresado es \n%d\n",sumatot );
return 0;
}

int suma (int numero)
{
if (numero==0)
return(0);
else
return ((numero%10) + suma(numero/10));
}
