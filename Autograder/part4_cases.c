#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog3.h"

#define SIZE_TO_CLEAR 10000

// Should clear any recently used (but no longer
// "alive") stack memory. Purpose is to prevent
// student's code from working if their loadStudent()
// returns a pointer to a local/automatic variable.
static void overwriteRecentStackUsage(void)
{
    char recent[SIZE_TO_CLEAR];
    memset(recent, 0, SIZE_TO_CLEAR);
}

// Makes assumptions about the memory manager.
// Should clear any recently deallocated memory.
// Purpose is to prevent student's code from working
// if their loadStudent() returns a dangling pointer.
static void overwriteRecentHeapUsage(void)
{
    void* recent = malloc(SIZE_TO_CLEAR);
    memset(recent, 0, SIZE_TO_CLEAR);
    free(recent);
}

static void reportIfClassmates(const struct Student *s1,
                               const struct Student *s2)
{
    char* tmp = "";
    if (!areClassmates(s1, s2))
        tmp = "not ";
    printf("%s and %s are %sclassmates.\n", s1->name, s2->name, tmp);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You did not pass a command-line argument to this executable.\n");
        return 1;
    }
    int caseNum = atoi(argv[1]);
    struct Student * s1 = NULL, * s2 = NULL, * s3 = NULL;
    /**
     * Reveal in visible cases:
     * - fake_person.txt
     * - fake_person2.txt
     * - fake_person3.txt
     */
    switch (caseNum)
    {
        case 1:  // visible
        case 5:  // visible; calls freeStudent() later
            s1 = loadStudent("part4_files/fake_person.txt");
            s2 = loadStudent("part4_files/fake_person2.txt");
            overwriteRecentStackUsage();
            overwriteRecentHeapUsage();
            printStudent(s2);
            printStudent(s1);
            break;
        case 7:  // visible
            s1 = loadStudent("part4_files/fake_person.txt");
            s2 = loadStudent("part4_files/fake_person2.txt");
            s3 = loadStudent("part4_files/fake_person3.txt");
            reportIfClassmates(s1, s2);
            reportIfClassmates(s2, s1);
            reportIfClassmates(s1, s3);
            break;
        default:
            printf("Invalid case number.\n");
            break;
    }
    if (caseNum == 5)
    {
        freeStudent(&s1);
        freeStudent(&s2);
    }
    return 0;
}
