/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:55:27 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/10 15:02:12 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(void)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char a ='0';
	char b ='0';
	char c ='0';
	
	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
				ft_putchar(char a,char b,char c);
				c++;
			}
					c='0';
					b++;
		}
		   b='0';
		   a++;
	}
	a='0';

}


int main()
{
	return 0;
}
