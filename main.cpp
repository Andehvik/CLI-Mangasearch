#include <iostream>
#include "Library.h"


// This project centers around creating management software for a library using C++.
// It incorporates algorithms and data structures to optimize book title searches,
// making it quick and efficient for library patrons. Additionally,
// the project includes detailed reports presenting the analysis of data structures and
// algorithms implemented.

//Added task. Connect with manga

//Make a searching algorithm

//Take input from txt-files with manga-titles.

//Use python to scrape titles, genre, URL??? etc. and send it through a JSON-file or a txt-file
// depending on what is the best.



int main(){

    std::vector<std::string> books;

    books.emplace_back("Hero of the Storm");

    Library library(books);

    std::cout << library.getBooks().at(0) << '\n';


    return 0;
}