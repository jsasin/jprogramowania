#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){
	short test_short = SHRT_MAX+1;
	printf("short: Niepoprawny wynik dzialania %d + 1 = %d\n",SHRT_MAX,test_short);
	int test_int = INT_MAX+1;
	printf("int: Niepoprawny wynik dzialania %d + 1 = %d\n",INT_MAX,test_int);
	long test_lint = LONG_MAX+1;
	printf("long int: Niepoprawny wynik dzialania %li + 1 = %li\n",LONG_MAX,test_lint);
	long long test_llint = LLONG_MAX+1;
	printf("long long int: Niepoprawny wynik dzialania %lli + 1 = %lli\n",LLONG_MAX,test_llint);
	float test_float= 1.0 + 0.00000001;
	printf("float: Niepoprawny wynik dzialania 1.0 + 0.00000001 = %1.8f\n",test_float);
	double test_double= 1.0 + 0.0000000000000001;
	printf("double: Niepoprawny wynik dzialania 1.0 + 0.0000000000000001 = %1.16lf\n",test_double);
	long double test_ldouble= 1.0 + 0.0000000000000000001;
	printf("long double: Niepoprawny wynik dzialania 1.0 + 0.0000000000000000001 = %1.19Lf\n",test_ldouble);

return 0;
}
