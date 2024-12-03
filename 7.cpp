//7.cpp
// Structures
#include <iostream>
#include <string>
using namespace std;
/**
a.	(5 pts) Define a structure called Movie which has 3 member variables.
The member variables include title, director, and year.
The title and director are strings and the year is an integer.
*/
struct Movie
{
    string title;
    string director;
    int year;
};

/**
b.	(5 pts) In the main() function, declare an array of type Movie
with a size of 10. On the fifth subscript/index of the array,
assign the values "Harry Potter and the Goblet of Fire" as the title,
"Mike Newell" as director and 2005 for the year.
Display the fifth element of array*/
int main()
{
    Movie myMovies[10];
    myMovies[4].title = "Harry Potter and the Goblet of Fire";
    myMovies[4].director = "Mike Newell";
    myMovies[4].year = 2005;
    cout << "Fifth movie: " << myMovies[4].title << ", " << myMovies[4].director << ", " << myMovies[4].year << endl;
    return 0;
}
