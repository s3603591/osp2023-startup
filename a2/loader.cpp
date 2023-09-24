#include "loader.h"

loader::loader(std::string data){
    datafile.open(data);
    std::string line;
    while(std::getline(datafile, line)){
        pcb pcb;
        std::istringstream iss(line);
        std::string pid, bt;

        std::getline(iss, pid, DELIMITER);
        std::getline(iss, bt, DELIMITER);

        pcb.setID(std::stoi(pid));
        pcb.setTotalTime(std::stoi(bt));
        
        datastream.push_back(pcb);
    }
}

loader::~loader() {}

std::deque<pcb> loader::load() {
    return datastream;
}