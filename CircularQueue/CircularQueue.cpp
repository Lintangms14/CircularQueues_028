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
};