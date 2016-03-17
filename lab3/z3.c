#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("FLT_MAX rzutowane na int %d\n",(int)FLT_MAX);
	printf("DBL_MAX rzutowane na int %d\n",(int)DBL_MAX);
	printf("INT_MAX rzutowane na short %d\n",(short)INT_MAX);
	printf("FLT_MAX rzutowane na short %d\n",(short)FLT_MAX);
	printf("INT_MAX rzutowane na float %f\n",(float)INT_MAX);
	return 0;
}
