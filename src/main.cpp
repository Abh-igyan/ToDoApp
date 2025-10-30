#include<iostream>
#include "Task.h"

int main(){
    std::cout<<"Welcome to your To-Do List Manager\n"<<std::endl;
    Task t1("Learn Cmake");

    std::cout<<"Task: "<<t1.getDescription()<<std::endl;
    std::cout<<"Completed: "<<(t1.isCompleted() ? "Yes" : "No")<<std::endl;
    t1.markCompleted();
    std::cout<<"--- Marking task as completed ---\n";
    std::cout<<"Completed: "<<(t1.isCompleted() ? "Yes" : "No")<<std::endl; 
    return 0;   
}