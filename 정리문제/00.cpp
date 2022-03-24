#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstring>

using namespace std;
/*
char* name;
int age;

prinHuman()
*/

class Human
{
private:
	char* name;
	int age;

public:
	Human(const char* n, int a) :age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	Human(const Human& cp) :age(cp.age)
	{
		name = new char[strlen(cp.name) + 1];
		strcpy(name, cp.name);
	}


	//Human* operator=(const Human ref)
	//{
	//	name = ref.name;
	//	age = ref.age;
	//	return this;
	//}

	void printHuman()
	{
		cout << "name : " << name << endl;
		cout << "Age : " << age << endl;
	}
	~Human()
	{
		cout << "삭제" << endl;

		delete[]name;
		//cout << "삭제" << endl;
	}
};

int main()
{
	Human man("이순신", 50);
	man.printHuman();

	Human xman =man;
	xman.printHuman();
	
}
