#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std; 

���Ÿ� �Լ�ȭ ȭ�� �ɵ� 

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
		cin >> text;  // ��ȣ �ް� 
		
		
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

