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

int getMin(vector<int> arr){
    int s = arr[0];
    for (int element: arr){
        s = (s > element)? element: s;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1, 2, 3, 4, 7};
    cout << getSum(arr) << endl;
    cout << getMin(arr) << endl;
    return 0;
}
