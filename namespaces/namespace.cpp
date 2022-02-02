#include <iostream>

namespace first{
    int x = 5;
}
namespace second{
    double y = 125.63;
}

int main(){
    {
        using namespace first;
        std::cout << x << std::endl;
    }
    {
        using namespace second;
        std::cout << y << std::endl;
    }
    return 0;
}

/* Namespaces allow us to group named entities
 that otherwise would have global scope into narrower scopes,
  giving them namespace scope. 
  This allows organizing the elements of programs 
  into different logical scopes referred to by names.
