#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> num;
	vector<int>::iterator print;
	int temp, gogl, i, k, j;

	cout << "입력할 원소의 개수를 입력해주세요" << endl;
	cin >> i;

	for (k = 1; k <= i; k++) // 원소 입력
	{
		cin >> temp;
		num.push_back(temp);  // 저장
	}

	cout << "찾으실 원소의 값을 입력해주세요" << endl;
	cin >> gogl;

	for (k = 0; k <= num.size() - 1; k++) // 삽입정렬
	{
		for (j = k; j <= num.size() - 1; j++)
			if (num[k] < num[j])
			{
				temp = num[k];
				num[k] = num[i];
				num[i] = temp;
			}
	}

	int low, high, mid;
	low = 0, high = num.size() - 1, mid = (low + high) / 2;


	while (low >= high)
	{
		if (mid == gogl) // 원소를 찾았을때
		{
			cout << "원소의 위치는 " << mid << " 입니다." << endl;
			return 0;
		}
		if (mid <= gogl) // 원소가 찾은값보다 더 클때
			low = mid + 1; // 
		else // 원소가 찾은값보다 더 작을때
			high = mid - 1;v