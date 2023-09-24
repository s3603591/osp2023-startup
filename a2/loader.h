#include "pcb.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#define DELIMITER ','

class loader {
    private:
    std::ifstream datafile;
    std::vector<pcb> datastream;

    public:
    loader(std::string data);
    ~loader();
    std::vector<pcb> load();
};