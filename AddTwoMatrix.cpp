#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {1, 0, 3, 4, 8, 6, 7, 8, 6, 10, 11, 12};
    int result[3][4];

    // Print the array
    for (int row = 0; row < 3;row++)
    {
        for (int col = 0; col < 4;col++)
        {
            result[row][col] = arr[row][col] + arr[row][col];
        }
    }

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 4; col++)
            {
                cout << result[row][col] << "  ";
            }
            cout << endl;
        }
    return 0;
}