/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:45:10 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/13 12:19:59 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char e)
{
	write(1 ,&e ,1);
}
void	ft_print_comb2(void)
{
	char a ='0';
	char b ='0';
	char c ='0';
	char d ='0';

	while( a <= '9')
	{
		while( b <= '9')
		{
			while( c <= '9')
			{
				while( d <= '9')
				{
					if (( a == '0' && b == '0') ||( c == '0' && d == '0'))
					{
					
					}
					else
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
						ft_putchar(',');
					}
					d++;
				}
				c++;
				d='0';
			}
			b++;
			c='0';
		}
		a++;
		b='0';
	}

  
}

int	main()
{
	ft_print_comb2();
	return 0;
}
	
