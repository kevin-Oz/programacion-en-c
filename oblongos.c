#include<stdio.h>
int num;
int n=0;
int oblongo(int n);

int main(){

printf("introdusca el numero para saber si es oblongo ");
scanf("%d",&num);


int ob=oblongo(n);
if(ob*(ob+1)==num){
printf("para la serie n= %dx%d, su oblongo es: %d",ob,ob+1,num);
printf("\n");
}else{
printf ("El numero %d no es oblongo",num);
printf("\n");
}
return 0;
}

 int oblongo( int n){

if(n<num){
 if(n*(n+1)!=num ){
 return oblongo(n+1);

 }else{
return n;

}

}

}
