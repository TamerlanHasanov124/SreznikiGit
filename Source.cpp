#include<iostream>
#include<forward_list> // odnosvazanniy
#include<list> // dvuxsvazanniy spisok
using namespace std;

class User {
private:
	string name;
	string surname;
	int age;
public:
	User(string name, string surname, int age) : name(name), surname(surname), age(age) {}

	string GetName() {
		return name;
	}

	string GetSurname() {
		return surname;
	}

	int GetAge()
	{
		return age;
	}
};

void AddStudent(forward_list<User>& srezniki, string name, string surname, int age) {
	srezniki.push_front(User(name,surname,age));
}

void PrintList(forward_list<User>& srezniki) {
	for (auto item : srezniki) {
		cout << item.GetName() << " " << item.GetSurname() << endl;
		
	}
}


int main() {
	forward_list<User> srezniki;

	AddStudent(srezniki,"Tamerlan","Hasanov",28);
	AddStudent(srezniki, "Fazil", "Mammadov", 22);
	AddStudent(srezniki, "Ilkin", "Agayev", 28);

	PrintList(srezniki);


	return 0;
}