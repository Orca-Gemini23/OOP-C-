#include <iostream>

template <class t>
t sum(t a, t b){
    t result;
    result = a + b;
    return result;
}

int main(){
    int i = 5, j = 6, k;
    k = sum<int>(i, j);
    std::cout << k << std::endl;
    return 0;
}