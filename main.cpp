#include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, sum;
    float avg;

    cout << "Enter 1st Number : ";
    cin >> n1;

    cout << "\n Enter 2nd Number : ";
    cin >> n2;

    cout << "\n Enter 3rd Number : ";
    cin >> n3;

    sum = n1 + n2 + n3;
    avg = sum/3;

    cout << "Sum of Three Numbers : " << sum;
    cout << "\n\n Average of Three Numbers : " << avg;

}
