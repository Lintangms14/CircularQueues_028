#include <iostream>
using namespace std;

class queues {
	int FRONT, REAR, max = 5;
	int queues_array[5];

public:
	queues() {
		FRONT = -1;
		REAR = -1;
	}
	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		// Cek apakah antrian kosng
		if (REAR == max - 1) {
			REAR = 0;
		}
		
	}
};