#include <stdlib.h>
#include <stdio.h>

void main()
{

    char ANS[100], PAT[100], REP[100], STR[100];
    int i = j = m = n = c = 0;

    while (STR[c] != '\0')
    {

        if (STR[m] == PAT[i])
        {
            i++;
            m++;

            if (PAT[i] == '\0')
            {
                for (k = 0; REP[K] != '\0'; k++, j++)
                {
                    ANS[J] = REP[K];
                    flag = 1;
                }
                c = m;
                i = 0
            }
        }
        else
            ()
            {
                ANS[j] = STR[C];
                c++, j++;
                c = m;
                i = 0;
            }
    }
}
