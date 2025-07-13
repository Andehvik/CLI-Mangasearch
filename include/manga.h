#include <string>

class manga{
public:
	<manga> get_manga() const;

	void delete_manga(manga selection) const;
private:
std::string name;
std::string description;
int rating;
}