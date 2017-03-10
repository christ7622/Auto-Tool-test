#include <stdio.h>

#include "liba.h"
#include "libb.h"

int main(int argc, char const *argv[])
{
	liba();
	libb();
	printf("main()\n");

	return 0;
}