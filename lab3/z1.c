#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("\n\n");
	printf("typ        \tdolna wartość          gorna wartosc          ziarno        precyzja       deskryptor formatu\n");
	printf("short       %22d %22d                                 %%i\n", SHRT_MIN, SHRT_MAX);
	printf("int         %22d %22d                                 %%i\n", SHRT_MIN, INT_MAX);
	printf("long        %22ld %22ld                                 %%li\n", LONG_MIN, LONG_MAX);
	printf("long long   %22lld %22lld                                 %%lli\n", LLONG_MIN, LLONG_MAX);
	printf("float       %22e %22e %14e \t%d    \t  %%f lub %%e\n", FLT_MIN, FLT_MAX, FLT_EPSILON, (int)FLT_DIG);
	printf("double      %22le %22le %14le \t%d    \t  %%lf lub %%le\n", DBL_MIN, DBL_MAX, DBL_EPSILON, (int)DBL_DIG);
	printf("long double %22LE %22Le %14Le \t%d    \t  %%Lf lub %%Le\n", LDBL_MIN, LDBL_MAX, LDBL_EPSILON,(int)DBL_DIG);
	printf("\n\n");

return 0;
}
