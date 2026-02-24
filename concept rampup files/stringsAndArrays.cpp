#include <iostream>
#include <algorithm>
#include <iterator> 
using namespace std;

string reverseString(string str){

    int start = 0;
    int end = str.length() - 1;

    while( start < end ){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    return str;
}

int countVowels(string str){
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o','u'};
    int size = sizeof(vowels) / sizeof(vowels[0]);
    for (char& c : str) {
        c = std::tolower(c);
        if(std::find(vowels, vowels + size, c ) != vowels + size){
            count++;
        }
    }
    return count;
}

int findMax(int* arr){
    if(sizeof(arr) == 0){
        return -9999999;
    }
    int max = arr[0];

    for(int i = 0; i < sizeof(arr); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}


int main(){

    /**
     * Exercises:
     *      Reverse String
     *      Count Vowels
     *      Find Max in array
     */
    cout << reverseString("Hello World!") << "\n";
    cout << countVowels("this should have nine vowels") << "\n";
    int arr[] = {5,2,123,53,5357,345,534,35};
    cout << findMax(arr);
    return 0;
}