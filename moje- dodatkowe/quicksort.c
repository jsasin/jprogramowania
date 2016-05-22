#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define MLD 1000000000.0

void replace(int*,int*);


int partition(int tab[],int,int);
void quicksort(int tab[],int,int);
void wypelnijrandom(int);
void wypelnijuporzadkowane(int);
void czytajliczby(int,int tab[]);
void drukujilicz(int tab[]);

int main(){
	int tablica[2500];
	printf("rozmiar tablicy N | (średni) czas - dane losowe | czas - dane niekorzystne:");
	drukujilicz(tablica);



	//wczesniej wykazalem predkosc dzialania algorytmow dla roznych danych( nie sa zapisywane do pliku, mierze tylko predkosc wykonania sortowania)
	//teraz wykarze poprawnosc algorytmu na przykladzie sortowania 100 elementowej tablicy losowej

	wypelnijrandom(100);
	czytajliczby(100,tablica);
	quicksort(tablica,0,100-1);
	FILE *fp;
	fp=fopen("wejscie.txt","w");
	int i;
	for(i=0;i<100;i++)
		fprintf(fp,"%d \n",tablica[i]);
	fclose(fp);


return 0;
}


void replace( int *a, int *b ){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


int partition(int tab[],int p,int r){
	int x=tab[r];
	int i=p-1;
	int j;
	for(j=p;j<=r;j++){
		if(tab[j]<=x){
			i=i+1;
			replace(&tab[i],&tab[j]);
		}
	}
	if(i<r) return i;
	else return i-1;
}

void quicksort(int tab[],int p,int r){
	if(p<r){
		int q=partition(tab,p,r);
		quicksort(tab,p,q);
		quicksort(tab,q+1,r);
	}
}


void wypelnijuporzadkowane(int ileliczb){
	int i;
	FILE *fp;
	
	if((fp=fopen("wejscie.txt","w"))==NULL)
		printf("Nie udalo sie otworzyc pliku do zapisu");

	else{
		for(i=0;i<ileliczb;i++)
			fprintf(fp,"%d \n",i);
	fclose(fp);
	}


}



void wypelnijrandom(int ileliczb){
	int i;
	FILE *fp;
	srand((unsigned int)time(NULL));
	
	if((fp=fopen("wejscie.txt","w"))==NULL)
		printf("Nie udalo sie otworzyc pliku do zapisu");

	else{
		for(i=0;i<ileliczb;i++)
			fprintf(fp,"%d \n",rand()%ileliczb);
	fclose(fp);
	}


}





void czytajliczby(int ileliczb,int tab[]){
	int i;
	FILE *fp;
	
	if((fp=fopen("wejscie.txt","r"))==NULL)
	printf("Nie udalo sie otworzyc pliku do odczytu");
	
	else{
		for(i=0;i<ileliczb;i++)
			fscanf(fp,"%d",&tab[i]);
	}

	fclose(fp);

}


void drukujilicz(int tab[]){
	int pomocnicza[]={100,500,1000,2500};
	struct timespec tp0rand, tp1rand;
	struct timespec tp0porz, tp1porz;
	int i;
	double Tnrand,Tnporz;
	printf("\n");
	for(i=0;i<4;i++){
		wypelnijrandom(pomocnicza[i]);
		czytajliczby(pomocnicza[i],tab);

		clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&tp0rand);
		quicksort(tab,0,pomocnicza[i]-1);
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&tp1rand);
		Tnrand=(tp1rand.tv_sec+tp1rand.tv_nsec/MLD)-(tp0rand.tv_sec+tp0rand.tv_nsec/MLD);
		wypelnijuporzadkowane(pomocnicza[i]);
		czytajliczby(pomocnicza[i],tab);
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&tp0porz);
		quicksort(tab,0,pomocnicza[i]-1);
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&tp1porz);
		Tnporz=(tp1porz.tv_sec+tp1porz.tv_nsec/MLD)-(tp0porz.tv_sec+tp0porz.tv_nsec/MLD);
		printf("%d     | %3.10lf            | %3.10lf  \n",pomocnicza[i],Tnrand,Tnporz);
	}
}
