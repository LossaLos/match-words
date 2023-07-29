#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

int wdmatch(char *s1, char *s2)
{
    int check = ft_strlen(s1);
    int cpt = 0;
    int i = 0;
    int j = 0;

    while(s2[j])
    {
        if(s2[j] == s1[i])
        {
            i++;
            cpt++;
        }
        j++;
    }

    if(check == cpt)
    {
        printf("%s", s1);
        return(0);
    }
    else
    {
        printf("\n");
        return(0);
    }
}

int main(int argc, char **argv)
{
    if(argc != 3)
    {
       printf("\n");
        return(0);
    }

    wdmatch(argv[1], argv[2]);
}