#include <stdio.h>

#define lengthString 100

const char* checkBalanced(char string[])
{
    int counterBalanceLine = 0;

    if (string[0] == '\n')
    {
        return "This is an empty string.";
    }

    for (int i = 0; i < lengthString; ++i)
    {
        if (string[i] == '\0' || counterBalanceLine < 0)
        {
            break;
        }

        if (string[i] == '(')
        {
            ++counterBalanceLine;
        }
        else if (string[i] == ')')
        {
            --counterBalanceLine;
        }
    }

    if (counterBalanceLine == 0)
    {
        return "Good sequence!";
    }
    else
    {
        return "Bad sequence!";
    }
}

int main()
{
    char stringBracket[lengthString] = { '\0' };

    printf("\nEnter bracket sequence (not more than %d): \n", lengthString);
    fgets(stringBracket, lengthString, stdin);

    printf("%s", checkBalanced(stringBracket));

    return 0;
}