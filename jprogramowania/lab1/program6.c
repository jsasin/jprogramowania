#include<stdio.h>
//program zawiera warningi, a sprawdzic dzialanie nietypowych konstrukcji skladniowych

int main(){
int a,b,c,d,i,N=10;
int tab[20];
//wielokrotne przypisanie tej samej stalej wielu zmiennym
  a = b = c = d = 0;
//przypisywanie w tablicy, numer indeksu==wartosci przechowywanej w a[indeks]
  for (i=0; i<N; tab[i++]=i);
//przypisywanie w tablicy, numer indeksu==wartosci przechowywanej w a[indeks+1]
  for (i=0; i<N; tab[++i]=i);

//mnozenie i *2 do momentu przekroczenia wartosci N
  i=1; while ((i*=2)<N){
printf("%d\n",i);
};
printf("Wynik po petli %d\n",i);

return 0;
}
