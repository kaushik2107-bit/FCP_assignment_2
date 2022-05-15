#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ((a+b) > c && (b+c) > a && (c+a) > b) {
		if (a==b && b==c) {
			printf("Equilateral Triangle\n");
		} else if ((a==b) || (b==c) || (a==c)) {
			printf("Isosceles Triangle\n");
		} else {
			printf("Scalene Triangle\n");
		}
	} else {
		printf("The given sides do not form a triangle.\n");
	}
	return 0;
}
  
