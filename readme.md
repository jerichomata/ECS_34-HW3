Prog Hw #3 Syllabus
I. Grading Breakdown
    - 70 pts
        p.1 8
        p.2 8
        p.3 27
        p.4 27
II. Submitting
    - only submit prog3.c
    - tests that automatically fail == prog has a memory leak
        - file struct may have dynamically allocated memory?
    - careful of hidden cases.. p3 has 12 hidden cases
III. Concept Prereq
    1. static keyword
        - causes variable to behave like a global variable while still having scope in function it is declared
    2. File I/O
        - programs that read from or wrote to files 
        - ** call function to open a file, and specify a certain mode
        - fopen()
            - returns NULL if it cannot open a file
            - "r" open existing text file for reading
            - "w" open/create file for writing, clearing contents
            - "a" open/create file for writing at end
            - "r+: open for reading and writing
        - given a pointer to an instance of FLIE, which is a struct
            - canuse file pointer in the same way.. as a 'file object' 
            - fscanf() or f(gets)
        - must close the file once done with it
    3. Structs
        - classes in python are called structs in C
        - type of each member must be specified
            - no initializers
        - when defining and instance of struct, can use an initiailize list which you can specify the values of the members in the same order 
            - cannot use an initializer list to initialize the members of dynamically allocated instance of a struct
        - can use struct to package data together

IV. Probelms
    a. PART #1
        - implement the parseforhighest() function 
            - first arg takes the name of a file that is assumed to conatin one integer per line
        - determine the highest integer in the file and store that integer in the int variable referenced by the second argument
        - close the file when done
        - return -1 if either argument is a null pointer
        - return -2 if the file cannot be opened 

    b. PART #2
        - implement getallhigherthan 
        - takes four arg: array of int, length of array, threshold int, and pointer to an int
        - return an array of all int in the first argument that are higher than threshold
        - new array must appear in opposite order 
        - length of new array stored in forth argument
        - return NULL if function is given any null pointers 