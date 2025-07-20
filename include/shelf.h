#ifndef shelf_H
#define shelf_H

#include <string>
#include <vector>
#include "manga.h"

class shelf {
public:

	shelf(std::string letter, std::vector<manga> books);

	std::vector<manga> get_books() const;

	void set_letter(const std::string &letter);

	std::string get_letter() const;
	
private:

std::string m_letter{};
std::vector<manga> m_books{};
};

#endif