#include <iostream>

using namespace std;

int main()
{
    int num, arr[7], i, key;
    cout << "Enter 7 numbers: ";
    for( i = 0; i < 7; i++ ){
        cin >> arr[i];
    }
    cout << " Please enter the key: ";
    cin >> key;
    for( i = 0; i < 7; i++ ){
        if ( arr[i] == key ){
            cout << "find " << key << " at " << i << endl;
            return 0;
        }
    }
    cout << "not in the array" << endl;`
    return 0;
}
