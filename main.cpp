#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> arr){
    int s = 0;
    for(int element: arr){
        s += element;
    }
    return s;
}

double getAvg(vector<int> arr){
    return (double) getSum(arr) / arr.size();
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 7};
    cout << getSum(arr) << endl;
    cout << getAvg(arr) << endl;
    return 0;
}
