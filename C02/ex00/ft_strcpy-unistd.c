#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *message_value = dest;

	while((*dest++ = *src++));

	return message_value;
}

int main() 
{
    char message[20];
    char source[] = "whomp whomp!"; // Manually creating a string using ,unistd.h
    
    ft_strcpy(message,source);
    
    write(1, message, sizeof(source) - 1);  // Using `write` from `unistd.h` to print the string

    return 0;
}
