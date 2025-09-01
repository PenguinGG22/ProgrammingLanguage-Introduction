// 03-1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d %d", n * m, n / m);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d = %d", num1, num2, num3, num1 * num2 + num3);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n*n);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d %d", num1 / num2, num1 % num2);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d", (num1-num2)*(num2+num3)*(num3%num1));

	return 0;
}