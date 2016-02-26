#include<stdio.h>

int main(){
	int liczba[8];
	char podana;
	int i,j,rzutowana,reszta;

	printf("Program drukuje kod znaku w zapisie binarnym oraz kod znaku nastepnej linii\n");

	do{
		scanf("%c",&podana);
		rzutowana=(int)podana;
		for(i=0;i<8;i++)
			liczba[i]=0;
			j=7;
		while(rzutowana!=0){
			
			reszta=rzutowana%2;
			rzutowana=rzutowana/2;
			if(reszta==1)
				liczba[j]=1;
			j--;
		}
		for(i=0;i<8;i++)
			printf("%d",liczba[i]);
		printf("\n");
	}while(podana!=EOF);
return 0;
}
