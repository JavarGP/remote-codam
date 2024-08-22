//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

//char	ft_strcpy(char *dest, char *src);
//{
//	char greetings[] = "whome whomp";
//}

//int main () 
//{
//	ft_strcpy(greetings);
//	printf("%s", greetings);
//}
#include <stdio.h>
#include <string.h>

// Correct function declaration and definition
char *ft_strcpy(char *dest, const char *src) {
    char *original_dest = dest;

    // Copy each character from src to dest, including the null terminator
    while ((*dest++ = *src++));

    return original_dest;
}

int main() {
    char greetings[20];  // Define a char array with enough space for the copied string
    char source[] = "whome whomp";  // The string to be copied

    ft_strcpy(greetings, source);  // Copy source to greetings
    printf("%s\n", greetings);  // Print the copied string
    printf("%lu\n", strlen(source));

    return 0;
}

