#include <iostream>
#include <fstream>
using namespace std;
int main(){
   fstream avi;
   avi.open("avi.txt",ios::out);
   if(!avi){
    cout<<"file not created";
   }
   else{
    cout<<"File created Successfully";
    avi<<"Welcome to wonderla!!!!";
    avi.close();
   }
return 0;
}
