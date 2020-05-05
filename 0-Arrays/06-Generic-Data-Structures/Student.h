#pragma once
#include<string>
#include<iostream>
class Student {
private:
	std::string name;
	int score;
public:
	Student(std::string name="", int score=0)
	{
		this->name = name;
		this->score = score;
	}
	friend std::ostream& operator<<(std::ostream& out, Student& student) {
		out << "name : " << student.name << ", " << " score : " << student.score;
		return out;
	}
};