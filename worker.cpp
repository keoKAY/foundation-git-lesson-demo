#include<iostream> 
using namespace std; 

class Worker{
    private: 
        int id; 
        string workerName; 
        string gender; 
};
class SalaryCalculator{
    private: 
        float wage; 
        float hour; 
};

class Manager{
    public: 
        int managerId; 
        string namagerName; 
        string gender; 
    
}; 
int main(){
    system("clear"); 
    cout<<"Hello from the worker "; 
    cout<<"This is the worker code "
    <<endl; 
    return 0; 
}