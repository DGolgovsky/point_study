#include <iostream>

#DEFINE unsigned int uint
using namespace std;

int main(void)
{
	cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
	for (uint c = 1; c < 10; ++c) {
		cout << c << "| ";
		for (uint i = 1; i < 10; ++i)
			cout << i * c << '\t';
		cout << endl;
	}
	return 0;
}
