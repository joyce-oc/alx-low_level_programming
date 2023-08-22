#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10 // Change this to the desired password length

int main(void)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the characters that can be part of the password
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    // Generate the password
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int random_index = rand() % (sizeof(valid_chars) - 1);
        password[i] = valid_chars[random_index];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator

    printf("Generated Password: %s\n", password);

    return 0;
}
