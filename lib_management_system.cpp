#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Library{
    public:
    int id;
    char name[100],author[100],student[100];
    int pages;
    int price ;

};

int main(){
    Library lib[20];
    int input = 0;
    int count = 0;
    while(input!=3){
        cout<<"Enter 1 to input details:"<<endl;
        cout<<"Enter 2 to display details:"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;

        switch(input){
            case 1:
            start:
            cout<<"Enter Book ID : "<<endl;
            cin>>lib[count].id;
            cout<<"Enter Book Name : "<<endl;
            //cin>lib[count].name;
            cin.getline(lib[count].name,100,'$');
            cout<<"Enter Book Author : "<<endl;
            //cin>>lib[count].author;
            cin.getline(lib[count].author,100,'$');
            cout<<"Enter Student Name : "<<endl;
            //cin>>lib[count].student;
            cin.getline(lib[count].student,100,'$');
            cout<<"Enter Book Price : "<<endl;
            cin>>lib[count].price;
            cout<<"Enter Book Pages : "<<endl;
            cin>>lib[count].pages;
            count++;
            break;

            case 2:
            for (int i =0;i<count;i++)
            {
                cout<<"Book Id: "<<lib[i].id<<endl;
                cout<<"Book Name: "<<lib[i].name;
                cout<<"Book Author: "<<lib[i].author;
                cout<<"Student Name: "<<lib[i].student;
                cout<<"Book Price: "<<lib[i].price<<endl;
                cout<<"Book Pages: "<<lib[i].pages<<endl;
            }
            
            break;

            case 3:
            exit(0);
            break;

            default:
            cout<<"You have entered wrong choice!!"<<endl;
            goto start;



        }
    }
}