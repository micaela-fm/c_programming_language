#include <stdio.h>

int main()
{
	int c, counter = 0; 
	while((c = getchar()) != EOF) 
	{
		if(c == '\n' || c == '\t' || c == ' ')
			++counter; 
	}
	printf("%d\n", counter);
}