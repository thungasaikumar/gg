/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class browser
{
     private:
        int top=-1;
        int size=10;
        string str[10];
        
    public:
        string push()
        {
            top++;
            if(top!=(size-1))
            {
                cout<<"Enter the address \n";
                cin>>str[top];
                return str[top];
            }
            else 
                 return "invalid";
        }
        string pop()
        {
            top--;
            if(top!=-1)
            {
                return str[top];
            }
            else 
            {
                return "invalid";
            }
        }
    
   
}a;


int main()
{
    int inp=1;
    string x;
    while(inp!=0)
    {
      cout<<"Enter 1 to go back \t Enter 2 to go forward \t Enter 0 to Exit \n" ;
      cin>>inp;
      if(inp==1)
      {
          x=a.pop();
      }
      else if(inp==2)
      {
          x=a.push();
      }
      else 
         cout<<"Invalid input";
        
        cout<<x<<"\n";
    }
    
  
         
    return 0;
}
