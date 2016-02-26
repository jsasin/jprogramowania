#include <stdio.h>
int main(){
	int i,y,x,z;
	int a[10];
	i=0;
	a[i++]=0; //a[0]=0, nastepnie nastepuje inkrementacja i;
	printf("%d\n",a[0]);
	a[++i]=0; //najpierw nastepuje inkrementacja i, pozniej przypisanie a[2]=0
	printf("%d\n",a[2]);
	x=2;
	y= (x += 2); //najpierw nastepuje zwiekszenie wartosci x o 2 a nastepnie przypisanie x do y;
	printf("%d\n",x);
	z = (x%=3) + (x %= 4);//po pierwszej operacji x =1 i dodaje sie do niego x=1%4, co daje sume 2, nastepnej ta wartosc przypisuje sie dla z 
	printf("%d\n",z);
return 0;
}
