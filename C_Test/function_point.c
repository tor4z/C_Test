#include <stdio.h>
#include "main.h"


typedef int(*func)(int);


static int f1(int arg)
{
	return arg;
}

static int f2(int arg)
{
	return arg + 1;
}

static int f3(int arg)
{
	return arg + 2;
}


int function_main()
{
	func functions[3];
	int i;
	int result;

	functions[0] = f1;
	functions[1] = f2;
	functions[2] = f3;

	for (i = 0; i < 3; ++i) {
		result = functions[i](i);
		printf("Resutl: %d\n", result);
	}
}