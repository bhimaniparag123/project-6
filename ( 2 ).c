#include <stdio.h>

#define MAX_CHAR 256
int main() 
{
    char str[100];
    int frequency[MAX_CHAR] = {0};
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] != '\n') 
		{
            frequency[(unsigned char)str[i]]++;
        }
    }

    printf("Frequency of each letter:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }
}
