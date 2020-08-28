#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>

using namespace std;
namespace bookspace
{

class book
{
private:
    int bookid;
    char title[20];
    float price;
public:
    book()
    {
        bookid=0;
        strcpy(title,"no title");
        price=0;
    }
    void setBookData()
    {   cout<<"Enter bookid ,title and price of the book";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        //cin.ignore();
        cin>>price;
    }
    void showBookData()
    {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price<<endl;
    }
   inline int storeBook();
   inline int readBook();
   inline void searchBook(char*);
   inline bool deleteBook(char*);
   inline bool updateBook(char*);
};
inline int menu();
}
int bookspace::book::storeBook()
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data not initialized";
        return(0);
    }
    ofstream fout;
    fout.open("E:\\FH\\Book.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
    return 1;
}
int bookspace::book::readBook()
{
 ifstream fin;
 fin.open("E:\\FH\\Book.dat",ios::in|ios::binary);
 if(!fin)
        cout<<"\nFile not found";
 else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showBookData();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
 }
}
void bookspace::book::searchBook(char *t)
{    bool k=0;
    ifstream fin;
    fin.open("E:\\FH\\Book.dat",ios::app|ios::binary);
    if(!fin)
        cout<<"File not Found";
    else{
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof()){
            if(!strcmp(t,title))
            {   showBookData();
               k=1;
            }
          fin.read((char*)this,sizeof(*this));
          }
      if(!k)
        cout<<"No record found";
      fin.close();
    }
}
bool bookspace::book::deleteBook(char *t)
{
    ifstream fin;
    ofstream fout;
    bool flag=0;
    fin.open("E:\\FH\\Book.dat",ios::in|ios::binary);
    if(!fin)
        cout<<"File not exist";
    else{
        fout.open("E:\\FH\\tempfile.dat",ios::out|ios::binary);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(strcmp(title,t))
            {
                fout.write((char*)this,sizeof(*this));
            }
            else
                flag=1;

          fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        fout.close();
       remove("E:\\FH\\Book.dat");
       rename("E:\\FH\\tempfile.dat","E:\\FH\\Book.dat");
       }
       return flag;
}
bool bookspace::book::updateBook(char *t)
{
    fstream file;
    bool flag=0;
    file.open("E:\\FH\\Book.dat",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof()){
        if(!strcmp(t,title))
        {
            setBookData();
            file.seekp(file.tellp()-sizeof(*this));//or file.seekg(file.tellp()-sizeof(*this));
            file.write((char*)this,sizeof(*this));
        flag=1;
        }
        file.read((char*)this,sizeof(*this));
     }
     file.close();
     return flag;
}

int bookspace::menu()
{int opt;
    cout<<"1. Insert data."<<endl;
    cout<<"2. View all records."<<endl;
    cout<<"3. Delete data."<<endl;
    cout<<"4. Update data."<<endl;
    cout<<"5. Search data."<<endl;
    cout<<"6. Exit."<<endl;
    cin>>opt;
    return opt;
}
