#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int lblosowa(0);
	srand(time(0));
	lblosowa = rand() % 5;

	return 0;
}