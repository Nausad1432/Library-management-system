#include<iostream>
#include<string>
using namespace std;

int i = 0;

struct Book {
    int id;
    float price;
    string name, author, publish;
} B[25];

// Insert New Book
void Insert() {
    system("cls");
    cout << "\n\n ENTER BOOK ID: ";
    cin >> B[i].id;
    cin.ignore(); // Ignore leftover newline
    cout << "\n\n ENTER BOOK NAME: ";
    getline(cin, B[i].name);
    cout << "\n\n ENTER BOOK AUTHOR NAME: ";
    getline(cin, B[i].author);
    cout << "\n\n ENTER BOOK PUBLISHER NAME: ";
    getline(cin, B[i].publish);
    cout << "\n\n ENTER BOOK PRICE: ";
    cin >> B[i].price;
    i++;
    cout << "\n\n\n *** INSERTED NEW BOOK SUCCESSFULLY ***";
}

// Search Book
void Search() {
    int sid, found = 0;
    system("cls");
    if (i == 0) {
        cout << "BOOK LIST IS EMPTY!";
    } else {
        cout << "ENTER BOOK ID FOR SEARCH: ";
        cin >> sid;
        for (int a = 0; a < i; a++) {
            if (sid == B[a].id) {
                cout << "\n BOOK NAME: " << B[a].name;
                cout << "\n BOOK AUTHOR NAME: " << B[a].author;
                cout << "\n BOOK PUBLISHER NAME: " << B[a].publish;
                cout << "\n BOOK PRICE: " << B[a].price;
                found = 1;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n\n *** BOOK ID NOT FOUND ***";
    }
}

// Update Book
void Update() {
    int sid, found = 0;
    system("cls");
    if (i == 0) {
        cout << "BOOK LIST IS EMPTY!";
    } else {
        cout << "ENTER BOOK ID FOR UPDATE: ";
        cin >> sid;
        for (int a = 0; a < i; a++) {
            if (sid == B[a].id) {
                cin.ignore();
                cout << "\n\n ENTER BOOK NAME: ";
                getline(cin, B[a].name);
                cout << "\n\n ENTER BOOK AUTHOR NAME: ";
                getline(cin, B[a].author);
                cout << "\n\n ENTER BOOK PUBLISHER NAME: ";
                getline(cin, B[a].publish);
                cout << "\n\n ENTER BOOK PRICE: ";
                cin >> B[a].price;
                cout << "\n\n\n *** UPDATED BOOK SUCCESSFULLY ***";
                found = 1;
                break;
            }
        }
        if (found == 0) {
            cout << "\n\n\n *** BOOK ID NOT FOUND ***";
        }
    }
}

// Delete Book
void Delete() {
    int sid, found = 0;
    system("cls");
    if (i == 0) {
        cout << "BOOK LIST IS EMPTY!";
    } else {
        cout << "ENTER BOOK ID FOR DELETE: ";
        cin >> sid;
        for (int a = 0; a < i; a++) {
            if (sid == B[a].id) {
                for (int k = a; k < i - 1; k++) {
                    B[k] = B[k + 1];
                }
                cout << "\n\n\n ***BOOK IS DELETED SUCCESSFULLY ***";
                found = 1;
                i--;
                break;
            }
        }
        if (found == 0)
            cout << "\n\n\n *** BOOK ID NOT FOUND ***";
    }
}

// Show All Book Details
void Show() {
    if (i == 0) {
        cout << "BOOK LIST IS EMPTY!";
    } else {
        for (int a = 0; a < i; a++) {
            cout << "\n BOOK ID: " << B[a].id;
            cout << "\n BOOK NAME: " << B[a].name;
            cout << "\n BOOK AUTHOR NAME: " << B[a].author;
            cout << "\n BOOK PUBLISHER NAME: " << B[a].publish;
            cout << "\n BOOK PRICE: " << B[a].price;
            cout << "\n-------------------------";
        }
    }
}

int main() {
    int choice;
    do {
        system("cls");
        cout << "\n\n\n---***** BOOK MANAGEMENT SYSTEM IN LIBRARY *****---\n";
        cout << "\n 1. INSERT BOOK";
        cout << "\n 2. SEARCH BOOK";
        cout << "\n 3. UPDATE BOOK";
        cout << "\n 4. DELETE BOOK";
        cout << "\n 5. SHOW ALL BOOKS";
        cout << "\n 6. EXIT";
        cout << "\n\n ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice) {
            case 1: Insert(); break;
            case 2: Search(); break;
            case 3: Update(); break;
            case 4: Delete(); break;
            case 5: Show(); break;
            case 6: exit(0);
            default:
                cout << "Invalid choice, please select a correct option!";
        }
        cout << "\n\nPress any key to continue...";
        cin.get();
        cin.get();
    } while (true);

    return 0;
}
