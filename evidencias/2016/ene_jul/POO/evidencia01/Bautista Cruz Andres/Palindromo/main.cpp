#include <iostream>
#include <string.h>     /*required in linux*/
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int palparr(char [],char []);
int palindroma(char []);


int main(int argc, char** argv) {
  //char cad1[]="ANITA LAVA LA TINA";
  char cad1[]="a no dar a maradona";
  char cad2[]="ESIME, ESCOM, UPIBI y UPIITA son ECUs del IPN";
  if(palparr(cad1,cad2)==1){
    cout<<cad1<<" esta incluida en "<<cad2<<endl;
  }else{
    cout<<"cad1 no fue encontrada en cad2"<<endl;
  }

if(palindroma(cad1)==1){
   cout<<"La palabra es un palindroma"<<endl;
   }
   else{
   cout<<"La palabra no es un palindroma"<<endl;
   }

cout<<"TOTAL DE PALABRAS: "<<strlen(cad1)<<endl;

//  system("PAUSE");          /*not required in linux*/
  return 0;
}//end main()

/**
busca la ``palabra'' en la cadena pal dentro del parrafo en la 
cadena parr. 
*/
int
palparr(char pal[],char parr[])
{
  int cnt=0,ide=0,ult,coincid=0; /*ult: ultimo char para buscar,coincid: coincidencia*/
  while(pal[cnt]!='\0')cnt++;  /*cnt: num de chars en pal*/
  while(parr[ide]!='\0')ide++; /*ide: num de chars en parr*/
  /* ult+cnt=ide+1*/
  for(int i=0;i<=ide-cnt;i++)  //ult-1,ult,...,ide-1: ult-1+cnt=ide-1 ==> ult=ide-cnt 
  {
    for(int j=i;j<=i+cnt-1;j++)
    {
      if(parr[j]!=pal[j-i]){
        break;
      }
      coincid++;
    }
    if(coincid==cnt){
      return 1;
    }
    coincid=0;
  }
  return 0;
}


int palindroma(char pal[]){
  int cont=strlen(pal)-1; 
  int ret;
  for(int i=0;i<cont+1;i++){
     if(pal[i]==pal[cont]){
                    ret=1;}
     else if(pal[i]==' '){
            pal[i]=pal[i+1];
            cont=cont+1;
         }
     else if(pal[cont]==' '){
            pal[cont]=pal[i-1];
            i=i-1;
         }
     else{
          ret=0;break;}
     cont=cont-1;
     cout<<"salida:"<<pal[cont]<<endl;
}
return ret;
}



