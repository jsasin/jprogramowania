#include <stdio.h>
#define CZYT(x,y) printf("Podaj wartosc %s:", #x);scanf("%"#y,&x);
void main(){
	int x;
	float y;
	CZYT(x,i);
	printf("%i\n",x);
	CZYT(y,f);
	printf("%f\n",y);
}
