#pragma once 
#include <string>

class Task {
public:
    //create a new Task object
    Task(const std::string& description);

    std::string getDescription() const;
    bool isCompleted() const;
    void markCompleted();

private:
    std::string description;
    bool completed;
};