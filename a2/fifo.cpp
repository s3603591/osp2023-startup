#include "pcb.h"

#include <deque>
#include <fstream>

struct process{
    int pid;
    int bt;
};

int main(int argc, char** argv) {
    if (argc == 2) {
        // Load the datafile
        std::string data(argv[1]);
        std::string token;

        if (file.is_open()) {
            
        }
    file.close();
    } else {
        std::cout << "./fifo [datafile]";
    }
}