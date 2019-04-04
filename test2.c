/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vice-wra <vice-wra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:53:54 by vice-wra          #+#    #+#             */
/*   Updated: 2019/04/04 16:42:09 by vice-wra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include "other/libft/libft.h"
#include <math.h>


int *glue_to_arr(int *arr1, int *arr2, int len1, int len2)
{
    int i;
    int j;
    int *new_arr;

    new_arr = (int*)malloc(sizeof(int) * (len1 + len2));
    i = 0;
    j = 0;
    while (i < len1)
    {
        new_arr[i] = arr1[i];
        i++;
    }
    while (j < len2)
    {
        new_arr[i] = arr2[j];
        i++;
        j++;
    }
    return (new_arr);
}

int *glue_arrs(int *arr1, int *arr2, int len1, int len2)
{
	int *arr3;
	int i;
	int len;

	len = 63;
	i = 0;
	arr3 = (int*)ft_memalloc(sizeof(int) * len);

	while (len2 >= 0 && len > 0)
	{
		arr3[len] = arr2[len2];
		len2--;
		len--;
	}
	while (len1 >= 0 && len > 0)
	{
		arr3[len] = arr1[len1];
		len1--;
		len--;
	}
	while (len >= 0)
		arr3[len--] = 0;
	return (arr3);
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
		if ((long long)n % 2 == 0)
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
	int len;

	len = 11;
	i = 0;
	while (i < len - size)
		(*arr)[i++] = 0;
	while (i < len)
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
	double rem;
	int len;
	int *arr2;

	len = count_bin_digits(n);
	i = len;
	arr = (int*)malloc(sizeof(int) * len);
	rem = n - (long long)n;
	while (len-- && n > 0)
	{
		if ((int)n % 2 == 0)
			arr[len] = 0;
		else
			arr[len] = 1;
		n = n / 2;
	}
	arr2 = get_the_rem(rem, 11);
	// i = 0;
	// while (i < 11)
	// {
	// 	printf("%d", arr2[i++]);
	// }
	arr = glue_arrs(arr, arr2, i - 1, 10);
	get_the_rev_rem(&arr2, 11);
	arr2 = add_one(arr2, 11);
	arr = glue_to_arr(arr2, arr, 11, 52);
	return (arr);

}

int main()
{
	double n;
	int *arr;
	n = 5;
	int i = 0;
	int len = 63; 
	arr = float_to_bin(64.5);
	// arr = get_the_rem(64.5, 6);
	// get_the_rev_rem(&arr, 8);
	// arr = add_one(arr, 8);

	while (i < len)
	{
		printf("%d", arr[i++]);
	}
	// printf("\n%llf", 9999999999999999999);
}