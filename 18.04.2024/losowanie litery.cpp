#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	string sekretneslowo("tajemnica");

	srand(time(0));

	int pozycja = rand() % sekretneslowo.size();

	cout << "wylosowaba litera: " << sekretneslowo[pozycja];

	return 0;
}