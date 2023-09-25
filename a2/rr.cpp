#include "loader.h"
#include "sim.h"
#include <vector>
#include <fstream>

int main(int argc, char** argv) {
    if (argc == 3) {
        std::string time(argv[1]);
        std::string data(argv[2]);

        // Check if quantum is within 10-100
        int quant = std::stoi(time);
        if (quant < pcb::MIN_DURATION || quant > pcb::MAX_DURATION){
            return EXIT_SUCCESS;
        }
        
        loader loader(data);
        std::vector<pcb> load = loader.load();

        RR_Sim RR_Sim(load,quant);
        RR_Sim.print();


        
    } else {
        std::cout << "./rr [quantum] [datafile]";
    }
}