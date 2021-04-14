#include<iostream>
#include<string>
#include<queue>
using namespace std;

void isBalanced(string p)
/**********
creates queue hence queuey

and creates limit as indicator to check if something is balanced
****/
{
   queue<char> queuey;
   int limit=1;
/********
adds entered elements into queue and redefines the length
increases in length per character with push
and enteres element to the front 
*****/
   for(int i=0;i<p.length();i++)
   {

      
       if(p[i]=='(') queuey.push(p[i]); 
       else
       {
          
/********
will get the front element and if it is ( then it will initiate
pop and remove it 
and if not it wont apply
*****/
           if(queuey.front()=='(' && queuey.size()>0) // pop if top is (
           {
               queuey.pop();
           }else
           {
               limit=0;
               break;
           }
       }

   }

  /*******
if the balanced (limit) and size of queue are both 0
the it is balanced
if not it is not balanced 
  ***********/
   if(limit && queuey.size()==0)
       cout<<"yes";
   else
       cout<<"no";

}

int main() {

string p;
cout<<"Are your parenthesis balanced?!\n";
cout<<"Enter Parenthesis pattern:  ";
cin >> p;

isBalanced(p);

}