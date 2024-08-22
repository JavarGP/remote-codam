/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:23:17 by jplace            #+#    #+#             */
/*   Updated: 2024/08/19 11:44:30 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num = 0;
	while (num <= 5)
	{
		write (1, &num, 1);
		num++;
	}

	write (1, &num, 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}


#include <unistd.h>

void display_digits_ascending() {
    char digit = '0'; // Start with the character '0'

    while (digit <= '9') { // Loop until digit '9'
        write(1, &digit, 1); // Write the digit to standard output
        digit++; // Move to the next digit
    }

    write(1, "\n", 1); // Write a newline character after all digits are displayed
}

int main() {
    display_digits_ascending(); // Call the function to display digits
    return 0;
}