#include <stdio.h>
#include <string.h>

// 예제코드에선 변수 이름을 a와 c로 선언한 부분이 'c언어'와 헷갈릴 수 있어 본 문서에서는 각각 arr, ptr로 변경, 그 외 내용은 같다.
int main()
{
	char a[] = "where is jontonde";
	char *c = "where is jontonde";
//	c = a;

	a[0] = 'z';
	printf("a의 길이 : %ld | a의 크기 : %ld | a의 주소값 : %p | a의 값 : %s\n", strlen(a), sizeof(a), &a, a);
	printf("------------------------------------------------\n");
	printf("a[0]의 주소값 : %p | a[0]의 값 : %c\n", &a[0],a[0]);
	printf("a[1]의 주소값 : %p | a[1]의 값 : %c\n", &a[1],a[1]);
	printf("a[2]의 주소값 : %p | a[2]의 값 : %c\n", &a[2],a[2]);
	printf("a[3]의 주소값 : %p | a[3]의 값 : %c\n", &a[3],a[3]);
	printf("a[4]의 주소값 : %p | a[4]의 값 : %c\n", &a[4],a[4]);
	printf("a[5]의 주소값 : %p | a[5]의 값 : %c\n", &a[5],a[5]);
	printf("a[6]의 주소값 : %p | a[6]의 값 : %c\n", &a[6],a[6]);
	printf("a[7]의 주소값 : %p | a[7]의 값 : %c\n", &a[7],a[7]);

	printf("\n");

//	*c = 'x';
	printf("c의 길이 : %ld | c의 크기 : %ld | c의 주소값 : %p | c의 값 : %s\n", strlen(c),sizeof(c), &c, c);
	printf("------------------------------------------------\n");
	printf("c[0]의 주소값 : %p | c[0]의 값 : %c\n", &c[0],c[0]);
	printf("c[1]의 주소값 : %p | c[1]의 값 : %c\n", &c[1],c[1]);
	printf("c[2]의 주소값 : %p | c[2]의 값 : %c\n", &c[2],c[2]);
	printf("c[3]의 주소값 : %p | c[3]의 값 : %c\n", &c[3],c[3]);
	printf("c[4]의 주소값 : %p | c[4]의 값 : %c\n", &c[4],c[4]);
	printf("c[5]의 주소값 : %p | c[5]의 값 : %c\n", &c[5],c[5]);
	printf("c[6]의 주소값 : %p | c[6]의 값 : %c\n", &c[6],c[6]);
	printf("c[7]의 주소값 : %p | c[7]의 값 : %c\n", &c[7],c[7]);

	return (0);
}
