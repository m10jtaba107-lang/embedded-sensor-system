#include <iostream>



void Sensors() {
    

    int temperature_thresholds[3] = {2200, 3200, 3500};
    int input_temperature;
    int* temp_ptr = &input_temperature;
    std::string ststem_status;

    while (true) {
        std::cout << "enter the number: " << std::endl;
        if(!(std::cin >> *temp_ptr)) {
            std::cout << "error " << std::endl;
            break;
        }

        if(*temp_ptr <= 0) {
            std::cout << "error " << std::endl;
            break;
        }

        else if (*temp_ptr >=2000) {
            std::cout << "the temperature is very high, the cooling system has been activated " << std::endl;
        } 

        else if (*temp_ptr < 2000) {
            std::cout << "the temperature is relatively stable " << std::endl;
        } 

        else {
            std::cout << "error" << std::endl;
            break;
        } std::cout << "Do you want to continue? (yes/no): " << std::endl;
        if(!(std::cin >> ststem_status)) {
            std::cout << "error " << std::endl;
            break;
        } 

        if(ststem_status == "no") {
            std::cout << "exiting program " << std:: endl;
            break;
        } else if (ststem_status == "yes") {
            std::cout << "ok " << std::endl;
        } else {
            std::cout << "error" << std::endl;
        break;  }
          }
}