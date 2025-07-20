#ifndef manga_H
#define manga_H

#include <string>

class manga {
public:
    manga(const std::string &name, const std::string &description, int rating);

    std::string get_name() const;

    void rename_name(std::string &new_name);

    void set_rating(int new_rating);

private:
    std::string m_name;
    std::string m_description;
    int m_rating {-1};
    bool m_finished {false};
};

#endif
