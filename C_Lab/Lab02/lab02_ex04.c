
#include <stdio.h>  

int main()
{
	int std_no, kor, python, math;
	double ave;

	std_no = 20240923;
	kor = 91;
	python = 100;
	math = 93;

	ave = (kor + python + math) / 3.0;

	printf("%-6s: %d \n", "Std_ID", std_no);
	printf("================\n");
	printf("%-6s: %8d \n", "Korean", kor);
	printf("%-6s: %8d \n", "Python", python);
	printf("%-6s: %8d \n", "Math", math);
	printf("================\n");
	printf("%-6s: %8.2lf \n", "Avg", ave);

	return 0;
}