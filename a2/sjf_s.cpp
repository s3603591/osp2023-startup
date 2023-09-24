#include "sim.h"

// Simulate First In First Out CPU Scheduling

SJF_Sim::SJF_Sim(std::vector<pcb> data) {
    readyQ = data;
    int queue_size = readyQ.size();
    SJF_Sim::sort_data();

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

SJF_Sim::~SJF_Sim(){}

void SJF_Sim::sort_data(){
    int queue_size = readyQ.size();
    int i,j,idx;
    for (i = 0; i < queue_size; i++) {
        idx = i;
        for (j = i + 1; j < queue_size; j++) {
            if (readyQ[j].bt < readyQ[idx].bt) {
                idx = j;
            }

            long temp_bt = readyQ[i].bt;
            readyQ[i].bt = readyQ[idx].bt;
            readyQ[idx].bt = temp_bt;

            int temp_pid = readyQ[i].pid;
            readyQ[i].pid = readyQ[idx].pid;
            readyQ[idx].pid = temp_pid;
        }
    }
}

// Print FIFO Results
void SJF_Sim::print(){
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