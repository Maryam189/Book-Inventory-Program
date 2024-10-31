// BookInventory.cpp
#include "BookInventory.h"
#include <iostream>
using namespace std; 
// Constructor implementation
BookInventory::BookInventory(const std::string& title, const std::string& author, int year, int available)
    : bookTitle(title), bookAuthor(author), publicationYear(year), copiesAvailable(available), copiesCheckedOut(0) {}

// Accessor methods implementations
string BookInventory::GetTitle() const {
    return bookTitle;
}

string BookInventory::GetAuthor() const {
    return bookAuthor;
}

int BookInventory::GetPublicationYear() const {
    return publicationYear;
}

int BookInventory::GetCopiesAvailable() const {
    return copiesAvailable;
}

int BookInventory::GetCopiesCheckedOut() const {
    return copiesCheckedOut;
}

// Mutator methods implementations
void BookInventory::SetTitle(const std::string& title) {
    bookTitle = title;
}

void BookInventory::SetAuthor(const std::string& author) {
    bookAuthor = author;
}

void BookInventory::SetPublicationYear(int year) {
    if (year >= 0) 
    {
        publicationYear = year;
    } 
    else  //Error handling for negative value of year
    {
        cout << "Error: Cannot set a negative publication year." << endl;
    }
}

// Mutator method to set copies available
void BookInventory::SetCopiesAvailable(int copies) {
    if (copies >= 0) 
    {
        copiesAvailable = copies;
    } 
    else  //Error handling for negative value of copies
    {
        cout << "Error: Cannot set negative number of copies available." << endl;
    }
}

void BookInventory::SetCopiesCheckedOut(int copies) {
    if (copies >= 0) 
    {
        copiesCheckedOut = copies;
    } 
    else   //Error handling for negative value of copies
    {
        cout << "Error: Cannot set negative number of copies checked out." << endl;
    }
}

// Method to handle book borrowing
bool BookInventory::BorrowBook() 
{
    if (copiesAvailable > 0) 
    {
        copiesAvailable--;
        copiesCheckedOut++;
        return true;  // Successful borrow
    } 
    else 
    {
        cout << "No copies available to borrow." << endl;
        return false;  // Borrow failed
    }
}


// Main function to demonstrate the class functionality
int main() 
{
    // Create a book inventory instance
    BookInventory book("The Silent Patient", "Alex Michaelides", 2019, 3);

    // Display initial state
    cout << "Initial State:" << endl;
    cout << "Title: " << book.GetTitle() << endl;
    cout << "Author: " << book.GetAuthor() << endl;
    cout << "Publication Year: " << book.GetPublicationYear() << endl;
    cout << "Copies Available: " << book.GetCopiesAvailable() << endl;
    cout << "Copies Checked Out: " << book.GetCopiesCheckedOut() << endl;


    // Perform a borrow operation
    if(book.BorrowBook()) 
    {
        cout << "\n\t\tBorrow successful." << endl;
    } 
    else 
    {
        cout << "\n\t\tFailed to borrow a copy." << endl;
    }

    // Display state after borrowing
    cout << "\nAfter Borrowing:" << endl;
    cout << "Copies Available: " << book.GetCopiesAvailable() << endl;
    cout << "Copies Checked Out: " << book.GetCopiesCheckedOut() << endl;

    return 0;
}
