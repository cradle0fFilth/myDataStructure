/*
简单的数组以及数组的输出、数组中值的修改
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
	}

	int score[3] {100, 99, 66};
	int len1 = sizeof(score) / sizeof(score[0]);
	for (int i = 0; i < 3; i++)
		cout << score[i] << " " ;
	cout << endl;

	score[0] = 98;
	for (int i = 0; i < len1; i++)
		cout << score[i] << " ";
}