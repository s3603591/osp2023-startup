#include "loader.h"

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
        loader loader(data);
        std::deque<pcb> load = loader.load();



    } else {
        std::cout << "./fifo [datafile]";
    }
}