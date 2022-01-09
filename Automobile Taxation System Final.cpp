#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int act, year, filer, vehc, present=2020, regis, CC;
    float tax, id;
    string pass;

    cout << "\t\t\t\t\tWELCOME TO" <<endl;
    cout << "\t\t\tAUTOMOBILE TAXATION SYSTEM OF PAKISTAN " <<endl;
    cout << "**************************************************************************************" <<endl;
    cout << "Please Select One Of The Options From Below :\n\nEnter 1 For Registration.\nEnter 2 For Tax Filing.\nEnter 3 For Exit.\n";
    cin >>act;

    switch(act){
    case 1:
        cout << "\nPlease Register Your Account First :" <<endl;
        cout << "\nEnter USER ID/CNIC : "; cin >>id;
        cout << "\nEnter PASSWORD : "; cin >>pass;
        cout << "\nFor Motorcycle/Scooter, The Engine Capacities are :\n70CC.\n125CC.\n150CC.\n" <<endl;
        cout << "\nFor Car/Jeep, The Engine Capacities are :\n660CC.\n800CC.\n1000CC.\n1300CC.";
        cout << "\n1600CC.\n1800CC.\n2000CC." <<endl;
        cout << "\nSelect Vehicle Type From Below :\nEnter 1 for MotorCycle/Scooter.\nEnter 2 for Car/Jeep.\n"; cin >>vehc;
        cout << "\nEnter only Engine Capacity Number from the given options  : "; cin >>CC;
        cout << "\nEnter Model's Release Year : "; cin >>year;
        cout << "\nSelect from below :\nEnter 1 Filer.\nEnter 2 for Non-Filer.\n"; cin>>filer;


        switch (vehc){
    case 1:
        if(CC == 70){
            regis = 2500;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
                cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else{
                regis = regis;
            }
        }else if(CC == 125){
            regis = 5000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else{
                regis = regis;
            }
        }else if(CC == 150){
            regis = 7500;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
                cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else{
                regis = regis;
            }
        }

    case 2:
        if (CC == 660){
            regis = 30000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }

        }else if (CC == 800){
            regis = 40000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
              cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }

        }else if(CC == 1000){
            regis = 50000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }

        }else if(CC == 1300){
            regis = 60000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }

        }else if(CC == 1600){
             regis = 70000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
                cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }
        }
        else if(CC == 1800){
            regis = 80000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }

        }else if(CC == 2000){
            regis = 100000;
            cout << "\nYour Initial REG. Cost is = "<<regis <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(filer ==1){
               cout << "\nFor Filer There is a Reduction Of 25%." <<endl;
                regis = 0.75*regis;
            }else {
                regis = regis;
            }
        }
            cout<< "\nYour Final Registration Fee Of Vehicle After Deduction = "<<regis<<" Rs" <<endl;

        system("pause");
        system ("cls");
        main();

        }
        break;

    case 2:
        cout<< "\nFor Tax Filing Enter You USER ID And PASSWORD :"<<endl;
        cout<< "\nYour ID/CNIC : ";cin>>id;
        cout<< "\nYour Password : ";cin>>pass;
        cout << "\nSelect Vehicle Type From Below :\n1. MotorCycle/Scooter.\n2. Car/Jeep.\n"; cin >> vehc;
        cout << "\nEnter Engine Capacity : "; cin >>CC;
        cout << "\nEnter Manufacturing Model : "; cin >>year;
        cout << "\nSelect from below :\n1. Filer.\n2. Non-Filer.\n"; cin>>filer;

    switch (vehc){
    case 1:
        if(CC == 70){
            tax = 500;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else{
                tax = tax;
            }

        }else if(CC == 125){
            tax = 700;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else{
                tax = tax;
            }

        }else if(CC == 150){
            tax = 900;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if (filer == 1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else{
                tax = tax;
            }
        }
    case 2:
        if (CC == 660){
            tax = 1500;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                 cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                 cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

       }else if (CC == 800){
            tax = 2000;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

        }else if(CC == 1000){
            tax = 2500;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "If REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

        }else if(CC == 1300){
            tax = 3000;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
               cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

        }else if(CC == 1600){
            tax = 5000;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

        }else if(CC == 1800){
            tax = 6000;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;
            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
    }

        }else if(CC == 2000){
            tax = 7500;
            cout << "\nYour Initial TAX Cost is = "<<tax <<" RS" <<endl;
            cout << "\nYour Engine Capacity is = " <<CC << " CC" <<endl;

            if(present-year>9 && filer ==1){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;

                tax = 0.25*tax;
                tax = tax/2;

            }else if(present-year>9 && filer ==2){
                cout << "\nIf REGISTRATION is More Than 10 or More Years Old Than Reduction Will Be Of 75%." <<endl;
                tax = 0.25*tax;
            }else if(present-year<9 && filer ==1){
                cout << "\nFor Filer There is a Reduction Of 50%." <<endl;
                tax = tax/2;
            }else if(present-year<9 && filer ==2){
                tax = tax;
            }
        }

    }
    cout << "\nYour Tax Of The Vehicle = "<<tax << " RS" <<endl;

        system("pause");
        system ("cls");
        main();

    case 3:
        exit(0);
    default:
        cout << "Wrong Entry" <<endl;
        system("pause");
        main();

    }


    return 0;
}
