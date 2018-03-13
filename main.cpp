//Author:Ryan Persons
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  //string list[5]; //array of 5 strings
  //int numItems = 0;
  char input;
  string item;
  vector <string> list;

  do{
  cout<<"\n==GROCERY LIST MANAGER=="; 
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
      if(input == 'A' || input == 'a')
      {
      cout<<"What is the item?\n";
      cin>>item;
      list.push_back(item);
      /*
        if(numItems >= 4)
        {
        cout<<"You'll need a bigger list!\n";
        }
        else
        {
        list[numItems]= item;
        numItems++;
        }
      */  
      }

  }while(input != 'Q' && input != 'q');
  
   cout<<"==ITEMS TO BUY==\n";

  for(int x = 0; x < list.size(); x++)
    {
    //int y = 1;
    //y += x;
    //cout<<y;
    cout<<x+1<<" "<<list[x]<<endl;
    }
  
  return 0;
}
