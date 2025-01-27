//
// Created by anders on 26.01.25.
//
#pragma once
#include <iostream>
#include <vector>
#include "Book.h"

#ifndef LIBRARY_SYSTEM_LIBRARY_H
#define LIBRARY_SYSTEM_LIBRARY_H


class Library {
private:
    std::vector<Book> books;
public:
    Library(std::vector<Book> &books_);

    Library(){
        books.reserve(100);
    }
    ~Library();

    std::vector<Book> getBooks() const;

    void addBook(Book &newBook);

};


#endif //LIBRARY_SYSTEM_LIBRARY_H
