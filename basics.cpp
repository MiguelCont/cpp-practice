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
    int miles = 24;
    std::cout << miles << " miles is " << milesToKm(miles) << " Kilometers\n\n";
    int kms = 15;
    std::cout << kms << " Kilometers is " << kmToMiles(kms) << " Miles\n\n";   

}

