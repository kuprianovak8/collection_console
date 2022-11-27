#ifndef COLLEC_H
#define COLLEC_H

#include <QString>
#include <iostream>

using namespace std;

class Books
{
private:
    string title;
    string author;
    int year;

public:
    string getTitle() {return title;}
    string getAuthor() {return author;}
    int getYear() {return year;}

    void setTitle(string t) {title = t;}
    void setAuthor(string a) {author = a;}
    void setYear(int y) {year = y;}

    string showBooks()
    {
      cout << title << " " << author << " " << endl;
//      cout << "Author: " << author << endl;
//      cout << "Year: " << year << endl;
    return title;
    }

    void setBooks()
    {
        cout << "Title of book: ";
        cin >> title;
        cout << "Author: ";
        cin >> author;
        cout << "\n" << "Year: ";
        cin >> year;
    }

};

class Movies
{
private:
    string name;
    string genre;
    int year;

public:
    string getName() {return name;}
    string getGenre() {return genre;}
    int getYear() {return year;}

    void setName(string n) {name = n;}
    void setGenre(string g) {genre = g;}
    void setYear(int y) {year = y;}

    void showMovies()
    {
      cout << "Name: " << name << endl;
      cout << "Genre: " << genre << endl;
      cout << "Year: " << year << endl;
    }

    void setMovies()
    {
        cin >> name;
        cin >> genre;
        cin >> year;
    }
};

class Collections
{
public:
    Books objA;
    Movies objB;

    void addBook() {objA.setBooks();}
    void addFilm() {objB.setMovies();}

    string getBooks() {objA.showBooks();}
    void getFilms() {objB.showMovies();}
};


class collec
{
public:
    collec();
};

#endif // COLLEC_H
