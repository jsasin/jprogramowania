#include <stdio.h>

void drukujspacja(int liczba){
	int ilecyfr=0;
	int kopia=liczba;
	while(kopia!=0){
		kopia/=10;
		ilecyfr++;
	}
//	printf("%d\n\n",ilecyfr);

	kopia=liczba;
	int tab[ilecyfr];
	int ilecyfrkopia=ilecyfr;
	ilecyfr--;
	while(kopia!=0){
		kopia=liczba%10;
		tab[ilecyfr]=kopia;
		liczba/=10;
		ilecyfr--;
	}

	int i,licznik=0;
	for(i=0;i<ilecyfrkopia;i++){
		printf("%d",tab[i]);
		licznik++;
		if(licznik==3){
			licznik=0;
			printf(" ");
		}
	}
	printf("\n");
}

int main(){
	int wprowadzona;
	scanf("%d",&wprowadzona);
	drukujspacja(wprowadzona);
return 0;
}
