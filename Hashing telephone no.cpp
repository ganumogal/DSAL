#include<iostream>
using namespace std;
long int mn[10];
void insertion()
{
  long int x;
  cout<<"enter your mobile number";
  cin>>x;
  long int index=x%10;
  for(int i=0;i<10;i++)
     {
     
       if(mn[index]==0)
       {
       
          mn[index]=x;
          break;
       
       }
       else
       {
       
        index=index+1;
        if(index==9)
        {
          index=0;
        }
       }
     }
}
void display()
{

   cout<<"key"<<"--->"<<"value"<<endl;
   for(int i=0;i<10;i++)
   {   
      cout<<i<<"--->"<<mn[i]<<endl;  
   }
}
void Search()
{
  int flag =0;
  long int tn;
  cout<<"enter number to search"<<endl;
cin>>tn;
  for(int i=0;i<10;i++)
  {
       if(mn[i]==tn)
       {
          cout<<"element is at index"<<i<<endl;
          flag = 1;
          break;
       }
  }
  if(flag==0)
  {
    cout<<"number is not present in directory"<<endl;
  }
}
void Delation()
{
  int flag=0;
  long int tn;
  cout<<"enter number to delete:"<<endl;
cin>> tn;
  for(int i=0;i<10;i++)
  {
       if(mn[i]==tn)
       {
          mn[i]=0;
          flag =1;
          break;
       }
  }
  if(flag==0)
  {
    cout<<"number is not present in directory"<<endl;
  }
}
int main()
{ int choice;

  do
  {
    cout<<"1.Insertion \n 2.Delation \n 3.Search \n 4.Display \n 5. exit"<<endl;
    cout<<"enter your choice";
    cin>>choice;
    switch(choice)
    {
    
    case 1:insertion();
           break;
    case 2:Delation();
           break;       
    case 3:Search();
           break;
    case 4:display();
           break;


    case 5:return 0;
           break;              
    
    
    
    
    }
    }while(choice!=0);
  
  
  
  
}
  




