#include <stdio.h>

void main()
{
	int c; 

	while((c = getchar()) != EOF) {
		putchar(c);  
	}

	//printf("%d\n", getchar() != EOF);
	printf("%d\n", EOF);
}
