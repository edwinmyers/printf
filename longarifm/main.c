#include "stdio.h"
#include "bignum.h"

int main(void)
{
    char rem;
    t_bignum n1;
    t_bignum n2;
    t_bignum n3;

    n1 = big_num_create('-', "111", "01001100110");
    n2 = big_num_create('-',    "1001010", "01010");

    n3 = bin_divide(&n1);
    printf("%c%s.%s\n", n3.sign, n3.int_part.data, n3.frac_part.data);
    return (0);
}