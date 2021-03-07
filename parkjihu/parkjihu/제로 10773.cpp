#include<iostream>
#include<stack>
using namespace std; 

int main(void)
{
	stack<int> stack;
	int number,value,total = 0; 

	cin >> number; 

	for (int i = 1; i <= number; i++)
	{
		cin >> value;
		

		if (value == 0) {
			total = total - stack.top();
			stack.pop();
		}
		else {
			stack.push(value);
			total += value; 
		}
	} 

	cout << total; 

	

	system("PAUSE"); 
}