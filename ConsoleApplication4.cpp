// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;
const int n = 13;

void print_array(int arr[]) {
	for (int i = 1; i < n; i++) {
		cout << arr[i - 1] << " ";
	}
	cout << arr[n - 1] << endl;
}

//zadanie 1
void progression(int arr[]) {
	int dif = 0;
	cin >> arr[0] >> dif;
	for (int i = 1; i < n; i++) {
		arr[i] = arr[i - 1] + dif;
	}
}

//zadanie 2
void permutation(int arr[]) {
	srand(time(NULL));
	for (int i = 0; i<n; i++) arr[i] = i+1;
	for (int k = n; k>1; k--) {
		int dv = rand() % k;
		int tmp = arr[k - 1];
		arr[k - 1] = arr[dv];
		arr[dv] = tmp;
	}
}

//zadanie 3
void evens(int arr[]) {
	srand(time(NULL));
	for (int i = 0; i<n; i++) arr[i] = 1000 + rand() % 1001;
	int ddd = 0;
	for (int i = 0; i<n; i++) if ((arr[i] / 10) % 2 == 0) ddd++;
	cout << ddd << endl;
}

int main()
{
	int arr[n];
	progression(arr); print_array(arr);
	permutation(arr); print_array(arr);
	evens(arr); print_array(arr);
	return 0;
}


