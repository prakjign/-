#include <stdio.h>
#include <string.h>
#define N 10010
int stack[N] = { 0, }; 
int front = -1;

void push(int x){
	front++;
	stack[front] = x;
}

int pop(void)
{
	if (front < 0)
		return -1; 
	else {
		int temp;
		temp = stack[front];
		stack[front] = 0; 
		front--;
		return temp;
	}
	
}

int size(void)
{
	if (front < 0)
		return 0; 
	else
		return front+1; 
}

int empty(void)
{
	if (front < 0)
		return 1;
	else
		return 0;
}
int top(void)
{
	int temp; 
	if (front < 0)
		return -1;
	else {
		temp = stack[front];
		return temp; 
	}
}

int main(void)
{
	int number,i,value;
	char order[20]; 

	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 

	scanf("%d", &number); 

	for (i = 0; i < number; i++)
	{
		scanf("%s", order);

		if (strcmp(order, "push") == 0) {
			scanf("%d", &value);
			push(value);
		}
		if (strcmp(order, "pop") == 0) {
			printf("%d\n", pop()); 
		}
		if (strcmp(order, "size") == 0) {
			printf("%d\n", size()); 
		}
		if (strcmp(order, "empty") == 0) {
			printf("%d\n", empty()); 
		}
		if (strcmp(order, "top") == 0) {
			printf("%d\n", top()); 
		}
			
		order[0] = 0;
	}


}