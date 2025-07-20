#include <iostream>
#include "manga.h"
#include "shelf.h"


int main() {
    manga first("name", "description", 5);
    manga third("Avagima", "A fantasy manga", 7);
    shelf second("A", {first, third});
    std::cout << second.get_books().at(0).get_name() << "\n";
    std::cout << second.get_books().at(1).get_name() << "\n";
    return 0;
}
