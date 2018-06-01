#include <stdio.h>
#include <assert.h>
#include "main.h"


enum reg
{
	R0 = 0x01,
	R1 = 0x02,
	R2 = 0x03,
	R3 = 0x04,
};


void enum_main()
{
	enum reg r = R0;
	char *str = "hello world";

	printf("%d\n", r);
	assert(str[r] == 'e');
}