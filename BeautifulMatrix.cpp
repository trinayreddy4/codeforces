#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5];
    int rowOfOne, colOfOne;
    
    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) 
			{
                rowOfOne = i;
                colOfOne = j;
            }
        }
    }
    
    int targetRow = 2;
	int targetCol = 2;
    int moves = abs(rowOfOne - targetRow) + abs(colOfOne - targetCol);
    
    cout << moves << endl;

    return 0;
}

