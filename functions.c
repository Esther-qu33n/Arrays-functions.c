//program to calculate electricity bill using functions
/*Name:Queen Esther Kinyanjui
Ref.no:CT101/G/22453/24*/
# include<stdio.h>

int multiplication(int x,int y,int z);
int finalproduct(int x);

int main(){
  //total bill=x,Chargeperunit=y,Unitsused=z
  
  char customername[]={};
  int customerid;
  float x,y,z ;
  
printf("Enter customername:");
scanf("%s",&customername);
printf("Enter customerid:");
scanf("%d",&customerid);
printf("Enter Unitsused:");
scanf("%f",&z);

if(z<=199)
   {y=1.20;}
else if(z>=200 & z<400 )
      {y=1.50;}
else if(z>=400 & z<600)
      {y =1.80;}
else if(z>=600)  
    {y=2.0;}
  
x= z*y;

if(x<100) 
     {x=100;}

else if (x>400)
        {x=x*1.15;}
        
else { printf("No surge cost");
};

printf("customername is %s\n",customername);
printf("customerid is%d\n",customerid);
printf("Unitsused %f\n",z);
printf("Chargeperunit %f\n",y);
printf("Tbill %f\n",x);

return 0;
}
//Userdefined function1 
int multiplication(int x,int y,int z){
  x=y*z;
  return x;
}
// Userdefined function2
int finalproduct (int x){
  x=x*1.15;
  return x;
  
}


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 