#include "manga.h"
#include <string>

manga::manga(std::string name, std::string description, int rating) :
name(name),
description(description),
rating(rating){}

manga manga::get_manga() const{
	return *this;
}

void manga::rename_name(std::string new_name){
	this->name = new_name;
}