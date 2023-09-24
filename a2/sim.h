#include <vector>
#include "pcb.h"

class FIFO_Sim {
    private:
    std::vector<pcb> readyQ;
    // Average Waiting Time
    long awt;
    // Average Turnaround Time
    long atat;
    // Average Response Time
    long art;

    public:
    FIFO_Sim(std::vector<pcb> data);
    ~FIFO_Sim();
    void print();
};

class SJF_Sim {
    private:
    std::vector<pcb> readyQ;
    // Average Waiting Time
    long awt;
    // Average Turnaround Time
    long atat;
    // Average Response Time
    long art;


    public:
    SJF_Sim(std::vector<pcb> data);
    ~SJF_Sim();
    void print();
};

class RR_Sim {
    private:
    std::vector<pcb> readyQ;
    // Average Waiting Time
    long awt;
    // Average Turnaround Time
    long atat;
    // Average Response Time
    long art;


    public:
    RR_Sim(std::vector<pcb> data);
    ~RR_Sim();
    
};