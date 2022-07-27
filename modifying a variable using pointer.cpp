#include <stdio.h>

int main(void) {
	int num = 10;
	//declaring and initializing the pointer
	int *ptr = &num;

	printf("value of num: %d\n", num);
	printf("value of num: (using pointer): %d\n", *ptr);

	//updating the value
	*ptr = 20;

	printf("value of num: %d\n", num);
	printf("value of num (using pointer): %d\n", *ptr);

	return 0;
}
