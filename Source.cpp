#include <iostream>
#include <string>
//#include <windows.h>
//#include <cstdlib>

using namespace std;

int main() {

	system("chcp 1251 > nul");

	int n, a, b, ozh;

	cout << "Введите количество в очереди - " << endl;
	cin >> n;
	cout << "Сколько минимум человек перед вами - "<< endl;
	cin >> a;
	cout << "Сколько максимум человек после вас - "<< endl;
	cin >> b;
	if (b > 100) {



	}

	b = n - b;

	int* och = new int[n];

	for (int i = 0; i < n+1; i++) {

		och[i] = i;

	}

	cout << "Возможные места в очереди: ";

	for (int i = 0; i < n+1; i++) {

		
		if (i > a && i<=b) {
			cout << och[i] << " ";
		}
		
	}


	return 0;
}