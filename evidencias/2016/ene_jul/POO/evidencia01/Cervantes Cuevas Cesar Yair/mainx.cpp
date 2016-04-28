#include <iostream>
#include<stdio.h>
//#include<conio.h>   /*not required in linux*/
#include<string.h>
using namespace std;

int palindroma(char [],int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	 char palabra[]="avion ruta saturno iva";
	  int cnt=0;
 	while(palabra[cnt]!='\0')cnt++;
	  cnt=cnt-1;
	if(palindroma(palabra,cnt)==1){ 
	cout<<"Es palindroma"<<endl;
}
else{	cout<<"No es palindroma"<<endl;
}
//  system ("PAUSE");   /*not required in linux*/
 
	return 0;
}
int palindroma(char palabra[], int cnt)
{ int i,z,k=0,p;
	
	if(cnt!=2){
	for(i=0,z=cnt;i<=cnt/2;i++,z--){  if(palabra[i]==' '){
									  				   	  i++;
									  				   	  if(palabra[z]==' '){
														  				   z--;
														  				   goto here;
																		   }
														  goto here;				   	  
														  }
									else{
										 if(palabra[z]==' '){
		  				   				 				  	 z--;
								 	 						 goto here;
															   }
														  goto here;				   	  
										 }					  
									  here:
									  // if(i==z) break;
									       if(palabra[i]!=palabra[z])
             														break;
										 else
                													k++;
									}
	        }
	        
 else{
 	  for(i=0,z=cnt;i<=cnt/2;i++,z--){
	  								  if(i==z) break;
									       if(palabra[i]!=palabra[z])
             														break;
										 else
                													k++;
										}
	   }
   if(k==cnt/2)return 1;
   else
   return 0;
	
	
}

