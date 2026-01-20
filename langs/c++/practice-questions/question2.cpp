#include <iostream>
using namespace std;

class Appliances {

    public :
        int appId;
        string brand;
        double price;

        void inputDetails(){

            cout << "App ID" ;
            cin >> appId;

            cout << "Enter Band" ;
            cin >> brand;

            cout << "Enter Price" ;
            cin >> price;
        }

            void displayDetails(){
                cout << "App Id :- " << appId << endl;
                cout << "Brand :- " << brand << endl;
                cout << "Price :- " << price << endl;
            }
        
};

class SmartAppliances : Appliances{
    public :
        string connectType;
        int warrantyYrs;

        void inputDetails(){
            Appliances:: inputDetails();
            cout << "Connect Type" ;
            cin >> connectType;

            cout << "Warranty Yrs" ;
            cin >> warrantyYrs;
        }

        void displayDetails(){
            Appliances:: displayDetails();
                cout << "Connect Type :- " << connectType << endl;
                cout << "Warranty Yrs :- " << warrantyYrs << endl;
            }

};

int main (){
    SmartAppliances sa[3];


}