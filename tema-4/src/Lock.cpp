#include "Lock.h"
#include <iostream>

Lock::Lock(std::mutex& m) : mutexP(m) {
    mutexP.lock();
    std::cout << "Lock" << std::endl;
}

Lock::~Lock() {
    mutexP.unlock();
    std::cout << "Unlock" << std::endl;
}