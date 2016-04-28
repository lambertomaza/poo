#include <cstdlib>
#include <iostream>

using namespace std;
int palindroma(char[]);

int main(int argc, char *argv[])
{
char pal1[]="A no dar a Maradona";
bool pali=false;
   int count=0;             
   while(pal1[count]!='\0'){count++;}
   int j,i=1;
   for(j=0;j<count;j++){
        if(tolower(pal1[j])==tolower(pal1[count-i]))
        {
        i++;
        pali=true;
        }
        else{
        if(pal1[j]==' '){j++;}
        else{if(pal1[count-i]==' '){i++;}
        }
             }
             }
             if(pali=true)
             cout<<pal1<<" es palindromo";

    system("PAUSE");
    return EXIT_SUCCESS;
}


