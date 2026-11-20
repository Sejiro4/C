#include <stdio.h>

int main(void)
{
    char answer[256];

    printf("What is your name? ");

    int result = scanf("%255s", answer);

    printf("\nscanf returned: %d\n", result);

    if (result == 1)
    {
        printf("Hello, %s\n", answer);
    }
   else
{
    printf("No input received. EOF detected.\n");
    return 1;
}
    return 0;
}