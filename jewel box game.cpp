#include<iostream>
#include<string>
#include <ctime>
using namespace std;

void ChangePwd(int &diceVal, string &password)
{
    cout<<"\nDice Value Received: "<<diceVal<<endl;
    cout<<"Password Received: "<<password<<endl;
    cout<<"Please enter the new password for jewel box "<<diceVal<<" :";
    cin>>password;
    cout<<"\nPassword Changed"<<endl;
}
int main()
{
   int v1=0,v2=0,v3=0,v4=0,v5=0,v6=0; 
   char loop;
   int dice=0;
   string jBox1,jBox2,jBox3,jBox4,jBox5,jBox6,pass,newPass=" ";
   jBox1="abc";
   jBox2="def";
   jBox3="ghi";
   jBox4="jkl";
   jBox5="mno";
   jBox6="pqr";
   do
   {
     srand(time(0));
     dice = (rand() % 6)+1;
     cout<<"Value after rolling the dice is: "<<dice<<endl;
     if (dice == 1)
     {
         cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
         while(pass!=jBox1)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox1)
         {
             cout<<"Password matched";

             ChangePwd(dice, jBox1);

             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox1<<endl;
         }
         
         v1++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v1<<" time";
     }
     if (dice == 2)
     {
         cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
        while(pass!=jBox2)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox2)
         {
             cout<<"Password matched";
             ChangePwd(dice, jBox2);
             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox2<<endl;
         }
          v2++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v2<<" time";
     }
     if (dice == 3)
     {
         cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
        while(pass!=jBox3)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox3)
         {
             cout<<"Password matched";
             ChangePwd(dice, jBox3);
             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox3<<endl;
         }
          v3++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v3<<" time";
     }
     
     if (dice == 4)
     {
         cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
        while(pass!=jBox4)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox4)
         {
             cout<<"Password matched";
             ChangePwd(dice, jBox4);
             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox4<<endl;
         }
          v4++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v4<<" time";
     }
     
     if (dice == 5)
     {
         cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
        while(pass!=jBox5)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox5)
         {
             cout<<"Password matched";
             ChangePwd(dice, jBox5);
             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox5<<endl;
         }
          v5++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v5<<" time";
     }
     if (dice == 6)
     {
        cout<<"please enter the password for jewel box "<<dice<<" :";
         cin>>pass;
        while(pass!=jBox6)
         {
             cout<<"Sorry Invalid password!"<<endl;
             cout << "Please enter the correct password :";
             cin >> pass;
        }
         if(pass == jBox6)
         {
             cout<<"Password matched";
             ChangePwd(dice, jBox6);
             cout<<"\nThe new password for jewel box "<<dice<<" is: "<<jBox6<<endl;
         }
          v6++;
         cout<<"\nThe password for jewel box "<<dice<<" has been changed for "<<v6<<" time";
     }
     cout<<"\nPress Y or y to run again otherwise press any key to exit: ";
     cin>>loop;
   } while (loop == 'Y' || loop == 'y');
   
}