#include <stdio.h>

int main()
{
	int a = 1234;
    const int ca = 123;
    int* p = &ca;
    int* const pc = &a;
    const int* cp = &a;

    *p = 321;
    cp = &ca;

//    *cp = 4;

    printf("%d\n", *p);
    printf("%d\n", *cp);
    printf("%d\n", *p);
}
