#include <cstring>
#include <iostream>
#include "manga.h"
#include "shelf.h"


void list_book_names(int argc, char *argv[],const shelf &shelf) {
    if (argc == 2) {
        if (strcmp( argv[1], "list") == 0) {
            for (size_t i = 0; i < shelf.get_books().size(); i++) {
                std::cout << shelf.get_books().at(i).get_name() << "\n";
            }
        }
    }
};


int main(int argc, char *argv[]) {



   // std::cout << argv[1] << std::endl;


    manga first("name", "description", 5);
    manga third("Avagima", "A fantasy manga", 7);
    shelf second("A", {first, third});

    // List the name of the books in the library

    list_book_names(argc, argv, second);


    return 0;
}
