/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:42:52 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/10 15:36:16 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putvar(char a ,char b ,char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if(a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void	ft_print_comb(void)
{
	char a ='0';
	char b;
	char c;

	while(a <= '9')
	{
		b = a + 1;
		while(b <= '9')
		{
			c = b + 1;
			while(c <= '9')
			{
				ft_putvar( a , b , c );
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
