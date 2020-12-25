#include <iostream>
#include <string>
using namespace std;

int main(){
string name;
cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
cout << "?????: " ;
getline(cin,name);
cout << "Fahsai: Wow!!!"<<name <<"is a really cool name."<<endl;
cout <<"Fahsai: I think you are an Engineering student. What is your student ID?"<<endl;
cout << name<<": ";
int id;
cin >> id;
cout <<"Fahsai: I think you may be GEAR"<<(id/10000000)-12<<". "<<"I have a free movie ticket for you."<<endl;
cout <<"Fahsai: Let's go to the cinema together!!!"<<endl;
cout <<"Fahsai: What movie do you want to watch?"<<endl;
cout <<name<<": ";
string movie;
cin.ignore();
getline(cin,movie);
cout <<"Fahsai: So....which day are you free to go with me?"<<endl;
cout <<name<<": ";
string day;

getline(cin,day);
cout <<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching " << movie << " with you."<<endl;
cout << name<<": ";
string x;

getline(cin,x);
cout <<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
}

