#include <stdio.h>
int n, a, count;

int search1(int *num, int start, int end) {
	int middle;
	if (start <= end) {
		count++;
		middle = (start + end) / 2;
		if (a == num[middle]) return count;
		else if (a < num[middle]) return search1(num, start, middle - 1);
		else if (a > num[middle]) return search1(num, middle + 1, end);
	}
	return -1;
}

int search2(int *num, int start, int end) {
	int middle;
	if (start <= end) {
		count++;
		middle = (start + end) / 2;
		if (a == num[middle]) return count;
		else if (a > num[middle]) return search2(num, start, middle - 1);
		else if (a < num[middle]) return search2(num, middle + 1, end);
	}
	return -1;
}

int sorttest1(int *num) {
	for (int i = 0; i < n - 1; i++) {
		if (num[i] > num[i + 1])
			return 0;
	}
	return 1;
}

int sorttest2(int *num) {
	for (int i = 0; i < n - 1; i++) {
		if (num[i] < num[i + 1])
			return 0;
	}
	return 1;
}

int main() {
	int test, sort1, sort2;
	scanf ("%d", &n);
	int num[n];
	for (int i = 0; i < n; i++) {
		scanf ("%d", &num[i]);
	}
	
	scanf ("%d", &a);
	sort1 = sorttest1(num);
	sort2 = sorttest2(num);
	if ((sort1 == 0) && (sort2 == 0)) {
		printf("불가능");
		return 0;
	}
	
	if (sort1 == 1) test = search1(num, 0, n - 1);
	else if (sort2 == 1) test = search2(num, 0, n - 1);
	if (test == -1) { 
		printf("실패");
		return 0;
	}
	else printf("%d", test);
	return 0;
}