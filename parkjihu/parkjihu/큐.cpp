#include <stdio.h>	
#include <string>
struct que
{
private :
	int number[10001] = { 0, }; 
	int front = 1, rear = 1,count = 0; 
public:
	void push(void)
	{
		int a; 
		scanf("%d", &a); 
		number[rear] = a;
		rear++; 
	}
	int pop(void)
	{
		if (front == rear)
			return -1;
		else {
			int temp;

			temp = number[front];
			number[front] = 0;
			front++;

			return temp;
		}
		
	}
	int size(void)
	{
		return rear - front; 
	}
	int empty(void)
	{
		if (number[front] == 0)
			return 1;
		else
			return 0; 
	}
	int fronts(void)
	{
		if (number[front] == 0)
			return -1;
		else
			return number[front]; 
	}
	int back(void)
	{
		if (number[rear - 1] == 0)
			return -1;
		else
			return number[rear - 1]; 
	}

	
}ques;

int main(void)
{
	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);
	int i = 0,n; 
	char order[40];

	scanf("%d", &n); 

	for(i = 1; i <= n; i++)
	{
		scanf("%s", order); 
		if (!strcmp(order, "push"))
			ques.push(); 
		if (!strcmp(order, "pop"))
			printf("%d\n",ques.pop());
		if (!strcmp(order, "size"))
			printf("%d\n", ques.size()); 
		if (!strcmp(order, "empty"))
			printf("%d\n", ques.empty()); 
		if (!strcmp(order, "front"))
			printf("%d\n", ques.fronts());
		if (!strcmp(order, "back"))
			printf("%d\n", ques.back()); 
			

	}
	





	return 0; 
}