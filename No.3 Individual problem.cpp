//FCI - Programming 1 - 2018 - Assignment 2
//Program name: Velocity of sound
//Last Modification Date: 1/3/2018
//Author and ID and group: Lauren Safwat - 20170203 - Group 8
//Teaching Assistants: Mohamed Atta & Ibrahim Zidan
//Purpose: To calculate the velocity of sound at certain air temperatures

#include <iostream>

using namespace std;

int main()
{
    int st , et , choice;
    float v;
    bool isExit = false;
    cout << "\n\t\t\t\t\t\t\tWelcome";

    while (isExit == false){
        cout << "\nTo calculate the velocity of sound: press 1" << endl;
        cout << "To exit the program: press 2" << endl;
        cout << "what do you want to do?" << endl;
        cin >> choice;

        if (choice == 1){
            cout << "\nEnter the starting temperature of the air in degree Celsius: ";
            cin >> st;
            cout << "Enter the ending temperature of the air in degree Celsius: ";
            cin >> et;
            cout << endl;
            while (st <= et){
                v = 331.3 + 0.61 * st;
                cout << "At " << st << " degrees Celsius, the velocity of sound is " << v << " m/s\n";
                st++;
            }
        }
        else if (choice == 2)
            isExit = true;
    }
    return 0;
}
