#include "pcb.h"
#include "types.h"
#include <vector>

int main(int argc, char** argv) {
    if (argc == 2) {
        std::string data(argv[1]);
        
    } else {
        std::cout << "./sjf [datafile]";
    }
}