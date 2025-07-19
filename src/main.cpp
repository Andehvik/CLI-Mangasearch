#include <iostream>
#include "manga.h"


int main(void){
std::cout << "Hello World" << "\n";

manga first("name", "description", 5);

std::cout << first.get_name() << "\n";

return 0;
}
