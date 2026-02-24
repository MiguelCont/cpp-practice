#include <iostream> 



int main(){
    /** Exercises
            1. Print Var Address
            2. Modify using pointers
            3. Swap using pointers
    **/
    int x = 0;
    int* pX = &x;

    std::cout << pX << "\n" ;
    *pX = 15;
    std::cout << x << "\n";
    int y = 5;
    int* pY = &y;

    std::cout << "X: "<< x << " Y: "<< y << "\n";

    int temp = *pX;
    *pX = *pY;
    *pY = temp;
    
    std::cout << "After Swap:\nX: "<< x << " Y: "<< y << "\n";

    return 0;
}