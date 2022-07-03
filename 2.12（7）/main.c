#include <stdio.h>
int smile(void);
int main() {
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	return 0;
}
int smile(void) {
	printf("Smile!");
	return 0;
}