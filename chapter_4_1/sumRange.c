#include <stdio.h>
#include <stdlib.h>

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
        fprintf(stderr, "Usage %s begin end", argv[0]);
    }
    int begin = atoi(argv[1]); // Convert the second argument, begin, to an integer from string
    int end = atoi(argv[2]); // Convert the third argument,end, to an integer from a string

    printf("sumRange(%d, %d)=%d\n", begin, end, sumRange(begin, end));

    return 0;
}