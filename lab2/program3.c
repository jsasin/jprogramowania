#include<stdio.h>

#define ZNAKI 4


int key(int n) {
	return -n;
}

int code(int buf[ZNAKI]) {
	int i=0;
	int pak=0;
	for(i=0;i<ZNAKI;i++)
    		pak=(pak<<8)|(buf[i]&255);
return pak;
}

int main () {
  	int ile=0;
	int buf[ZNAKI];
  	buf[ile] = (int)getchar();
  	while (buf[ile] != EOF) {
    		ile++;
    		if (ile == ZNAKI) {
      			printf(" %11i\n", key(code(buf)));
      			ile=0;
    		}
    		buf[ile] = (int)getchar();
  	}
  	if (ile > 0){
    		for (int i=ile; i<ZNAKI; i++)  buf[i]=' ';
    		printf(" %10i\n", key(code(buf)));
  	}
  return 0;
}
