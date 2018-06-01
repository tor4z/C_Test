#include <assert.h>
#include <stdio.h>


void char_main()
{
	int arr[128];
	int n = 0;
	char c = 'a';

	while (n < 128) {
		arr[n] = n;
		++n;
	}

	while (c <= 'z') {
		assert(arr[c] == c);
		++c;
	}
}