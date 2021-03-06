/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-3____sort_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/24 15:23:25 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** **

Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Напишите следующую функцию:

void sort_int_tab(int *tab, unsigned int size);


Он должен отсортировать (на месте) массив int «tab», который содержит
точно элементы «size», в порядке возрастания.

Двойники должны быть сохранены.

Ввод всегда последовательный.


** ************************************************************************** */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

/* ************************************************************************** */
/* ************************************************************************** */

void	sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/* ************************************************************************** */

void	sort_int_tab(int *tab, int size)
{
	int				temp;
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j += 1;
		}
		i += 1;
	}
}

/* ************************************************************************** */
/* ************************************************************************** */