/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:22:44 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/09 16:50:32 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void ft_putchar(char c)
{
    write(1,&c,1);
}

 void ft_print_alphabet()
{
	char c = 'a';
	while(c <= 'z')
	{  
    	ft_putchar(c);
	   	c++;
	}
}

int main ()	
{
	ft_print_alphabet();
	return(0);
}

