/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:09:17 by jplace            #+#    #+#             */
/*   Updated: 2024/08/19 11:23:00 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet > 'a' -1)
	{
		write (1, &reverse_alphabet, 1);
		reverse_alphabet--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
