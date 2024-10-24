//c.structures
/*Name:Queen Esther Kinyanjui
Reg.no:CT101/G/22453/24*/
#include<stdio.h>
#include<string.h>
struct student{
  char title[30];
  char author[30];
  char ISBN[30];
  int  year_of_publication;
  float price;
  
}
book;
int main (){
  printf("Enter title:");
  scanf("%s",&book.title);
  printf("Enter author:");
  scanf("%s",&book.author);
  printf("Enter ISBN number:");
  scanf("%s",&book.ISBN);
  printf("Enter year_of_publication");
  scanf("%f",&book.year_of_publication);
  book.price=200.00;
  printf("Title:%s\n", book.title);
  printf("Author: %s\n",book.author);
  printf("ISBN:%s\n",book.ISBN);
  printf("Year_of_publication:%d\n",book.year_of_publication);
  printf("Price:%f\n",book.price);
  return 0;
  }


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 