# include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;

    if (age > 100) {
        cout<<"You Should Be In Your Death Bed Nigga"<<endl;
    }

    else if(age>=18) {
        cout<<"You Can Vote"<<endl;
    }

    else {
        cout<<"You Cannot Vote, You Will Be Able To Vote After "<< 18 - age<<endl;
    }

    return 0;
}
