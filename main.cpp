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

int main(int argc, char const *argv[])
{
    vector<int> arr{1,2, 3, 4, 5};
    cout << getSum(arr) << endl;
    return 0;
}
