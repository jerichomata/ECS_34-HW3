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
    char* filename1 = NULL;
    char* filename2 = NULL;
    int highest = -1;
    int* highestPtr = &highest;
    int retval = -1;
    switch (caseNum)
    {
        case 1:  // visible
        case 4:  // used for memory leak (also visible)
            filename1 = "part1_files/values1.txt";
            printf("*** parseForHighest(): First Call ***\n");
            retval = parseForHighest(filename1, highestPtr);
            printf("retval=%d\n", retval);
            printf("highest=%d\n", highest);
            printf("*** parseForHighest(): Second Call ***\n");
            retval = parseForHighest(NULL, highestPtr);
            printf("retval=%d\n", retval);
            break;
        default:
            printf("Invalid case number.\n");
            break;
    }
    return 0;
}
