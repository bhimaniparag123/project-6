#include <stdio.h>

int main() 
{
    char str[100];
    int start = 0, end = 0, length = 0, i, isPalindrome = 1;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') 
	{
        if (str[length] == '\n') 
		{
            str[length] = '\0';
            break;
        }
        length++;
    }

    end = length - 1;

    while (start < end) 
	{
        if (str[start] != str[end]) 
		{
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) 
	{
        printf("The given string is a Palindrome.\n");
    }
	else 
	{
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}
