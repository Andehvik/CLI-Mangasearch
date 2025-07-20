//
// Created by andersh on 7/20/25.
//
#include "shelf.h"
#include <string>

shelf::shelf(std::string letter, std::vector<manga> books) :
m_letter(letter),
m_books(books){}

std::vector<manga> shelf::get_books() const {
    return m_books;
}

std::string shelf::get_letter() const {
    return m_letter;
}

void shelf::set_letter(const std::string &letter) {
    m_letter = letter;
}




