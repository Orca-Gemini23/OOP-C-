#include <bits/stdc++.h>
#include <cstdlib>

int main(){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    if(!ptr){
        std::cout << "Memory allocation failed" << std::endl;
        exit(1);
    }

    std::cout << "Initialising values.." << std::endl;
    for(int i = 0; i < 5; i++){
        ptr[i] = i * 2 + 1;
    }

    std::cout << "Initialized values" << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << *(ptr + i) << std::endl;
    }

    free(ptr); // deallocated a block of memory previously allocated using calloc,
    // malloc and realloc making it available for further allocations.
    return 0;
}