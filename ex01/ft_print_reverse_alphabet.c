/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:39:48 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/09 17:50:00 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{
	char letter;
	letter='z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}

int main ()
{
	ft_print_reverse_alphabet();
	return (0);
}

