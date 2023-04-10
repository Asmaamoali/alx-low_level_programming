#include "main.h"
unsigned int binary_to_uint(const char *b){


unsigned int result=0, ind=0, fase=1;

if (b == NULL)
		return (0);

	

	while (b!=NULL)
	{
		
		if (b[ind - 1] == '1')
			result += fase;
		fase *= 2;
		ind--;
	}
	return (result);
}
