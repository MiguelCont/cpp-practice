#include <iostream>

void randomPrints(std::string name, int age, float gpa){
    std::cout << name << " is " << age << " years old with a gpa of " << gpa << std::endl;
}

void printSum(int x, int y){
    std::cout << x+y << std::endl;
}

float milesToKm(float miles){
    return miles * 1.60934;
}

float kmToMiles(float km){
    return km * .62;
}

int main(){
    randomPrints("Miguel Contreras", 23, 3.8);
    std::cout << std::endl;
    printSum(15, 20);
    std::cout << std::endl;
    int input_val;
    while(input_val != 3){
        std::cout << "What conversion do you want to do?\n\t1. Miles --> Kilometers\n\t2. Kilometers --> Miles\n\t3. Exit\n";
        std::cin >> input_val;
        if (input_val == 1){
            int miles;
            std::cout << "Enter the number of miles you want to convert: ";
            std::cin >> miles;
            std::cout << miles << " miles is " << milesToKm(miles) << " Kilometers\n\n";    
        }
        if (input_val == 2){
            int kms;
            std::cout << "Enter the number of Kilometers you want to convert: ";
            std::cin >> kms;
            std::cout << kms << " Kilometers is " << kmToMiles(kms) << " Miles\n\n"; 
        }    

    }
    
       

}

