//calcular el MCD
#include<stdio.h>
int mcd(int n1,int n2);

int main ()
{
int n1,n2,d;


printf("Introdusca los dos numeros: \n");
scanf("%d%d",&n1,&n2);
d=mcd(n1,n2);
if(d<0) 
d*=-1;
printf("El MCD es : %d\n",d );

return 0;
}

int mcd(int n1,int n2)
{
    return(n2==0) ? n1 : mcd(n2,n1%n2);
}
