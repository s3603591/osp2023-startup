#include "pcb.h"

#include <vector>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 2) {
        // Load the datafile
        std::string data(argv[1]);
        std::ifstream file(data);
        std::string token;

        if (file.is_open()) {
            int pid;
            int bt;
            int num_proc = 1;
            std::vector queue;

            // Add process to the vector
            while(std::getline(file,token,',')){
                pcb pcb;
                pid = token[0];
                bt = token[1];

                pcb.id = pid;

                num_proc++;
            }
            int wt[num_proc];
        }
    file.close()
    } else {
        std::cout << "./fifo [datafile]";
    }
}