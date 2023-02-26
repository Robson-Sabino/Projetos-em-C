// Media de notas
#include <stdio.h>
int main()
{
    float x, y;
    for (int i = 1; i < 11; i++)
    {
        printf("Nota %i\n",i);
        scanf("%f", &x);
        y=x+y;
    }
    x = y / 10;
    printf("sua media e: %.1f\n", x);
    return 0;
}