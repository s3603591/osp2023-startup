#include "sim.h"

// Simulate First In First Out CPU Scheduling

FIFO_Sim::FIFO_Sim(std::vector<pcb> data) {
    readyQ = data;
    int queue_size = readyQ.size();

    // Calculate waiting time per process
    for (int i = 1; i < queue_size; i++) {
        readyQ[i].wt = readyQ[i-1].bt + readyQ[i-1].wt;
        readyQ[i].rt = readyQ[i].wt;
    }

    // Calculate avg. total turnaround time and avg. total wait
    long ttat = 0; 
    long twt = 0;
    long trt = 0;
    for (int i = 0; i < queue_size; i++) {
        readyQ[i].tat = readyQ[i].bt + readyQ[i].wt;
        twt += readyQ[i].wt;
        ttat += readyQ[i].tat;
        trt += readyQ[i].rt;
    }
    // Calculate Average times
    awt = twt/queue_size;
    atat = ttat/queue_size;
    art = trt/queue_size;
}

FIFO_Sim::~FIFO_Sim(){}

// Print FIFO Results
void FIFO_Sim::print(){
    std::cout << "Proc" << "\t";
    std::cout << "Burst Time" << "\t";
    std::cout << "Turnaround Time" << "\t";
    std::cout << "Waiting Time" << "\t";
    std::cout << "Response Time" << "\n";
    int queue_size = readyQ.size();
    for (int i = 0; i < queue_size; i++) {
        readyQ[i].print();
    }

    std::cout << "Avg. waiting time: " << awt << std::endl;
    std::cout << "Avg. turnaround time: " << atat << std::endl;
    std::cout << "Avg. response time: " << art << std::endl;
}