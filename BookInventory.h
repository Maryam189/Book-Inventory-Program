// BookInventory.h
#ifndef BOOKINVENTORY_H
#define BOOKINVENTORY_H

#include <string>

class BookInventory {
private:
    std::string bookTitle;
    std::string bookAuthor;
    int publicationYear;
    int copiesAvailable;
    int copiesCheckedOut;

public:
    // Constructor
    BookInventory(const std::string& title, const std::string& author, int year, int available);

    // Accessor methods
    std::string GetTitle() const;
    std::string GetAuthor() const;
    int GetPublicationYear() const;
    int GetCopiesAvailable() const;
    int GetCopiesCheckedOut() const;

    // Mutator methods
    void SetTitle(const std::string& title);
    void SetAuthor(const std::string& author);
    void SetPublicationYear(int year);
    void SetCopiesAvailable(int copies);
    void SetCopiesCheckedOut(int copies);

    // Method to handle book borrowing
    bool BorrowBook();
};

#endif
