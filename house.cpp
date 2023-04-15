#include "househeader.h"

float house::getsqrft() const {
	return sqrft;
}

int house::getrooms() const {
	return rooms;
}
int house::getbathrooms() const {
	return bathrooms;
}

void house::setsqrft(int sq) {
	if (sq >= 500 && sq <= 3000) {
		sqrft = sq;
	}
}

void house::setrooms(int r) {
	if (r >= 1 && r <= 12) {
		rooms = r;
	}
}
void house::setbathrooms(int b) {
	if (b >= 1 && b <= 8) {
		bathrooms = b;
	}
}
string house::typeofbath() const {

	switch (bathrooms) {
	case 1:
		return "You will have 1 full bathroom";
		break;
	case 2:
		return "You will have 1 full bathroom and 1 half bathroom";
		break;

	case 3:
		return "You will have 2 full bathrooms and 1 half bathrooms";
		break;
	case 4:
		return "You will have 3 full bathrooms and 1 half bathrooms";
		break;
	case 5:
		return "You will have 3 full bathrooms and 2 half bathrooms";
		break;
	case 6:
		return "You will have 4 full bathrooms and 2 half bathrooms";
		break;
	case 7:
		return "You will have 4 full bathrooms and 3 half bathrooms";
		break;

	}
}

house::house(float sq, int r, int b) {
	if (sq < 500 || sq > 3000) sq = 500;
	if (r > 12 || r < 1) r = 1;
	if (b > 7 || b < 1) b = 1;
	setsqrft(sq);
	setrooms(r);
	setbathrooms(b);
}

house::house(int sq) {
	setsqrft(sq);
	setrooms(5);
	setbathrooms(7);
}


house operator+(const house& obj, const house& obj1) {
	house num;
	num = obj1.getsqrft() + obj.getsqrft();

	return num;
}
bool house::operator==(const house& ex) const {
	return sqrft == ex.sqrft&& rooms == ex.rooms && bathrooms == ex.bathrooms;
}
 ostream& operator<<(ostream& os, const house& houses) {
	 os << "(" << houses.sqrft << "," << houses.rooms << "," << houses.bathrooms << ")";
	return os;
}
 bool operator>(const house& b0, const house& b1) {
	 return b0.getsqrft() > b1.getsqrft();
 }
 bool operator<(const house& b0, const house& b1) {
	 return b0.getsqrft() < b1.getsqrft();
 }
 house:: ~house() {
	 cout << "An object of house has been removed from memory\n";
 }
