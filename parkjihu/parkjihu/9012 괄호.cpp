#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std; 



void input(void)
{
	stack<char> s;

	int low = 0; 
	char text[51] = { 0, }; 

	cin >> text; 
	
	for (int k = 0; text[k] != 0; k++)
	{
		if (text[k] == '(')
		{
			//cout << 1 << endl; 
			s.push(1);
		}
			
		else {
			if (s.size() == 0) {
				s.push(1);
				break;
			}
			else {
				//cout << "pop" << endl; 
				s.pop();
			}
				
		}
			

				

	}
	//cout << "S size" << s.size();
	//cout << endl << endl;

	if (s.size() == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

int main(void)
{
	int number;

	//freopen("input.txt", "r", stdin); 
	//freopen("output.txt", "w", stdout);


	cin >> number; 

	for (int i = 1; i <= number; i++)
	{
		input();  // °ýÈ£ ¹Þ°í 
		
		
		

	}



	return 0;
}

