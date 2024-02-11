#include <stdio.h>

/* Function declaration */
void print_before_main(void);

/* Function definition */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

int main(void)
{
    /* Call the function before executing the main function */
    print_before_main();

    /* Main function code */
    printf("This is the main function.\n");

    return 0;
}
