#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
public:
	Animal(int age, bool in_campus, std::string diet, std::string name);

	int getAge();
	void setAge(int age);
	void incrAge();

	bool isAlive();
	void died();

	bool isSick();
	void setSick();

	bool isInCampus();
	void setInCampus();

	std::string getDiet();
	void setDiet(std::string diet);

	std::string getName();
	void setName(std::string name);
private:
	int age_;
	bool alive_;
	bool sick_;
	bool inCampus_;
	std::string diet_;
	std::string name_;
};


class Monkey : public Animal {
public:
	
private:

};


class Champanzi : public Monkey {
public:
private:
};


class Camel : public Animal {
public:
private:
};


class Cat : public Animal {

};


class Lion : public Cat {

};

#endif