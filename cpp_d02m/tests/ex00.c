/*
** EPITECH PROJECT, 2018
** test 1
** File description:
** 1
*/

#include <stdio.h>

void add_mul_4param(int first, int second, int *sum, int *product);
void add_mul_2param(int *first, int *second);

static  void test_4_params(void)
{
	int  first = 5;
	int  second = 6;
	int sum;
	int  product;
	add_mul_4param(first , second , &sum , &product);
	printf("%d + %d = %d\n", first , second , sum);
	printf("%d * %d = %d\n", first , second , product);
}
static  void test_2_params(void)
{
	int add_res = 5;
	int mul_res = 6;
	int first = 5;
	int second = 6;
	add_mul_2param (&add_res , &mul_res);
	printf("%d + %d = %d\n", first , second , add_res);
	printf("%d * %d = %d\n", first , second , mul_res);
}
int main(void)
{
	test_4_params();
	test_2_params();
	return  (0);
}
