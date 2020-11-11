#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// #include "prog3.h"

#define NULL_PTR_STR "(null pointer)"

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

char* strtok_c(const char* str, const char* delim) 
{
    // char* str2;
    // strcpy(str2, str);

    // int len = sizeof(str2);
    // char* new_arr;
    // for (int i = 0; i < len; i++)
    // {
    //     if (str2[i] != delim)
    //     {
    //         new_arr[i] = str2[i];
    //     }
    // }
    // return new_arr;
    
    char* cpy = strdup(str);
    char* tok = strtok(cpy, delim);
    free(tok);
    return tok;
}




// #define NULL_PTR_STR "(null pointer)"

int main()
{
    /**
     * Simple example.
     */
    char s1[] = "Hi there friend";  // Could use char* since the string
                                    // shouldn't be mutated anyways.
    char* tok1 = strtok_c(s1, " ");
    char* tok2 = strtok_c(NULL, " ");
    char* tok3 = strtok_c(NULL, " ");
    char* tok4 = strtok_c(NULL, " ");
    printf("s1: %s\n", s1);
    printf("tok1: %s\n", tok1);
    printf("tok2: %s\n", tok2);
    printf("tok3: %s\n", tok3);
    printf("tok4: %s\n", tok4 ? tok4 : NULL_PTR_STR);
    free(tok1);
    free(tok2);
    free(tok3);

    // /**
    //  * Multiple delimiters.
    //  */
    // char s2[] = "abracadabra";
    // tok1 = strtok_c(s2, "db");
    // tok2 = strtok_c(NULL, "db");
    // tok3 = strtok_c(NULL, "db");
    // tok4 = strtok_c(NULL, "db");
    // char* tok5 = strtok_c(NULL, "db");
    // printf("s2: %s\n", s2);
    // printf("tok1: %s\n", tok1);
    // printf("tok2: %s\n", tok2);
    // printf("tok3: %s\n", tok3);
    // printf("tok4: %s\n", tok4);
    // printf("tok5: %s\n", tok5 ? tok5 : NULL_PTR_STR);
    // free(tok1);
    // free(tok2);
    // free(tok3);
    // free(tok4);

    // /**
    //  * Tokenizing same string multiple times.
    //  */
    // char s3[] = "How are you?";
    // tok1 = strtok_c(s3, "er");
    // tok2 = strtok_c(NULL, "o");  // Starts at 'e', but if we had used the
    //                              // same delimiters as before, it would start
    //                              // at ' '.
    // tok3 = strtok_c(s3, "w?");
    // printf("s3: %s\n", s3);
    // printf("tok1: %s\n", tok1);
    // printf("tok2: %s\n", tok2);
    // printf("tok3: %s\n", tok3);
    // free(tok1);
    // free(tok2);
    // free(tok3);

    // /**
    //  * This is similar to the example I mentioned where I talk about no empty
    //  * tokens in the directions.
    //  */
    // char s4[8] = "abcde";  // must be char[] since mutating two lines later
    // tok1 = strtok_c(s4, "x");
    // s4[5] = 'f';
    // s4[6] = 'g';  // s4[7] is already a null byte
    // tok2 = strtok_c(NULL, "x");  // Will return NULL since last strtok_c() call
    //                              // reached what was the end of s4 at the time.
    // printf("s4: %s\n", s4);
    // printf("tok1: %s\n", tok1);
    // printf("tok2: %s\n", tok2 ? tok2 : NULL_PTR_STR);
    // free(tok1);
    // free(tok2);

    // /**
    //  * Example in which the tokens have to have their start points moved up
    //  * so as to avoid starting on delimiters.
    //  */
    // char s5[] = "aabcdaaaefghaaiaaajklaa";
    // tok1 = strtok_c(s5, "?!a");
    // tok2 = strtok_c(NULL, "?!a");
    // tok3 = strtok_c(NULL, "?!a");
    // tok4 = strtok_c(NULL, "?!a");
    // tok5 = strtok_c(NULL, "?!a");
    // char* tok6 = strtok_c(NULL, "?!a");
    // printf("s5: %s\n", s5);
    // printf("tok1: %s\n", tok1);
    // printf("tok2: %s\n", tok2);
    // printf("tok3: %s\n", tok3);
    // printf("tok4: %s\n", tok4);
    // printf("tok5: %s\n", tok5 ? tok5 : NULL_PTR_STR);
    // printf("tok6: %s\n", tok6 ? tok6 : NULL_PTR_STR);
    // free(tok1);
    // free(tok2);
    // free(tok3);
    // free(tok4);
}