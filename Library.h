//
// Created by anders on 26.01.25.
//
#pragma once
#include <iostream>
#include <vector>

#ifndef LIBRARY_SYSTEM_LIBRARY_H
#define LIBRARY_SYSTEM_LIBRARY_H


class Library {
private:
    std::vector<std::string> books;
public:
    Library(std::vector<std::string> &books_);
    ~Library();

    std::vector<std::string> getBooks() const;

};


#endif //LIBRARY_SYSTEM_LIBRARY_H
