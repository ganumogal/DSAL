#include<iostream>
#include<string.h>
using namespace std;
struct HASH
{
 long int key;
 char name[20];
}HASH [10];

class HAsh
{      

public:

      HAsh()
          {
            for(int i=0;i<10;i++)
         	{
                  HASH[i].key=0;
                  strcpy(HASH[i].name,"NULL");
				
		}




          }
      void insert();
      int  search(long int x);
      void display();
      void Delate(long int y);
};



int HAsh::search(long int x)
        {
           int flag=0;
            for(int i=0;i<10;i++)
		{
                  if(HASH[i].key==x)
			{
			flag=1;
                        cout<<"your number found at index"<<i<<endl;
			return i;	
			}		



		}       

            if(flag==0)
		{
		 cout<<"key not found";
                 return -1;	
		}


        }

void HAsh::Delate(long int x)
     {
       int index=search(x);
        if(index==-1)
          cout<<"Element is not found";
        else
          { cout<<"delating the number"<<HASH[index].key<<endl;
            HASH[index].key=0;
            strcpy(HASH[index].name,"Null");       

          }
        


     }


void HAsh::display()
     {
            cout<<"index   Number   Name  "<<endl;
       for(int i=0;i<10;i++)
          {
            
              cout<<i<<"    ---->"<<HASH[i].key<<"---->"<<HASH[i].name<<endl;



          }
     }

void HAsh::insert()
{
   long int x;
   char arr[20];
    
       cout<<"Enter Mobile number"<<endl;
       cin>>x;
       cout<<"Enter Name";
       cin>>arr;
       int index=x%10;
  
          if(HASH[index].key==0)
              {
                  HASH[index].key=x;
                  strcpy(HASH[index].name,arr);
              }
          else if(index==HASH[index].key%10)
              {
               
                 for(int i=index+1;i<10;i++)
                       {
                         if(HASH[i].key==0)
                           {
                             HASH[i].key=x;
                             strcpy(HASH[i].name,arr);
                           }
                         
 
                       }
                  if(index==9)
                     {
                         for(int i=0;i<index;i++)
                            {
                                if(HASH[i].key==0)
                                  {
                                     HASH[i].key=x;
                                     strcpy(HASH[i].name,arr);
                                  }
                         
 
                            }
                      }


	      }

     


}

int main()
{ HAsh h;
  int choice;
  long int x;
  long int y;
  do
  {
    cout<<"1.Insert element\n 2.display \n3.search\n 4.Delate\n";
    cout<<"enter your choice";
    cin>>choice;
    switch(choice)
       {
         case 1:h.insert();
                break;
         
         case 2:h.display();
                break;
         
         case 3:cout<<"enter Number";
                cin>>x;
                h.search(x);
                break;
         
         case 4:cout<<"enter Number";
                cin>>y;
                h.Delate(y);
                break;
       }

 }while(choice!=0);


return 0;
}
