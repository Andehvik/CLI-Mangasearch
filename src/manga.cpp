#include "manga.h"
#include <string>

manga::manga(const std::string &name, const std::string &description, int rating) :
m_name(name),
m_description(description),
m_rating(rating){}

std::string manga::get_name() const{
	return m_name;
}

void manga::rename_name(std::string &new_name){
	this->m_name = new_name;
}

void manga::set_rating(int new_rating) {
	this->m_rating = new_rating;
}