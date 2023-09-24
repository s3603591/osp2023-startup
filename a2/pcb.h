#include <iostream>
#include "types.h"

#pragma once  // tells the compiler to only include this file once
              /**
 * the process control block - represents a process that needs to be executed in
 * our simulator. Please note the I used some custom types of osp2023::time_type
 * and osp2023::id_type. these are just aliases to long integers but they are
 * more meaningful type names, hinting at how they will be used. Please see
 * their definitions in types.h.
 **/
class pcb {

   public:
    // the unique process id
    osp2023::id_type pid;
    // the total time that a process / job should run for
    osp2023::time_type bt;
    // the time that has been used so far for this process
    osp2023::time_type tat;
    // the priority level for this process
    // how much time has this process spent waiting for the cpu?
    osp2023::time_type wt;
    osp2023::time_type rt;
    // what time was this process last on the cpu?
    // max and min duration for a process in our system.
    static constexpr osp2023::time_type MAX_DURATION = 100;
    static constexpr osp2023::time_type MIN_DURATION = 10;

    pcb(){};
    ~pcb(){};
    void setPCB(int id, long tt);
    void print();
};
