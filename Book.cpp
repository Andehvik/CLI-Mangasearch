//
// Created by anders on 27.01.25.
//

#include "Book.h"
#include <iostream>

Book::Book(std::string &content_): content(content_) {}

Book::~Book() = default;

std::string Book::getContent() const {
    return content;
}