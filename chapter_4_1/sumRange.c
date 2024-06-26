#include <stdio.h>
#include <stdlib.h>

// define some return constants
#define SUCCESS 0
#define ERROR_INSUFFICENT_ARGUMENTS 1

int sumRange(int begin, int end)
{
    int sum = 0;        // Sum of the integers between begin and end

    for (int iter = begin; iter < end; iter++)
    {
        sum += iter;
    }

    return sum;
}

int main (int argc, char **argv)
{
    if (argc != 3)
    {
        // argv[0] is the name of the program. Because the arguments include 
        // the name of the program
        fprintf(stderr, "Usage %s begin end\n", argv[0]);

        return ERROR_INSUFFICENT_ARGUMENTS;
    }
    int begin = atoi(argv[1]); // Convert the second argument, begin, to an integer from string
    int end = atoi(argv[2]); // Convert the third argument,end, to an integer from a string

    printf("sumRange(%d, %d)=%d\n", begin, end, sumRange(begin, end));

    return SUCCESS;
}