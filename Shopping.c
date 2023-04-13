#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka > 1000)
    {
        printf("I will buy Punjabi\n");
        taka = taka - 1000;
        if (taka >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}