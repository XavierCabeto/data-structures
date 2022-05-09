#include <stdio.h>

#define MAX_SIZE 101

int a[MAX_SIZE];

int top = -1;

void push(int x) {
	if (top == MAX_SIZE - 1) {
		printf("Error: stack overflow\n");
		
		return;
	}
	
	a[++top] = x;
}

void pop() {
	if (top == -1) {
		printf("Error: No element to pop\n");
		
		return;
	}
	
	top--;
}

void print() {
	printf("Stack: ");
	
	int i;
	
	for (i = 0; i <= top; ++i) printf("%d ", a[i]);
	
	printf("\n");
}

int main() {
	push(2); 
	
	print();
	
	push(5); 
	
	print();
	
	push(10); 
	
	print();
	
	pop(); 
	
	print();
	
	push(12); 
	
	print();
	
	return 0;
}
