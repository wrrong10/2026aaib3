//week04-2a.cpp
// C
#include <stdio.h>

int main()
{
	int a[10];
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for (int i=0; i<10; i++){
		for (int j=i+1; j<10; j++){
			if (a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}
}

///

//week04-2b
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a(10);
	for (int i=0; i<10; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	for (int i=9;i>=0; i--) {
		cout << a[i] << ' ';
	}
}
