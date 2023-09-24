#include "loader.h"

loader::loader(std::string data){
    datafile.open(data);
    std::string line;
    while(std::getline(datafile, line)){
        // Initialise PCB object
        pcb pcb;
        std::istringstream iss(line);
        std::string pid, bt;

        // Split the line
        std::getline(iss, pid, DELIMITER);
        std::getline(iss, bt, DELIMITER);

        // Set the process and burst time
        pcb.setPCB(std::stoi(pid), std::stol(bt));

        // Push onto vector
        datastream.push_back(pcb);
    }
}

loader::~loader() {}

std::vector<pcb> loader::load() {
    return datastream;
}