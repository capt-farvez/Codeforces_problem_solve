#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[1000];
    scanf("%s",&name);
    int sum = 0;
    for (int i = 0; i < strlen(name)- 1; i++)
    {
        for (int j = i + 1; j < strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                sum++;
                break;
            }
        }
    }
    int a = strlen(name) - sum;
    if (a % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    
    return 0;
}