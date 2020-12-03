#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int arr_rows = arr[0].size(), arr_columns = arr.size();
    int j,tempSum,maxSum = arr[0][0] + arr[0][1] +arr[0][2] +arr[1][1] +arr[2][0] + arr[2][1] + arr[2][2];
    
    for(int i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            tempSum = arr[i+0][j+0] + arr[i+0][j+1] +arr[i+0][j+2] +arr[1+i][j+1] +arr[i+2][j+0] + arr[i+2][j+1] + arr[i+2][j+2];
            if(tempSum > maxSum) {
                maxSum = tempSum;
            }
        }
    }

    return(maxSum);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
