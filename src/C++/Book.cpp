//
// Created by anders on 27.01.25.
//

#include "Book.h"
#include <iostream>
#include <utility>

Book::Book(std::string content_): content(std::move(content_)) {}

Book::~Book() = default;

std::string Book::getContent() const {
    return content;
}