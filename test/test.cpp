#include <stdio.h>
#include "myun2/bitmagick.hpp"

using namespace myun2::bitmagick;

int main()
{
	printf("%08x\n", zero<int>());
	printf("%08x\n", filled<unsigned char>());
	printf("%08x\n", filled<unsigned short>());
	printf("%08x\n", filled<unsigned int>());
	printf("%08x\n", filled<unsigned long>());
	return 0;
}
