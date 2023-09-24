#include "pcb.h"

void pcb::setPCB(int pid, long bt) {
    this->pid = pid;
    this->bt = bt;
    this->tat = 0;
    this->wt = 0;
    this->rt = 0;
}

void pcb::print(){
    std::cout << this->pid << "\t";
    std::cout << this->bt << "\t\t";
    std::cout << this->tat << "\t\t";
    std::cout << this->wt << "\t\t";
    std::cout << this->rt << "\n";
}