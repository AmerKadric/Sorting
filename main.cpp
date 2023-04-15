int main()
{

	int h1, h2, h3, h4, h5;
	cout << "Enter square feet in house 1 between 500 and 3000: ";
	cin >> h1;
	cout << "Enter square feet in house 2 between 500 and 3000: ";
	cin >> h2;
	cout << "Enter square feet in house 3 between 500 and 3000: ";
	cin >> h3;
	cout << "Enter square feet in house 4 between 500 and 3000: ";
	cin >> h4;
	cout << "Enter square feet in house 5 between 500 and 3000: ";
	cin >> h5;
	house housearray[5] = {house(h1),house(h2),house(h3),house(h4),house(h5)};
	cout << "This is before the insertion sort!!!!!!!!!!!" << endl;
	for (int i = 0; i < 5; i++) {
	cout << housearray[i] << endl;

	}
	insertionSort(housearray,5);
	cout << "This is after the insertion sort!!!!!!!!!!!" << endl;
	for (int i = 0; i < 5; i++) {
		cout << housearray[i] << endl;
	}
	
	

}
