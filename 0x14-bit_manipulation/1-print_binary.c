#include "main.h"

void print_binary(unsigned long int n)
{

unsigned int displayMask = 1 << 31;


 for (unsigned int c = 1; c <= 32; ++c) { 
putchar(value & displayMask ? '1' : '0');
value <<= 1;

 }


 }

