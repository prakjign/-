#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> num;
	vector<int>::iterator print;
	int temp, gogl, i, k, j;

	cout << "�Է��� ������ ������ �Է����ּ���" << endl;
	cin >> i;

	for (k = 1; k <= i; k++) // ���� �Է�
	{
		cin >> temp;
		num.push_back(temp);  // ����
	}

	cout << "ã���� ������ ���� �Է����ּ���" << endl;
	cin >> gogl;

	for (k = 0; k <= num.size() - 1; k++) // ��������
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
		if (mid == gogl) // ���Ҹ� ã������
		{
			cout << "������ ��ġ�� " << mid << " �Դϴ�." << endl;
			return 0;
		}
		if (mid <= gogl) // ���Ұ� ã�������� �� Ŭ��
			low = mid + 1; // 
		else // ���Ұ� ã�������� �� ������
			high = mid - 1;v