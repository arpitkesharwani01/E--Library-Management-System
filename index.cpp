// C++ code addition

#include <iostream>
#include <string>

using namespace std;

// Create Structure of Library
struct library {
	string book_name;
	string author;
	int pages;
	float price;
};

// Driver Code
int main()
{
	// Create an array of structs
	library lib[100];

	string ar_nm, bk_nm;

	// Keep the track of the number of
	// of books available in the library
	int i, input, count;

	i = input = count = 0;

	// Iterate the loop
	while (input != 5) {

		cout << "\n\n********######"
			<< "WELCOME TO E-LIBRARY "
			<< "#####********\n";
		cout << "\n\n1. Add book information\n2. Display book information\n";
		cout << "3. List all books of given author\n";
		cout << "4. List the count of books in the library\n";
		cout << "5. Exit\n";

		// Enter the book details
		cout << "\n\nEnter one of the above: ";
		cin >> input;

		// Process the input
		switch (input) {

		// Add book
		case 1:

			cout << "Enter book name = ";
			cin >> lib[i].book_name;

			cout << "Enter author name = ";
			cin >> lib[i].author;

			cout << "Enter pages = ";
			cin >> lib[i].pages;

			cout << "Enter price = ";
			cin >> lib[i].price;
			count++;

			break;

		// Print book information
		case 2:
			cout << "you have entered the following information\n";
			for (i = 0; i < count; i++) {

				cout << "book name = " << lib[i].book_name;
				cout << "\t author name = " << lib[i].author;
				cout << "\t pages = " << lib[i].pages;
				cout << "\t price = " << lib[i].price << endl;
			}
			break;

		// Take the author name as input
		case 3:
			cout << "Enter author name : ";
			cin >> ar_nm;
			for (i = 0; i < count; i++) {

				if (ar_nm == lib[i].author)
					cout << lib[i].book_name << " " << lib[i].author << " " << lib[i].pages << " " << lib[i].price << endl;
			}
			break;

		// Print total count
		case 4:
			cout << "\n No of books in library : " << count << endl;
			break;
		case 5:
			exit(0);
		}
	}
	return 0;
}

// @ Arpit Kesharwani.
