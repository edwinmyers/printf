#include "stdio.h"
#include "bignum.h"

int main(void)
{
    char rem;
    t_bignum n3;
	double b = 1;
	double a = b / 65536;
	int i;
	int j;
	char c;
	t_bignum tmp;
	t_bignum sum;

	sum = big_num_create_by_str('+', "1", "");
	n3 = big_num_create_by_str('+', "1", "0000001001011111110101001111110000011010001111101001");
	i = 0;
	while (i++ < 139)
		n3 = bin_mult(&n3);
	i = 0;
	while (i < n3.int_part.size)
	{
		j = 0;
		t_bignum a1;
		c = n3.int_part.data[i];
		a1 = big_num_create_by_str('+', &c, "0");
		while (j++ < n3.int_part.size - i - 1)
			a1 = dec_mult(&a1);
		sum = dec_sum(&sum, &a1);
		++i;
	}
	str_print(&sum.int_part);
	i = 0;
	sum = big_num_create_by_str('+', "0", "0");
	while (i < n3.frac_part.size)
	{
		j = 0;
		t_bignum a1;
		c = n3.frac_part.data[i];
		a1 = big_num_create_by_str('+', &c, "0");
		while (j++ <= i)
			a1 = dec_div(&a1);
		sum = dec_sum(&sum, &a1);
		++i;
	}
	str_print(&sum.int_part);
    return (0);
}
