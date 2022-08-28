#include <iostream>
using namespace std;
int main()
{
    char answer;
    cout << "\tPick a number from 1 to 8." << endl;
    cout << "\n\tIs it less than 5? you can write (y|n) :";
    cin >> answer;
    if (answer == 'y')
    {
        cout << "\tIs it less than 3? you can write (y|n):";
        cin >> answer;
        if(answer == 'y')
        {
            cout << "\tIs it less than 2? you can write (y|n):";
            cin >> answer;
            if (answer == 'y')
                cout << "\tYour number is 1." << endl;
            else
                cout << "\tYour number is 2." <<  endl;
        }
        else
        {
            cout << "\tIs it less than 4? you can write (y|n):";
            cin >> answer;
            if (answer == 'y')
                cout << "\tYour number is 3."<<endl;
            else
                cout << "\tYour number is 4." << endl;
        }
    }
    else
    {
        cout << "\tIs it less than 6? you can write (y|n):";
        cin >> answer ;
        if (answer == 'y')
        {
            cout << "\tIs it less than 6? you can write (y|n):";
            cin >> answer;
            if (answer == 'y')
                cout << "\tYour number is 5." <<endl;
            else
                cout << "\tYour number is 6." << endl;
        }
        else
        {
            cout << "\tIs it less than 8? you can write (y|n):";
            cin >> answer;
            if (answer == 'y')
                cout << "\tYour number is 7." << endl;
            else
                cout << "\tYour number is 8." << endl;
        }
    }
}
