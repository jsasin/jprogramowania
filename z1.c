#include<stdio.h>

void przezadres(int n, int k, int* q, int* r){
	*q=n/k;
	*r=n%k;
}

void main(){
	int n,k,calkowita,modulo;
	printf("Podaj n:\n");
	scanf("%d",&n);
	printf("Podaj k:\n");
	scanf("%d",&k);
	przezadres(n, k, &calkowita, &modulo);
	printf("Iloraz= %d\nModulo= %d\n", calkowita, modulo);
}
