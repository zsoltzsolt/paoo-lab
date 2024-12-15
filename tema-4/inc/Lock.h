#ifndef LOCK_H
#define LOCK_H

#include <mutex>

class Lock {
public:
    explicit Lock(std::mutex& m);
    ~Lock();

    Lock(const Lock&) = delete;
    Lock& operator=(const Lock&) = delete;

private:
    std::mutex& mutexP;
};

#endif 