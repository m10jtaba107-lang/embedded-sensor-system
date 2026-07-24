#include <iostream>
#include <vector>


void Data () {
    
    
int system_data;
int* p = &system_data;
std::string loop_control;

while(true) {
    std::cout << "enter the data: " << std::endl;
    if(!(std::cin >> system_data)){
        std::cout << "error" << std::endl;
        break;}

       if(*p <= 0) {
            std::cout << "error" << std::endl;
            break;
        }

     else if(*p >= 100 ) {
        std::cout << "the data is bigger " << std::endl;
        break;
    } 
     else {
        std::cout << "data received" << std::endl;
        
    } std::cout << "Do you wane to continue? (yes/no) " << std::endl;
    if(!(std::cin >> loop_control)) {
        std::cout << "error" << std::endl;
    } if(loop_control == "no") {
        std::cout << "exiting program " << std::endl;
        break;
    } else if (loop_control == "yes") {
        std::cout << "ok" << std::endl;
    } else {
        std::cout << "error" << std::endl;
        break;
    }

}
}