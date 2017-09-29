#include <stdio.h>

int palindromo();
int main()
{
int numero,pal=0,aux;
printf("Ingrese un numero\n");scanf("%d",&numero);
aux=numero;
if(palindromo(pal,aux)==numero){
printf("El numero es palindromo\n");

}else{

printf("El numero no es palindromo\n");
	}
}
int palindromo(int pal,int aux){
if (aux>0)
{
pal=pal*10;
pal=pal+aux%10;
return palindromo(pal,aux=(aux-(aux%10))/10);
	
}
	
}
