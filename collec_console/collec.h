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

    void PrintBook()
    {
      cout << "Titlte: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "Year: " << year << endl;
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
    void PrintMovies()
    {
      cout << "Name: " << name << "\t Genre: " << genre << "\t Year: " << year;
//      cout << "Genre: " << genre << endl;
//      cout << "Year: " << year << endl;
    }
};

class collec
{
public:
    collec();
};

#endif // COLLEC_H
