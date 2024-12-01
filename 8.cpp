//8.cpp.
//Classes
#include <iostream>
#include <vector>
using namespace std;
/**
a.	(10 pts) Define a class called Movie which has 3 private member
variables title, director, and year. You will need to write getter and setter
functions for all your member variables. The Movie class definition will also
include a default constructor and a destructor.
*/
class Movie
{
public:
    Movie();
    void setTitle(string t);
    void setDirector(string d);
    void setYear(int y);
    string getTitle()const;
    string getDirector()const;
    int getYear()const;
    ~Movie();
private:
    string title;
    string director;
    int year;
};

Movie::Movie()
{
    title = " ";
    director = " ";
    year = 0;
}

void Movie::setTitle(string t)
{
    title = t;
}

void Movie::setDirector(string d)
{
    director = d;
}

void Movie::setYear(int y)
{
    year = y;
}

string Movie::getTitle()const
{
    return title;
}

string Movie::getDirector()const
{
    return director;
}

int Movie::getYear()const
{
    return year;
}

Movie::~Movie()
{}









/**
b.	(5 pts) In the main() function, declare a vector of Movie objects
with a size of 10. On the sixth subscript/index of the vector,
assign the values "Harry Potter and the Goblet of Fire" as the title,
"Mike Newell" as director, and 2005 for the year.
Display the sixth element of vector.*/
int main()
{
    vector<Movie> myMovies(10);
    myMovies[5].setTitle("Harry Potter and the Goblet of Fire");
    myMovies[5].setDirector("Mike Newell");
    myMovies[5].setYear(2005);
    cout << "Movie #6: " << myMovies[5].getTitle() << ", " << myMovies[5].getDirector() << ", " << myMovies[5].getYear() <<endl;
}
