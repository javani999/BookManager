// JDS.BookManager.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
    Book books[4];
    books[0] = { "The Hobbit", "John RR Tolkien", 1937, 304};
	books[1] = { "Keeper of the Lost Cities", "Shannon Messenger", 2012, };
    books[2] = { "", "Erin Hunter", 2003, 315 };
    books[3] = { "Eragon", "Christopher Paolini",  503 };
    books[4] = { "Hunter x Hunter", "Yoshihiro Togashi", 1998, 390};

}

