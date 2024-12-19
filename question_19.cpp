// Implement Multiple Inheritance to Simulate a Library System
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    string isbn;

public:
    void setBookDetails(string t, string a, string i) {
        title = t;
        author = a;
        isbn = i;
    }

    void displayBookDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

class Borrower {
protected:
    string borrowerName;
    string borrowerID;
    string borrowedBook;

public:
    void setBorrowerDetails(string name, string id) {
        borrowerName = name;
        borrowerID = id;
        borrowedBook = "";
    }

    void borrowBook(string bookTitle) {
        borrowedBook = bookTitle;
    }

    void returnBook() {
        borrowedBook = "";
    }

    void displayBorrowerDetails() {
        cout << "Borrower Name: " << borrowerName << endl;
        cout << "Borrower ID: " << borrowerID << endl;
        if (borrowedBook != "") {
            cout << "Borrowed Book: " << borrowedBook << endl;
        } else {
            cout << "No book borrowed." << endl;
        }
    }
};

class Library : public Book, public Borrower {
public:
    void borrowBookAction() {
        cout << "Enter Borrower Name: ";
        cin >> borrowerName;
        cout << "Enter Borrower ID: ";
        cin >> borrowerID;

        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter ISBN: ";
        cin >> isbn;

        borrowBook(title);

        cout << "\nBook Borrowed Successfully!" << endl;
        displayBookDetails();
        displayBorrowerDetails();
    }

    void returnBookAction() {
        cout << "Enter Borrower Name: ";
        cin >> borrowerName;

        returnBook();

        cout << "\nBook Returned Successfully!" << endl;
        displayBorrowerDetails();
    }
};

int main() {
    Library library;
    int actionType;

    cout << "Enter action type (1 to Borrow, 2 to Return): ";
    cin >> actionType;

    if (actionType == 1) {
        library.borrowBookAction();
    } else if (actionType == 2) {
        library.returnBookAction();
    } else {
        cout << "Invalid action type!" << endl;
    }

    return 0;
}
