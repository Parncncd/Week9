#include<stdio.h>
int SUM(int* num) {
	int A[100];
	int sum = 0;
	for (int i = 1; i <= *num && *num != '0'; i++) {
		scanf_s("%d", &A[i]);
		if (A[i] % 2 != 0) {
			sum++;
		}
	}
	return sum;
}
int main() {
	int num, sum = 0;
	int* p;
	p = &num;
	scanf_s("%d", &num);
	if (num >= 0) {
		printf("%d", SUM(p));
	}
	return 0;
}