#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

int main(void) {
    char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_length = sizeof(charset) - 1;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random character for each position in the password */
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_length];
    }

    /* Add the null terminator to the end of the password */
    password[PASSWORD_LENGTH] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}
