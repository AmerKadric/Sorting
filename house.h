#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

class house {
private:
	float sqrft;
	int rooms;
	int bathrooms;
public:
	void setsqrft(int d);
	float getsqrft() const;
	void setrooms(int m);
	int getrooms() const;
	string typeofbath() const;
	void setbathrooms(int y);
	int getbathrooms() const;
	house(float sq = 500, int r = 1, int b = 1);
	house(int sq);
	~house();
	friend house operator+(const house& obj, const house& obj1);
	bool operator==(const house& ex) const;
	friend ostream& operator<<(ostream& os, const house& houses);
	friend bool operator>(const house& b0, const house& b1);
	friend bool operator<(const house& b0, const house& b1);
};
