/*
 * Filename      : main.c
 * Author        : nuc0707#163#com
 * Create time   : 2015-06-01 11:12
 * Modified      : append in the following formate
 * year-month-day description
 */

#include <stdio.h>
#include "print1.h"

int main(void)
{
	printf("%s print\n", __FUNC__);
	printf("20150601 add\n");
	print1();
	return 0;
}
