#include<iostream>
#include<ctime>

using namespace std;


int main(){


    time_t tiempo = time(NULL);
    tm * local = localtime(&tiempo);


    while(true){
        time_t tiempo = time(NULL);
        tm * local = localtime(&tiempo);

        cout << local -> tm_mday;
        cout << "/" << local ->tm_mon + 1;
        cout << "/" << local -> tm_year + 1900;
        cout << endl <<  "Hora: ";
        cout << local ->tm_hour << ":";
        cout << local ->tm_min << ":";
        cout << local ->tm_sec;
        system("cls");

    }

    return 0;
}
