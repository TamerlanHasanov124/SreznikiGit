#include<iostream>
#include<forward_list>
using namespace std;

int main() {
	forward_list<string> srezniki;
	srezniki.push_front("Ramazan");
	srezniki.push_front("Ramin");
	srezniki.push_front("Rauf");

	for (auto i : srezniki)
	{
		cout << i << endl;
	}


	return 0;
}