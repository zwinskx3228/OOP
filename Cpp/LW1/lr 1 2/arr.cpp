#include "arr.h"
#include <iostream>
using namespace std;
myarr::myarr(int size)
{
	n = size;
	arr = new int[n];
}

myarr::~myarr()
{
	delete[] arr;
}

void myarr::vvid()
{
	cout << "����i�� " << n << " �������i� ������:\n";
	for (int i = 0; i < n; i++) {
		cout << "������� [" << i << "]: ";
		cin >> arr[i];
	}
}

void myarr::vuvid()
{
	cout << "�����: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void myarr::sort()
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int myarr::size()
{
	return n;
}

void myarr::scalar(int k)
{
	for (int i = 0; i < n; i++) {
		arr[i] *= k;
	}
}
