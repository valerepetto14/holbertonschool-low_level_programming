#include<stdio.h>

/**
*main-asd
*Return:asd
*
*
**/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
*writeyourlineofcodehere...
*Remember:
*-youarenotallowedtousea
*-youarenotallowedtomodifyp
*-onlyonestatement
*-youarenotallowedtocodeanythingelsethanthislineofcode
*/
	*(p + 5) = 98;
/*...sothatthisprints98\n*/
	printf("a[2]=%d\n", a[2]);
	return (0);
}
