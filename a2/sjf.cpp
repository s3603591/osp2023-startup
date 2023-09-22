#include "pcb.h"
#include <fstream>
#include <deque>

struct process{
    int pid;
    int bt;
};

int main(int argc, char** argv) {
    if (argc == 2) {
        std::string data(argv[1]);
        
        // Load the datafile
        std::string data(argv[1]);
        std::ifstream file(data);
        std::string token;

        if (file.is_open()) {
            int pid;
            int bt;
            int num_proc = 1;
            std::deque<process> queue;

            // Add process to the deque
            while(std::getline(file,token,',')){
                process process;
                pid = token[0];
                bt = token[1];

                process.pid = pid;
                process.bt = bt;
                queue.push_back(process);
                num_proc++;
            }
            int wt[num_proc];
    } else {
        std::cout << "./sjf [datafile]";
    }
}