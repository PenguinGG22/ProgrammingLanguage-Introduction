#include <stdio.h>
int main()
{
    int cnt = 0;
    printf(" ============ \n");
    printf(" Die1 Die2 \n");
    printf(" ============ \n");

    for (int die1 = 1; die1 <= 6; die1++)
    {
        for (int die2 = 1; die2 <= 6; die2++)
        {
            if (die1 + die2 == 7)
            {
                printf("\t%d \t%d \n", die1, die2);
                cnt++;
            }
        }
    }

    printf(" =================\n");
    printf("\tALL %d cases\n", cnt);

    return 0;
}
