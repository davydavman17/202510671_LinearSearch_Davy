#include <iostream>
using namespace std;


int main(){

   long keyNumber=795763502;
   int phoneNumbers[3];
   int i=0;
 
    do{

    cout << "Enter your phone number" << endl;
    cin>>phoneNumbers[i];
    i=i+1;
    }
        while(i<3);
        for(int i=0; i<3;i++){

            if(phoneNumbers[i]==keyNumber) {
            cout<<"Davy number's found"<<endl;
        break;
}
}
return 0;
}
