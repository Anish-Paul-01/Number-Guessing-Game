#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int Number, guess, nguesses1 = 1, nguesses2 = 1;
    char a, b;
    srand(time(0));
    Number = rand() % 100 + 1; // Generates a random Number Between 1 and 100
    // printf("The Number is %d \n", Number);

    // Keep running the Loop Untill the Number is guessed
    do
    {
        printf("Guess The Number Betwwen 1 And 100 \n:");
        scanf("%d", &guess);
        if (guess > Number)
        {
            printf("Lower Number Please! \n");
        }
        else if (guess < Number)
        {
            printf("Higher Number Please! \n");
        }
        else
        {
            printf("You Guessed it in %d attempts \n", nguesses1);
        }
        nguesses1++;
    } while (guess != Number);

   
    return 0;
}
