#include "loader.h"
#include "sim.h"
#include <vector>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 2) {
        // Load the datafile
        std::string data(argv[1]);
        loader loader(data);
        std::vector<pcb> load = loader.load();
        
        FIFO_Sim FIFO_Sim(load);
        FIFO_Sim.print();

    } else {
        std::cout << "./fifo [datafile]";
    }
}