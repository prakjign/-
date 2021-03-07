#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std; 

저거를 함수화 화면 될듯 

int main(void)
{
	stack<char> stack; 
	int number;
	char text[51] = { 0, };

	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);


	cin >> number; 

	for (int i = 1; i <= number; i++)
	{
		cin >> text;  // 괄호 받고 
		
		
		for (int k = 0; text[k] == '(' || text[k] == ')'; k++)
		{
			if (text[k] == '(')
				stack.push(1);
			else
				if (stack.size() == 0) {
					stack.push(1);
					break;
				}
				else
					stack.pop(); 
				
		}

		if (stack.size() == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}



	return 0;
}

