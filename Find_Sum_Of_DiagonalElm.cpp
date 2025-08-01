#include<iostream>
using namespace std;
int main(){
    int arr2[4][4] = {1, 0, 3, 4, 
                       8, 6, 7, 8, 
                       6, 10, 11, 12,
                       5, 9, 2, 3};
    int newResult = 0, index = 0;

    int First_sum = 0, Second_sum = 0;
    // Calculate the sum of diagonal elements
    for (int i = 0; i < 4; i++) {
        First_sum += arr2[i][i]; // Primary diagonal
        Second_sum += arr2[i][3 - i]; // Secondary diagonal
    }
    cout << "Sum of diagonal: " << First_sum+Second_sum << endl;

    return 0;
}