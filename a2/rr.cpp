#include "loader.h"
#include <deque>

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
        std::deque<pcb> readyQ = loader.load();


        
    } else {
        std::cout << "./rr [quantum] [datafile]";
    }
}