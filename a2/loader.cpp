#include "pcb.h"
#include <fstream>
#include <deque>

#define DELIMITER ','

class loader {
    std::ifstream datafile;
    std::deque<pcb> datastream;

    public:
    loader(std::string data){
        datafile.open(data);
        std::string token;
        while(std::getline(datafile, token, DELIMITER)){
            pcb pcb;
            pcb.setID(std::stoi(token));
            datastream.push_back(pcb);
        }
    }

    std::deque<pcb> load() {
        return datastream;
    }
    
};