#include <iostream>
using namespace std;

int firstTask(){
    int input;
    cin >> input;
    int size = to_string(input).length();
    int array[6];

    for (int i = size; i >= 0; i--) {
        cout << input%10 << "\n";
    array[i] = input % 10;
    input /= 10;
    }
    // for (int i = 0; i < size; i++) {
    //     cout << array[i] << "\n";a
    // }
    int max = array[0];
    cout << max;
    for (int i = 1; i < size; i++)
    {
        if(array[i] > max){
            max = array[i];
        }
    }
    cout << max;
    return 0;   
}



int main(){
    firstTask();
    return 0;
}