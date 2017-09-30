#include<stdio.h>

int fibo(int n);

int main(){

	int num,i;
printf("Ingrese hasta que posicion quiere su fibonacci\n");
 scanf("%d",&num);


for(i=0;i<num;i++){
printf("%d   ",fibo(i) );
}

}

int fibo(int n){

if(n==0 || n==1){
return n;
}
else{
	return fibo(n-1)+fibo(n-2);
}
}

