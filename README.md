# BookInventory

The **BookInventory** program manages book records, tracking details such as title, author, publication year, and available copies. This program allows users to retrieve information about a book and perform a borrowing operation, updating the available and checked-out copies accordingly.

## Files

- **BookInventory.cpp**: Main source file containing the implementation of the `BookInventory` class and a demonstration of its functionality.
- **BookInventory.h**: Header file defining the structure and methods of the `BookInventory` class.

## How It Works

1. The program initializes a `BookInventory` object with:
   - Book title
   - Author's name
   - Publication year
   - Number of available copies

2. It provides accessor and mutator methods to retrieve and set these details.

3. Borrowing:
   - The `BorrowBook()` method decreases the available copies by one and increases the checked-out copies if there are copies available. 
   - If no copies are available, it notifies the user.

4. Error Handling:
   - The program includes basic error handling for setting invalid values, such as negative publication years or copy counts.

## How to Run

### Compilation and Execution

1. Compile the program using the following command:

   ```bash
   g++ BookInventory.cpp -o BookInventory

2. Run the compiled program:
   ```bash
   ./BookInventory

### Example Output:
```
Initial State:
Title: The Silent Patient
Author: Alex Michaelides
Publication Year: 2019
Copies Available: 3
Copies Checked Out: 0

        Borrow successful.

After Borrowing:
Copies Available: 2
Copies Checked Out: 1
```
