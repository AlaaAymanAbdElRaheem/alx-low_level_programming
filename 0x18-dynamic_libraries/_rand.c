#include "main3.h"

int winnig_num[] = {9, 8, 10, 24, 75,9};
int i = 0;

int _rand()
{
	int num;

	num = winnig_num[i];
	i += 1;

	return(num);
}
