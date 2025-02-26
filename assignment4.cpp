#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;


// Book class - yeh kitab
class Book {
private:
    string title;
    string author;
    string isbn;
    bool isIssued;

public:
    // Naya book
    Book(string t, string a, string i)
    {
         title = t;   
         author = a;   
         isbn = i;
         isIssued = false;
    }

    // Dikha kitab
    void displayBookDetails()
    {
         cout << "Title: " << title << ", Author: " << author 
              << ", ISBN: " << isbn 
              << ", Issued: " << (isIssued ? "Yes" : "No") << endl;
    }

    // Book issue karo
    void issueBook()
    {
         if (!isIssued)
         {
              isIssued = true;
              cout << "Book issued!" << endl;
         }
         else
         {
              cout << "Already issued!" << endl;
         }
    }

    // Book return karo
    void returnBook()
    {
         if (isIssued)
         {
              isIssued = false;
              cout << "Book returned!" << endl;
         }
         else
         {
              cout << "Not issued!" << endl;
         }
    }

    // ISBN lo
    string getISBN()
    {
         return isbn;
    }

    // Issued check karo
    bool getIsIssued()
    {
         return isIssued;
    }
};



// User class - yeh user
class User {
private:
    string name;
    int userID;
    string issuedBookISBN;   // agar kitab li hai

public:
    // Naya user
    User(string n, int id)
    {
         name = n;  
         userID = id;
         issuedBookISBN = "";
    }

    // User ID lo
    int getUserID()
    {
         return userID;
    }

    // Kitab issue karo
    void issueBook(Book &b)
    {
         if (issuedBookISBN == "" && !b.getIsIssued())
         {
              b.issueBook();
              issuedBookISBN = b.getISBN();
         }
         else
         {
              cout << "Cannot issue book!" << endl;
         }
    }

    // Kitab return karo
    void returnBook(Book &b)
    {
         if (issuedBookISBN == b.getISBN())
         {
              b.returnBook();
              issuedBookISBN = "";
         }
         else
         {
              cout << "Not your book!" << endl;
         }
    }

    // Naam lo
    string getName()
    {
         return name;
    }
};



// Admin class - extra power
class Admin : public User {
public:
    // Admin naya user jaisa
    Admin(string n, int id) : User(n, id)
    {
    }

    // Add karo kitab
    void addBook(vector<Book> &library, Book b)
    {
         library.push_back(b);
         cout << "Book added!" << endl;
    }

    // Remove karo kitab - index based loop instead of auto
    void removeBook(vector<Book> &library, string isbn)
    {
         bool found = false;
         for (int i = 0; i < library.size(); i++)
         {
              if (library[i].getISBN() == isbn)
              {
                   library.erase(library.begin() + i);
                   cout << "Book removed!" << endl;
                   found = true;
                   break;
              }
         }
         if (!found)
         {
              cout << "Book not found!" << endl;
         }
    }
};



int main()
{
    vector<Book> library;
    vector<User> users;

    // Preloaded users
    users.push_back(User("Rahul", 101));
    users.push_back(User("Simran", 102));

    // Admin object
    Admin admin("Rohit", 999);

    // Preloaded books
    admin.addBook(library, Book("C++ Basics", "Bjarne", "978-11111"));
    admin.addBook(library, Book("OOP Concepts", "James", "978-22222"));

    int choice = 0;

    while (choice != 5)
    {
         cout << "\nLibrary Management System\n";
         cout << "1. Add Book\n";
         cout << "2. Issue Book\n";
         cout << "3. Return Book\n";
         cout << "4. View Books\n";
         cout << "5. Exit\n";
         cout << "Enter choice: ";
         cin >> choice;
         
         // Check for input error and clear if needed
         if(cin.fail()){
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
             choice = 0;
             cout << "Invalid input! Try again." << endl;
             continue;
         }
         
         cin.ignore();  // clear newline

         if (choice == 1)
         {
              // Add book option
              string title, author, isbn;
              cout << "\nEnter title: ";
              getline(cin, title);
              cout << "Enter author: ";
              getline(cin, author);
              cout << "Enter ISBN: ";
              cin >> isbn;
              admin.addBook(library, Book(title, author, isbn));
         }
         else if (choice == 2)
         {
              // Issue book
              int uid;
              string isbn;
              cout << "\nEnter User ID: ";
              cin >> uid;
              cout << "Enter Book ISBN: ";
              cin >> isbn;

              bool foundUser = false;
              for (int i = 0; i < users.size(); i++)
              {
                   if (users[i].getUserID() == uid)
                   {
                        foundUser = true;
                        bool foundBook = false;
                        for (int j = 0; j < library.size(); j++)
                        {
                             if (library[j].getISBN() == isbn)
                             {
                                  foundBook = true;
                                  users[i].issueBook(library[j]);
                                  break;
                             }
                        }
                        if (!foundBook)
                        {
                             cout << "Book not found!" << endl;
                        }
                        break;
                   }
              }
              if (!foundUser)
              {
                   cout << "User not found!" << endl;
              }
         }
         else if (choice == 3)
         {
              // Return book
              int uid;
              string isbn;
              cout << "\nEnter User ID: ";
              cin >> uid;
              cout << "Enter Book ISBN: ";
              cin >> isbn;

              bool foundUser = false;
              for (int i = 0; i < users.size(); i++)
              {
                   if (users[i].getUserID() == uid)
                   {
                        foundUser = true;
                        bool foundBook = false;
                        for (int j = 0; j < library.size(); j++)
                        {
                             if (library[j].getISBN() == isbn)
                             {
                                  foundBook = true;
                                  users[i].returnBook(library[j]);
                                  break;
                             }
                        }
                        if (!foundBook)
                        {
                             cout << "Book not found!" << endl;
                        }
                        break;
                   }
              }
              if (!foundUser)
              {
                   cout << "User not found!" << endl;
              }
         }
         else if (choice == 4)
         {
              // View all books using index loop
              cout << "\nAll Books:\n";
              for (int i = 0; i < library.size(); i++)
              {
                   library[i].displayBookDetails();
              }
         }
         else if (choice == 5)
         {
              cout << "\nExiting..." << endl;
         }
         else
         {
              cout << "\nInvalid choice!" << endl;
         }

         cout << "\n";
    }

    return 0;
}