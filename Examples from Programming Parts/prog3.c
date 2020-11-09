#include <stdio.h> 
#include <stdlib.h>

#include "prog3.h"

int parseForHighest(const char* filename, int* highest) 
{
    if (filename == NULL || highest == NULL)
    {
        return -1;
    }
    FILE* fp = fopen(filename, "r");
    int end = getc(fp);
    int file_val = 0;
    int large_val = 0;
    if (fp == NULL)
    {
        fclose(fp);
        return -2;  
    } else
    {
        while( end != EOF)
        {
            fscanf(fp, "%d", &file_val);
            if (file_val > large_val)
            {
                large_val = file_val;
            }
            end = getc(fp);
        }
        int *large = highest;
        *large = large_val;
        fclose(fp);
        return 0;
    }
}    