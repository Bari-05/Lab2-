#include<stdio.h>
#define admin_pass 1245 
#define max_quantity_coffee 100
#define max_quantity_water 1000
#define max_quantity_milk 1000
#define max_quantity_choc 400
#define cost_espresso 3.5
#define cost_cappucino 4.5
#define cost_mocha 5.5
#define min_coffee 8
#define min_water 39
#define min_milk 160
#define min_choc 30

int main() {
  int i;
  int j;
  

  //infinite loop
  while (1){
    int admin_pass_input;
    printf("1. Order Coffee \n");
    printf("2. Admin \n");
    printf("0. Exit \n");
    printf(" please select ur option  ");
    scanf("%d", &i);
    if(i==0)
        break;  // exit the loop
    else if (i<0)
       {
       printf(" Invalid choice. \n");       
       continue;  
       }
    else if (i>2)
       {
       printf(" Invalid choice. \n");       
       continue;  
       }

    else if (i==1){
      printf("U Have selected to order coffee \n");
      while(1){
        printf("1. Espresso \n");
        printf("2. Capuccino \n");
        printf("3. Mocha \n");
        printf("Select your coffee: \n");
        scanf("%d",&j);
        
         if (j==1){
          printf("U have selected Espresso. Price: %f AED",cost_espresso);
          //confirm function???

          break;
        }
        else if (j==2){
          printf("U have selected Capuccino. Price: %f AED",cost_cappucino);

        }
      }
    }
      
      
      
    else if (i==2)
      
       printf(" Admin Selected \n Enter admin password: ");
       scanf("%d",&admin_pass_input);
       if(admin_pass_input==admin_pass)
         printf("password correct");
       else if(admin_pass_input!= admin_pass)
        printf("password incorrect. \n");
        continue;

      


  } // end of loop
} // end of main



