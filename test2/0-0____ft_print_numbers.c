/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0____ft_print_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eherlind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 02:11:01 by eherlind          #+#    #+#             */
/*   Updated: 2021/03/03 05:32:50 by eherlind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* **************************************************************************

Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите функцию, которая отображает все цифры в порядке возрастания.


Ваша функция должна быть объявлена ​​следующим образом:

	void	ft_print_numbers(void);


   ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

int	main(void)
{
	char i;
	
	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	return (0);
}


/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}
