#include <iostream>
using namespace std;

int main() {

	int i;
	while(1){
		cin >> i;
		if (i>99)
			continue;
		if (i==42)
			break;
		cout << i;
	}

	return 0;
}
