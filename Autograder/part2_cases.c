#include <stdio.h>
#include <stdlib.h>
#include "prog3.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You did not pass a command-line argument to this executable.\n");
        return 1;
    }
    int caseNum = atoi(argv[1]);
    unsigned newArrlen = 0;
    int* higherThan = NULL;
    int arr1[] = {18, 12, 22, 37, 15};
    switch (caseNum)
    {
        case 1: ;  // visible
            printf("*** getAllHigherThan(): First Call ***\n");
            higherThan = getAllHigherThan(arr1, 5, 15, &newArrlen);
            printf("New array length: %u\n", newArrlen);
            for (unsigned i = 0; i < newArrlen; ++i)
                printf("Index %u: %d\n", i, higherThan[i]);
            free(higherThan);
            printf("*** getAllHigherThan(): Second Call ***\n");
            int arr2[] = {38, 15, 16, 22, 9, 32, 25, 20};
            higherThan = getAllHigherThan(arr2, 8, 19, &newArrlen);
            printf("New array length: %u\n", newArrlen);
            for (unsigned i = 0; i < newArrlen; ++i)
                printf("Index %u: %d\n", i, higherThan[i]);
            free(higherThan);
            break;
        default:
            printf("Invalid case number.\n");
            break;
    }
    return 0;
}
