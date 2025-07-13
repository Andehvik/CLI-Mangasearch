#ifndef manga_H
#define manga_H

#include <string>

class manga{
public:

	manga(std::string name, std::string description, int rating);

	manga get_manga() const;

	void rename_name(std::string new_name);
private:

std::string name;
std::string description;
int rating;
};

#endif