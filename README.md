# Library Management System

A simple Library Management System in C++ to manage books in a library. This project allows users to add, search, update, delete, and display book details through a console-based interface. It demonstrates fundamental concepts of C++ programming such as structs, arrays, and basic input/output operations.

## Features

- **Add New Book**: Allows users to enter details like ID, name, author, publisher, and price.
- **Search Book**: Finds and displays a book's details based on its ID.
- **Update Book**: Enables users to modify existing book details.
- **Delete Book**: Removes a book's details from the system.
- **Display All Books**: Lists all the books currently stored in the system.

## Prerequisites

- A C++ compiler such as GCC or MSVC.
- A code editor (e.g., Visual Studio Code, CLion) or an IDE that supports C++.

## Setup

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your-username/library-management-system.git
   cd library-management-system
   ```

2. **Compile the Code**:
   Compile the program using a C++ compiler. For example, with `g++`:
   ```bash
   g++ library_management.cpp -o library_management
   ```

3. **Run the Program**:
   Execute the compiled binary:
   ```bash
   ./library_management
   ```

## Usage

1. **Menu Options**: After running the program, you will see the main menu with the following options:
   - `1`: Insert a new book into the library.
   - `2`: Search for a book by its ID.
   - `3`: Update details of an existing book.
   - `4`: Delete a book by its ID.
   - `5`: Display all books currently in the library.
   - `6`: Exit the application.

2. **Interacting with the Program**: Enter the corresponding number for each option and follow the on-screen instructions to manage the library.

## Code Overview

- **`struct Book`**: Defines the structure for each book with attributes such as `id`, `price`, `name`, `author`, and `publish`.
- **Functions**:
  - `Insert()`: Adds a new book entry.
  - `Search()`: Searches for a book by ID.
  - `Update()`: Updates details of an existing book by ID.
  - `Delete()`: Deletes a book by ID.
  - `Show()`: Displays all books in the library.

## Example Usage

1. Start the program.
2. Choose option `1` to insert a new book and enter the details as prompted.
3. Use option `2` to search for a book by entering its ID.
4. Update or delete entries using options `3` or `4`, respectively.
5. To view all stored books, use option `5`.
6. Exit with option `6`.

## Contributing

If you’d like to contribute to this project, please fork the repository and use a feature branch. Pull requests are welcome.

## License

This project is open-source and available under the [MIT License](LICENSE).

---
