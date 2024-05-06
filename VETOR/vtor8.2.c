#include <stdio.h>
int main()
{
    int repetido = 0, teste1 = 0, teste2 = 0, vetor[] = {34, 22, 34, 98, 74, 34, 41, 12, 56, 34, 78};

    for (teste1; teste2 <= 11; teste1++)
    {
        for (teste2; teste2 < teste1; teste2++)
        {
            if (vetor[teste1] == vetor[teste2])
            {
                repetido++;
            }
        }
    }

    return 0;
}