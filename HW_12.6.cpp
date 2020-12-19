

#include <iostream>
using namespace std;
int main()
{
	float deposit;
	int month;	
	float money;
	
	cout << "input sum of money" << endl;
	cin >> money;
	cout << "input sum of month" << endl;
	cin >> month;
	deposit = money;
	for (int i = 1; i <= month; i++) {
		cout << "month " << i << endl;
		float percent = 0.02 * deposit;
		deposit = deposit + percent;
	}
	cout << "deposit: "<< deposit << endl;
	cout << "ern: " << deposit- money << endl;

	
}


