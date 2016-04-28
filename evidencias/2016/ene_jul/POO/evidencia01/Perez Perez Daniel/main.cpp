#include <iostream>
#include <string.h> /*strlen()*/ /*header required in linux not required in windows*/
using namespace std;

//Palindromo
int main(int argc, char** argv) {
    bool palindromo=true;
     char palabra[100];
     cout<<"Ingrese una Palabra: ";
     cin.getline(palabra,100);

for(int i=0;i<strlen(palabra);i++)
     {    
          if(tolower(palabra[i])!=tolower(palabra[strlen(palabra)-1-i]))
          {
               palindromo=false;                                                          
               break;
          }
     } 
if(palindromo)
cout<<palabra<<" es palindromo \n";
else
cout<<palabra<<" no es palindromo \n";
//     system("PAUSE");   /*not necessary in linux*/
//     return EXIT_SUCCESS;
     return 0;
}
