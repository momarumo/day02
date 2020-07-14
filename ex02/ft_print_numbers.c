/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:58:40 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/10 11:16:25 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar( char c)
{
	write (1,&c,1);

}
void ft_print_numbers(void)
{
	char num ='0';
	while(num < '9')
	{
		ft_putchar(num);
		num++;
	}
}


