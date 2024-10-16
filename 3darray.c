//Arrays:3D array
/*Name:Queen Esther Kinyanjui
Reg.no:CT101/G/22453/24*/

#include <stdio.h>

int main(){
  int i,j,k;
  int marks[2][2][3]={
    
    {{5,10,15},{20,25,30}}
  ,{{35,40,45},{50,55,60}}
  
  };
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      for(k=0;k<3;k++){
        printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
        }
        }
        }
        return 0;
        }


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 