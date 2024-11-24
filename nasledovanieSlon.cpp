// nasledovanieSlon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	string spacies;
	double weight;
	string continent;
public:
	Animal() = default;
	Animal(const char* _name, const char* king, const char* cont, double _wei) 
	{
		name = _name;
		spacies = king;
		continent = cont;
		weight = _wei;
	}
	void Input() 
	{
		cout << "input name: ";
		cin >> name;

		cout << "input kingdown: ";
		cin >> spacies;

		cout << "input weight: ";
		cin >> weight;

		cout << "input continent: ";
		cin >> continent;
	}
	void Print() 
	{
		cout << "name: " << name << endl << "spacies: " << spacies << endl << "weight: " << weight << endl << "continent: " << continent << endl;
	}
	void Eat() 
	{
		cout << "-";
	}
	void Sound() 
	{
		cout << "-";
	}
};

class Elephant :public Animal 
{
public:
	Elephant() {}
	Elephant(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "YyYyYoOoOoO" << endl;
	}
	void Eat() 
	{
		cout << "elephants YYYyYYyYyYy" << endl;
	}
};

class Cat :public Animal 
{
public:
	Cat() {}
	Cat(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "MEOW" << endl;
	}
	void Eat() 
	{
		cout << "cats MURRR" << endl;
	}
};

class Dog :public Animal 
{
public:
	Dog() {}
	Dog(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "RAF RAF RAF" << endl;
	}
	void Eat() {
		cout << "dogs RAFRAFRAF" << endl;
	}
};

class Parrot :public Animal 
{
public:
	Parrot() {}
	Parrot(const char* _name, const char* king, const char* cont, double _wei) :Animal(_name, king, cont, _wei) {}
	void Sound() 
	{
		cout << "CHIKI CHIKI CHIKI" << endl;
	}
	void Eat() 
	{
		cout << "parrots CHIKIIII" << endl;
	}
};

int main()
{
	setlocale(0, "ru");
	Elephant obj1("indian elephant", "elephant", "asia", 6500);
	obj1.Print();
	obj1.Eat();
	obj1.Sound();
	cout << endl << endl;

	Cat obj2("british cat", "cats", "everywhere", 5);
	obj2.Print();
	obj2.Eat();
	obj2.Sound();
	cout << endl << endl;

	Dog obj3;
	obj3.Input();
	obj3.Print();
	obj3.Eat();
	obj3.Sound();
}