#include "manga.h"
#include <string>

manga::manga(std::string name, std::string description, int rating) :
name(name),
description(description),
rating(rating){}

std::string manga::get_name() const{
	return name;
}

void manga::rename_name(std::string new_name){
	this->name = new_name;
}