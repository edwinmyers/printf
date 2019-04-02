/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:53:54 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/02 18:29:57 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include "other/libft/libft.h"
#include <math.h>


int *glue_arrs(int *arr1, int *arr2)
{
	int *arr3;

	arr3 = (int*)ft_memalloc(52);
}

int count_bin_digits(long long n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 2;
		i++;
	}
	return (i);
}
int* get_the_rem(double n, int precision)
{
	int *arr;
	int i;
	int nb;

	i = 0;
	arr = (int*)ft_memalloc(sizeof(int) * precision);
	while (i < precision)
	{
		n = n * 2;
		if ((int)n % 2 == 0)
			arr[i] = 0;
		else
			arr[i] = 1;
		i++;
	}
	return (arr);
}

void get_the_rev_rem(int **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if ((*arr)[i] == 0)
			(*arr)[i] = 1;
		else
			(*arr)[i] = 0;
		i++;
	}
}

int *add_one(int *arr, int size)
{
	int i;
	int *arr2;

	arr2 = (int*)ft_memalloc(sizeof(int) * 8);
	arr2[0] = 1;

	i = 0;
	while (size--)
	{
		if (arr[i] + arr2[i] == 2)
			arr[i] = 1;
		else if (arr[i] + arr2[i] == 1)
			arr[i] = 1;
		else
			arr[i] = 0;
		i++;
	}
	return (arr);
}

int *float_to_bin(double n)
{
	int i;
	int *arr;
	long long nb;
	double rem;

	i = 0;
	int len = count_bin_digits(n);
	arr = (int*)malloc(sizeof(int) * len);
	nb = n;
	rem = n - nb;
	while (len-- && nb > 0)
	{
		if (nb % 2 == 0)
			arr[len] = 0;
		else
			arr[len] = 1;
		nb = nb / 2;
	}
	return (arr);

}

//       000000101
int main()
{
	double n;
	int *arr;
	n = 5;
	int i = 0;
	int len = count_bin_digits(999999999999); 
	arr = float_to_bin(999999999999.5);
	// arr = get_the_rem(0.5);
	// get_the_rev_rem(&arr, 8);
	// arr = add_one(arr, 8);

	while (i < len)
	{
		printf("%d", arr[i++]);
	}
}