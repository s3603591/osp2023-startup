#include "pcb.h"
#include "types.h"

#include <vector>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 2) {
        // Load the datafile
        std::string data(argv[1]);
        std::ifstream file(data);
        std::string line;

        if (file.is_open()) {
            int pid;
            int bt;
            while(std::getline(file,line,',')){
                
                line[0]
            }
        }
    file.close()
    } else {
        std::cout << "./fifo [datafile]";
    }
}