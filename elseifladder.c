// C Program to Calculate Grade According to marks
// using the if else if ladder
#include <stdio.h>
int main()
{
	int marks = 91;
	if (marks <= 100 && marks >= 90)
		printf("A+ Grade");
	else if (marks < 90 && marks >= 80)
		printf("A Grade");
	else if (marks < 80 && marks >= 70)
		printf("B Grade");
	else if (marks < 70 && marks >= 60)
		printf("C Grade");
	else if (marks < 60 && marks >= 50)
		printf("D Grade");
	else
		printf("F Failed");
	return 0;
}
