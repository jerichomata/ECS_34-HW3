#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog3.h"

static void printStringOrNull(const char* formatStr, const char* str)
{
    if (!str) str = "(NULL PTR)";
    printf(formatStr, str);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You did not pass a command-line argument to this executable.\n");
        return 1;
    }
    int caseNum = atoi(argv[1]);
    char* tok = NULL, *str = NULL, // *str2 = NULL,
        *tok1 = NULL, *tok2 = NULL, *tok3 = NULL,
        *tok4 = NULL, *tok5 = NULL;
    switch (caseNum)
    {
        case 1:  // visible
            tok = strtok_c("Who are you?", " ");
            printStringOrNull("%s\n", tok);
            free(tok);
            break;
        case 2:  // visible
            str = "Who are you?";
            tok1 = strtok_c(str, " ");  // Who
            tok2 = strtok_c(str, " ");  // Who
            tok3 = strtok_c(str, " ");  // Who
            tok4 = strtok_c(NULL, " ");  // are
            tok5 = strtok_c(NULL, " ");  // you?
            printStringOrNull("%s\n", tok1);
            free(tok1);
            printStringOrNull("%s\n", tok2);
            free(tok2);
            printStringOrNull("%s\n", tok3);
            free(tok3);
            printStringOrNull("%s\n", tok4);
            free(tok4);
            printStringOrNull("%s\n", tok5);
            free(tok5);
            break;
        case 3:  // visible
            str = "Who are you?";
            tok1 = strtok_c(str, " ");  // Who
            tok2 = strtok_c(NULL, " ");  // are
            tok3 = strtok_c(NULL, " ");  // you?
            tok4 = strtok_c(NULL, " ");  // NULL
            tok5 = strtok_c(NULL, " ");  // NULL
            printStringOrNull("%s\n", tok1);
            free(tok1);
            printStringOrNull("%s\n", tok2);
            free(tok2);
            printStringOrNull("%s\n", tok3);
            free(tok3);
            printStringOrNull("%s\n", tok4);
            free(tok4);
            printStringOrNull("%s\n", tok5);
            free(tok5);
            break;
        default:
            printf("Invalid case number.\n");
            break;
    }
    return 0;
}
