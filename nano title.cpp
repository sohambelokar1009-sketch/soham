#include<iostream>
#include<string>
using namespace std;
int main()
{
        int id1,id2,id3;
        string title1,title2,title3;
        //Book 1
        cout<<"Enter Book 1 ID: ";
        cin>>id1;

        cin.ignore();
        cout<<"Enter Book 1 Tittle: ";
        getline(cin, title1);

        //Book 2
        cout<<"Enter Book 2 Id: ";
        cin>>id2;

        cin.ignore();
        cout<<"Enter Book 2 Tittle: ";
        getline(cin,title2);

        //Book 3
        cout<<"Enter Book 3 ID: ";
        cin>>id3;
        getline(cin,title3); 

        //Display books 
        cout<<"\n==== LIBRARY BOOK ====";
        cout<<"\nBook ID:"<<id1;
        cout<<"\nBook Tittle:"<<title1;

        cout<<"\nBook ID:"<<id2;
        cout<<"\nBook Tittle:"<<title2;

        cout<<"\nBook ID:"<<id3;
        cout<<"\nBook Tittle:"<<title3;
        return 0;
}

