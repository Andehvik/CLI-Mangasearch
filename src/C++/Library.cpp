//
// Created by anders on 26.01.25.
//

#include "Library.h"
#include <iostream>
#include <vector>

Library::Library(std::vector<Book> &books_): books(books_) {}

Library::~Library() = default;

std::vector<Book> Library::getBooks() const{
    return books;
}

void Library::addBook(Book &newBook) {
    books.emplace_back(newBook);
}