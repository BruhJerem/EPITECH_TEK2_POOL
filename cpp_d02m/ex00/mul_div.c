/*
** EPITECH PROJECT, 2018
** mul
** File description:
** mul
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
	*sum=first+second;
	*product=first*second;
}

void add_mul_2param(int *first, int *second)
{
	int *tmp_first=first;
	int *tmp_sec=second;
	int res1;
	int res2;

	res1=(*tmp_first)+(*tmp_sec);
	res2=(*tmp_first)*(*tmp_sec);
	*first=res1;
	*second=res2;
}
