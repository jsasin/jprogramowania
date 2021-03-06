#include <stdio.h>
#include <stdlib.h>



#define MAX_DL_IM 11
#define MAX_DL_NA 17

typedef  struct {
	char imie[MAX_DL_IM];
	char nazwisko[MAX_DL_NA];
	int pensja;
}  osoba;


int ile_linii(char* plik){
	int licznik=0;
	char imiepom[MAX_DL_IM];
	char nazwiskopom[MAX_DL_NA];
	int pensjapom=0;

	FILE* fp=fopen(plik,"r");
	if(fp==NULL){
		fclose(fp);
		return 0;
	}
	else{
		while((fscanf(fp,"%s %s %d",imiepom,nazwiskopom,&pensjapom))!=EOF)
			licznik++;
	}
	fclose(fp);
	return licznik;
}

osoba* do_tablicy(char* plik,osoba* tablica){
	int i=0;
	FILE* fp=fopen(plik,"r");
                while((fscanf(fp,"%s %s %d",tablica[i].imie,tablica[i].nazwisko,&tablica[i].pensja))!=EOF){
                        i++;
        	}
        fclose(fp);
	return tablica;
}


void zapisz_posortowane(osoba* wynikowa,int ile, char* plik){
	FILE* fp=fopen(plik,"w");
	int i;
	for(i=0;i<ile;i++)
		fprintf(fp,"%s %s %d",wynikowa[i].imie,wynikowa[i].nazwisko,wynikowa[i].pensja);
	fclose(fp);
}


void  sortuj_spis(osoba* spis, int ile) {
        int i,j;
}



int main(int argnum, char* argv[]){
	int ile=ile_linii(argv[1]);
	osoba tablica[ile];
	do_tablicy(argv[1],tablica);

return 0;
}
