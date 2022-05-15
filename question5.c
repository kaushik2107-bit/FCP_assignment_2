#include <stdio.h>

int main() {
	int a;
	int b;
	printf("Enter two numbers:\n");
	scanf("%d%d", &a,&b);

	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d\n", a,b);
	return 0;
}
