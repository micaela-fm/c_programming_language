#include <stdio.h>

int main()
{
    int curr_char, last_char;
    last_char = 'a'; // any alphanumeric char is ok

    while((curr_char = getchar()) != EOF)
    {
        if (curr_char != ' ' || last_char != ' ')
            putchar(curr_char);

        last_char = curr_char;
    }
}