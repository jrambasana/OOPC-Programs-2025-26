#include <iostream>
using namespace std;

class LibraryBook
{
private:
    string title;
    string author;
    float *price;   // dynamically allocated

public:
    // Constructor
    LibraryBook(string t, string a, float p)
    {
        title = t;
        author = a;
        price = new float;   // dynamic memory allocation
        *price = p;
    }

    // Destructor
    ~LibraryBook()
    {
        delete price;        // release allocated memory
        cout << "\nMemory for book price released.";
    }

    // Declare Librarian as friend class
    friend class Librarian;
};

class Librarian
{
public:
    void displayBookDetails(LibraryBook &b)
    {
        cout << "\nBook Title   : " << b.title;
        cout << "\nAuthor       : " << b.author;
        cout << "\nBook Price   : " << *(b.price);
    }
};

int main()
{
    LibraryBook book("C++ Programming", "Bjarne Stroustrup", 550.75);

    Librarian lib;
    lib.displayBookDetails(book);

    return 0;
}

/*
Here Key Concepts Demonstrated are:
- Concept           Explanation
- Dynamic memory	price allocated using new
- Constructor	    Initializes data members
- Destructor	    Releases memory using delete
- Friend class	    Librarian accesses private members
- Encapsulation	    Data protected inside class
*/