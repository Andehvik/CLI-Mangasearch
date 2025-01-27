//
// Created by anders on 27.01.25.
//
#pragma once
#include <iostream>

#ifndef LIBRARY_SYSTEM_BOOK_H
#define LIBRARY_SYSTEM_BOOK_H


class Book {
private:
    std::string content;
public:
    Book(std::string &content_);
    ~Book();

    std::string getContent() const;
};


#endif //LIBRARY_SYSTEM_BOOK_H
