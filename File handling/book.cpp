#include<iostream>
#include<conio.h>
#include"D:\Code  Blocks\C++\Programming practise\File handling\book class.cpp"
using namespace std;
using namespace bookspace;

int main(){
 book b;
 char title[20];
  while(1){
     system("cls");

  switch(menu())
  {
  case 1:
      b.setBookData();
      b.storeBook();
      cout<<endl<<"Recorded inserted";

      break;
  case 2:
      b.readBook();

      break;
  case 3:
      cout<<endl<<"Enter title of book to delete record of it:";
      cin.ignore();
      cin.getline(title,19);

      if(b.deleteBook(title))
      cout<<endl<<"Selected Book record deleted";
      else
        cout<<"Record not found";

      break;
  case 4:
      cout<<endl<<"Enter title of book to update record of it:";
      cin.ignore();
      cin.getline(title,19);
      if(b.updateBook(title))
      cout<<endl<<"Selected Book record updated";
      else
        cout<<endl<<"No such record found";

      break;
  case 5:
      cout<<endl<<"Enter title of book to search in file:";
      cin.ignore();
      cin.getline(title,19);
      b.searchBook(title);

      break;
  case 6:
      cout<<"Press any key to exit";
       getch();
      exit(0);
  default:
    cout<<"Invalid selection";

  }
  getch();
  }
getch();
return 0;
}
