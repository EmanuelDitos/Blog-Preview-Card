#include <stdio.h>


int main (){
	char a;
	char b;
	scanf ("%c", &a);
	fflush(stdin);
	scanf ("%c", &b);
	char resultado = a +b;
	printf ("resultado: %c %c", a,b);
	return 0;
}
