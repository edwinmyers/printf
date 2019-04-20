


void rround(t_bignum *num, int precision)
{
	t_bignum *temp;
	if (sum.frac_part.data[precision] > '4')
		if (find_digit(&sum.frac_part, precision + 1))
			rround(&sum, precision);
	if (precision > 0)
	{
		num->int_part = cust_strsub(&sum.int_part, 0, sum.int_part.size);
		num->frac_part = cust_strsub(&sum.frac_part, 0, precision);
	}
	put_zeros(precision, &num->frac_part);

	temp = big_num_create_by_size('+', 1, precision);
	str_pushchar(&temp.int_part, '0');
	while (precision-- > 1)
		str_pushchar(&temp.frac_part, '0');
	str_pushchar(&temp.frac_part, '1');
	*num = dec_sum(num, &temp);
}

static void put_zeros(int precision, t_string *str)
{
	if (precision > str->size)
		while (precision != str->size)
			str_pushchar(str, '0');
}

int find_digit(t_string *s, int start)
{
	while (start < str_len(s))
		if (s->data[start++] > '0')
			return (1);
	return (0);
}