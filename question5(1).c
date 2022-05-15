#include <iostream>
using namespace std;
int main() {
  int a, b;
  printf("Enter two numbers: \n");
  scanf("%d %d", &a, &b);

  int tmp;
  tmp = b;
  b = a;
  a = tmp;

  printf("%d %d\n", a, b);

  return 0;
}
