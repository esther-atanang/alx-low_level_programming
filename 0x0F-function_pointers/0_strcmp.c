#include "3-calc.h"
#include <stdlib.h>

int stringlen(char *str)
{
    int i = 0;
    if (str != NULL)
    {
        while (str[i] != '\0')
        {
            i++;
        }
    }
    return i;
}

int custom_strcmp(char *str1, char *str2)
{
    if (str1 != NULL && str2 != NULL)
    {
        int i = 0;
        int len_one = stringlen(str1);
        int len_two = stringlen(str2);

        if (len_one < len_two)
        {
            return -1;
        }
        else if (len_one > len_two)
        {
            return 1;
        }
        else
        {
            for (i = 0; i < len_one; i++)
            {
                int ascii_one = (int)str1[i];
                int ascii_two = (int)str2[i];
                if (ascii_one != ascii_two)
                {
                    return ascii_one - ascii_two;
                }
            }
            return 0;
        }
    }
    return -1;
}
