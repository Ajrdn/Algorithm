#include <stdio.h>
int n, a;

void search(int *num) {
	for (int i = 0; i < n; i++) {
		if (num[i] == a) {
			printf("%d", i + 1);
			return ;
		}
	}
	printf("½ÇÆÐ");
	return ;
}

int main() {
	scanf ("%d", &n);
	int num[n];
	for (int i = 0; i < n; i++) {
		scanf ("%d", &num[i]);
	}
	
	scanf ("%d", &a);
	search(num);
	return 0;
}