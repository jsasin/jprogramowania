#include <stdio.h>

int main(){
char znak;

do{
znak=getchar();
printf("%c",znak);
}
while(znak!=EOF);

return 0;
}
