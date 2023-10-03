#include <stdio.h>

int main()
{
	int c; 
	long counter = 0; 
	while((c = getchar()) != EOF) {
		if(c != '\n')
			++counter; 
	}
	printf("%ld\n", counter);
}