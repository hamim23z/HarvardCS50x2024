#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int userinput;
    do
    {
        userinput = get_int("Height: ");
    }
    while (userinput < 1 || userinput > 8);

    for (int i = 0; i < userinput; i++)
    {
        for (int j = 0; j < userinput; j++)
        {
            if (i + j < userinput - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}
