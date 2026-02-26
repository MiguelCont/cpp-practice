#include <iostream>
using namespace std;

float add(float x, float y){
    return x + y;
}

float sub(float x, float y){
    return x - y;
}

float multiply(float x, float y){
    return x * y;
}

float divide(float x, float y){
    return x / y;
}

int getOperation(){
    bool valid = false;
    int result = 0;
    while(!valid){
        cout << "What operation would you like to perform?\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        string input;
        cin >> input;

        try{
            result = std::stoi(input);
            switch (result)
            {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                valid = true;
                break;
            
            default:
                break;
            }
        }
        catch(const std::exception& e){
            cout << "Invalid Option";
        }
    }
    return result;
}

float getValue(string position){
    float val;
    string input;
    while(true){
        cout << "Enter the " << position << " number: ";
        cin >> input;
        try{
            val = std::stof(input);
            return val;
        }
        catch(const std::exception& e){
            cout << "Invalid Option";
        }
    }


}


int main(){

    while(true){
        int input = getOperation();
        if(input == 5){
            cout << "Thank you for using my calculator! Bye!";
            return 0;
        }
        int x = getValue("first");
        int y = getValue("second");

        switch (input){
        case 1:
            cout << x << " + " << y << " = " << add(x,y);
            break;
        case 2:
            cout << x << " - " << y << " = " << sub(x,y);
            break;
        case 3:
            cout << x << " * " << y << " = " << multiply(x,y);
            break;
        case 4:
            if(y == 0){
                cout << "Invalid Operatiom, Cannot divide by Zero";
            }
            else{
                cout << x << " / " << y << " = " << divide(x,y);
            }
            break;
        default:
            break;
        }
        cout << "\n\n";
    }

    return 0;
}
