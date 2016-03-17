#include <stdio.h>
int main()
{
	int licznik=0;
	printf("float:\n");
	float f=1.0;
	while(1.0+f>1.0){
		printf("%i ziarno wynosi %e\n", licznik, f);
		f/=2.0;
		licznik++;
	}

	licznik=0;
	printf("double:\n");
	double d=1.0;
	while(1.0+d>1.0){
	printf("%i ziarno wynosi %e\n", licznik, d);
	d/=2.0;
	licznik++;
	}

	licznik=0;
	printf("long double:\n");
	long double ld=1.0;
	while(1.0+ld>1.0){
		printf("%i ziarno wynosi %e\n", licznik, ld, ld);
		ld/=2.0;
		licznik++;
	}

  return 0;
}
