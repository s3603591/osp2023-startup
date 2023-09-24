#include "pcb.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <deque>

#define DELIMITER ','

class loader {
    private:
    std::ifstream datafile;
    std::deque<pcb> datastream;

    public:
    loader(std::string data);
    ~loader();
    std::deque<pcb> load();
    
};