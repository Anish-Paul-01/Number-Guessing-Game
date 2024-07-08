#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int Number;
    srand(time(0));  // -----> for time we include time.h library
    Number = rand()%100+1; // Generates a random Number Between 1 and 100
    // For srand we include stdlib.h library
    printf("The Number is %d", Number);
    return 0;
}
