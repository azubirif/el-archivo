#include<string.h>

int str_comparer(char *s1, char *s2)
{
    int l1 = strlen(s1);
    
    if (l1 != strlen(s2)) return 0;

    for (int i = 0; i < l1; i++)
    {
        if (*(s1+i) != *(s2+i)) return 0;
    }

    return 1;
}
