#include<stdio.h>
#include<math.h>
int poteguj(int podstawa, int wykladnik){
	int wynik=podstawa;
	if(wykladnik==1)return podstawa;
	if(wykladnik==0) return 1;
	if(podstawa==0) return 0;
	wykladnik--;
	while(wykladnik!=0){
		wynik*=podstawa;
		wykladnik--;
	}
return wynik;
}


int main(){
	int liczba[32];
	int i,j,reszta;
	long int podana;
	scanf("%li",&podana);
		for(i=0;i<32;i++)
			liczba[i]=0;
			j=31;
		
	while(podana!=0){
		reszta=podana%2;
		podana=podana/2;
		if(reszta==1)
			liczba[j]=1;
			j--;
		}


	for(i=0;i<32;i++)
		printf("%d",liczba[i]);
	printf("\n");

	int dni=0,miesiace=0,lata=0;

	j=0;

	for(i=31;i>26;i--){
		if(liczba[i]==1)
			dni+=poteguj(2,j);
		j++;
	}
                printf("liczba dni wynosi %d \n",dni);

	j=0;

	for(i=26;i>22;i--){
	         if(liczba[i]==1)
                        miesiace+=poteguj(2,j);
                j++;
        }

		printf("liczba miesiecy wynosi %d\n",miesiace);

	j=0; 
	for(i=22;i>=0;i--){
                 if(liczba[i]==1)
                        lata+=poteguj(2,j);
                j++;
        }

                printf("liczba lat wynosi %d\n",lata);

	printf("Zakodowana liczba 1032225 to 1.1.2016\n");

return 0;
}
