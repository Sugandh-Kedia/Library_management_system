# Library Management System

## Overview
This is a **Library Management System** implemented in C. The program allows users to perform various operations such as adding books, displaying book details, searching for a book by its ID, sorting books by ID or name, and viewing the total number of books in the system.

## Features
1. **Add New Book**  
   Allows the user to add details for a new book, including:
   - Book ID
   - Book Name
   - Author
   - Number of Pages
   - Price

2. **Display All Books**  
   Displays a list of all books stored in the system with their details.

3. **Search by Book ID**  
   Search for a specific book using its unique Book ID. If the book exists, its details will be displayed.

4. **Total Number of Books in System**  
   Shows the total count of books currently stored in the system.

5. **Sort Books by ID**  
   Sorts the list of books in ascending order of their Book ID and displays the sorted list.

6. **Sort Books by Name**  
   Sorts the list of books alphabetically by their names and displays the sorted list.

7. **Exit**  
   Exits the program.

## Code Explanation
### Data Structure
The `struct library` defines the structure of a book, which includes:
- `bookid`: An integer representing the book's ID.
- `bookname`: A string representing the book's name.
- `author`: A string representing the author's name.
- `pageno`: An integer representing the number of pages in the book.
- `price`: A float representing the price of the book.

### Functions
- `addbook()`  
  Adds a new book to the system.
  
- `display()`  
  Displays all books currently in the system.
  
- `search()`  
  Searches for a book by its ID and displays its details if found.
  
- `sort()`  
  Sorts books by their ID in ascending order.
  
- `sortByName()`  
  Sorts books by their name in alphabetical order.

### Main Function
The program runs a menu-driven interface where users can choose from various options to interact with the system.

## How to Run
1. Save the code in a file named `library.c`.
2. Compile the program using a C compiler (e.g., `gcc`):
   ```bash
   gcc library.c -o library
   ```
3. Run the program:
   ```bash
   ./library
   ```
4. Follow the on-screen instructions to interact with the Library Management System.

## Example Usage
### Adding a Book
```
Enter New Book ID: 1
Enter New Book Name: CProgramming
Enter Author: DennisRitchie
Enter No. of Pages: 300
Enter Price: 350.50
```

### Displaying Books
```
BOOKS IN SYSTEM:
Book ID: 1
Book Name: CProgramming
Author: DennisRitchie
No. of Pages: 300
Price: 350.50
--END OF LIST--
```

### Searching for a Book
```
Enter Book ID to Search: 1
Book ID: 1
Book Name: CProgramming
Author: DennisRitchie
No. of Pages: 300
Price: 350.50
```

### Sorting Books
- By ID: Books are sorted in ascending order of their IDs.
- By Name: Books are sorted alphabetically by their names.

## Notes
- The system can store up to 100 books.
- Book IDs must be unique.
- The system provides a simple, interactive console interface.

## License
This project is open-source and can be used or modified for educational purposes.
