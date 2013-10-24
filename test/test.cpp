#include <stdio.h>
#include "myun2/bitmagick.hpp"

using namespace myun2::bitmagick;

int main()
{
	printf("%08x\n", zero<int>());
	printf("%08x\n", reverse<unsigned char>(0));
	printf("%08x\n", reverse<unsigned short>(0));
	printf("%08x\n", reverse<unsigned int>(0));
	printf("%08x\n", reverse<unsigned long>(0));
	return 0;
}
