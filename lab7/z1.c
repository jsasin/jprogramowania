#include <stdio.h>
void main (int argnum, char* arg[ ]){
	int i;
	for(i=argnum-1; i>0; i--){
		printf("%s ", arg[i]);
	}
	printf("\n");
}
