#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: "); // get_string returns a pointer to a string
    if (s == NULL)               // if get_string returns NULL, it means it failed to allocate memory
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1); // +1 for the null terminator
    if (t == NULL)                   // if malloc returns NULL, it means it failed to allocate memory
    {
        return 1;
    }

    strcpy(t, s); // copy string s into string t

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // free memory allocated by malloc
    return 0;
}