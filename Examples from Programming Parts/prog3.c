#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// #include "prog3.h"

// #define NULL_PTR_STR "(null pointer)"

// int parseForHighest(const char* filename, int* highest) 
// {
//     if (filename == NULL || highest == NULL)
//     {
//         return -1;
//     }
//     FILE* fp = fopen(filename, "r");
//     int end = getc(fp);
//     int file_val = 0;
//     int large_val = 0;
//     if (fp == NULL)
//     {
//         fclose(fp);
//         return -2;  
//     } else
//     {
//         while( end != EOF)
//         {
//             fscanf(fp, "%d", &file_val);
//             if (file_val > large_val)
//             {
//                 large_val = file_val;
//             }
//             end = getc(fp);
//         }
//         int *large = highest;
//         *large = large_val;
//         fclose(fp);
//         return 0;
//     }
// }   

/* int* getAllHigherThan(const int* arr, unsigned arrlen, int threshold, unsigned* newArrlen) 
{
    if (arr == NULL || arrlen == 0 || threshold == 0 || newArrlen == NULL)
    {
        return NULL;
    }

    int *new_arr;
    new_arr = (int *) malloc(sizeof(int)*arrlen);
    int new_l = 0; //new length
    for (int i = 0; i < arrlen; i++) 
    {
        if (arr[i] > threshold)
        {
            new_arr[new_l] = arr[i];
            new_l += 1;
        } 
    }
    
    unsigned int *new_len = newArrlen;
    *new_len = new_l;
    // printf("%d\n", j);
    int *final_arr;
    final_arr = (int *) malloc(sizeof(int)*new_l);
    int m = new_l - 1;
    for (int k = 0; k <= new_l; k++)
    {
        final_arr[k] = new_arr[m];
        m -= 1;
    }
    
    // free(new_arr);
    // new_arr = NULL;
    // final_arr[new_l] = '\0';
    return final_arr;

}  */

// char* strtok_c(const char* str, const char* delim) 
// {
//     // char* str2;
//     // strcpy(str2, str);

//     // int len = sizeof(str2);
//     // char* new_arr;
//     // for (int i = 0; i < len; i++)
//     // {
//     //     if (str2[i] != delim)
//     //     {
//     //         new_arr[i] = str2[i];
//     //     }
//     // }
//     // return new_arr;
    
//     char* cpy = strdup(str);
//     char* tok = strtok(cpy, delim);
//     free(tok);
//     return tok;
// }
