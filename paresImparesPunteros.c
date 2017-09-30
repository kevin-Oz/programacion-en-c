#include<stdio.h>


int main(int argc, char const *argv[])
{
	int n;
	int *p_n;
printf("ingrese un numero\n");
scanf("%d",&n);
p_n=&n;
if(n%2==0){
printf("el numero %d es par.",*p_n );

}else{
	printf("el numero %d es Impar.",*p_n );
}
printf("\nSu posicion en memoria es: %p",p_n);
printf("\n");



	return 0;
}