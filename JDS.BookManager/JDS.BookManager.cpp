// JDS.BookManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
    string title;
    string author;
    int year;
    int pages;
        
};



int main()
{   
    Book books[5];
    books[0] = { "The Hobbit", "John RR Tolkien", 1937, 304};
	books[1] = { "Keeper of the Lost Cities", "Shannon Messenger", 2012, };
    books[2] = { "", "Erin Hunter", 2003, 315 };
    books[3] = { "Eragon", "Christopher Paolini",  503 };
    books[4] = { "Hunter x Hunter", "Yoshihiro Togashi", 1998, 390};


	for (int i = 0; i < 5; i++)
    {
        cout << "Title: " << books[i].title << "\n";
		cout << "Author: " << books[i].author << "\n";
		cout << "Year: " << books[i].year << "\n";
		cout << "Pages: " << books[i].pages << "\n";
        cout << "\n";
    }
    int index = 0;
    cout << "Which book info would you like to see? (0-4): "; 
    cin >> index;
    if (index >= 0 && index < 5)
    {
        cout << "Enter new title: ";
        cin >> books[index].title;
        cout << "Enter new author: ";
        cin >> books[index].author;
        cout << "Enter new year: ";
        cin >> books[index].year;
        cout << "enter new page #: ";
        cin >> books[index].pages;
        
	}
	else
	{
		cout << "Invalid index, that book is not of this world";
	}
	cout << "would you like to save changes? (y/n): ";
    char save;
	cin >> save;
    if (save == 'y')
    {
		cout << "Title: " << books[index].title << "\n" << "Author: " << books[index].author << "\n" << "Year: " << books[index].year << "\n" << "Pages: " << books[index].pages;
	}
	else
	{
		cout << "Changes not saved";
	}
    
	
	

    (void)_getch();
}

