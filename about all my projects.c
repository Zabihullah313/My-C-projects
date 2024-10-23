#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x;

    // Print a message indicating that the command processor availability is being checked
    printf ("\n\nIs command processor available?\n");

    // Check if the command processor is available
    if (system(NULL))
    {
        // If it is available, print a message indicating so
        printf ("Command processor available!\n");
    }
    else
    {
        // If it is not available, print a message and exit with a status of 1
        printf ("Command processor not available!\n");
        exit (1);
    }

    // Print a message indicating that the command 'DIR' is being executed
    printf ("Executing command DIR\n");

    // Execute the 'DIR' command and store its return value in 'x'
    x=system ("dir");

    // Print the returned value
    printf ("Returned value is: %d.\n",x);

    return 0;
}
