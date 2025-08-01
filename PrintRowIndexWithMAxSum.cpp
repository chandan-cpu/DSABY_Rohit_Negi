#include <iostream>
using namespace std;
int main()
{

    int arr2[3][4] = {1, 0, 3, 4, 8, 6, 7, 8, 6, 10, 11, 12};
    int newResult = 0,index = 0;
;

    // Print the array
    for (int row = 0; row < 3; row++)
    {
        int result=0;
        for (int col = 0; col < 4; col++)
        {
            result += arr2[row][col];
        }
        if(result>newResult){
            newResult = result;
            index = row;
        }
    }
    cout << "Row with maximum sum is: " << index << " with sum: " << newResult << endl;
    return 0;
}