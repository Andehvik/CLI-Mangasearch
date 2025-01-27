//
// Created by anders on 26.01.25.
//

#include "Library.h"
#include <iostream>
#include <vector>

Library::Library(std::vector<std::string> &books_): books(books_) {}

Library::~Library() = default;

std::vector<std::string> Library::getBooks() const{
    return books;
}