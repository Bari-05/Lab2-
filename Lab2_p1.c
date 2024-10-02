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
#define beans_espresso 8
#define beans_capuccino 8
#define beans_mocha 8
#define water_espresso 30
#define water_capuccino 30
#define water_mocha 39
#define milk_capuccino 70
#define milk_mocha 160
#define choc_mocha 30

int main_menu(){
  int i;
  while (1){
    int admin_pass_input;
    printf("1. Order Coffee \n");
    printf("2. Admin \n");
    printf("0. Exit \n");
    printf(" please select ur option  ");
    scanf("%d", &i);
    if(i==0)
        break;  // exit the loop
    else if (i<0 || i>2)
       {
       printf(" Invalid choice. \n");       
       continue;  
       }
      
    else if (i==2){
      printf(" Admin Selected \n Enter admin password: ");
       scanf("%d",&admin_pass_input);
       if(admin_pass_input==admin_pass)
         printf("password correct");
         admin();
       else if(admin_pass_input!= admin_pass)
        printf("password incorrect. \n");
        continue;

      admin()
    }
     else if (i==1){
      chose_coffee();
      break;
      
    }
      
  }
}

//admin funct
admin(){
  printf("total amount made: %f",total_made);

}


// chose coffe funct
chose_coffee(){
  printf("U Have selected to order coffee \n");
  while(1){
    printf("1. Espresso \n");
    printf("2. Capuccino \n");
    printf("3. Mocha \n");
    printf("Select your coffee: \n");
    scanf("%d",&j);
        
    if (j==1){
      printf("U have selected Espresso. Price: %f AED",cost_espresso);
      espresso_selection()
      break;
    }
    else if (j==2){
      printf("U have selected Capuccino. Price: %f AED",cost_cappucino);
    }
    else if(j==3){
      printf("U have selected Mocha. Price: %f AED",cost_mocha);
    }
  }
}





















//functions
espresso_selection(){  
    printf("Confirm coffee selection (1/2) : ");
    scanf("%d",&ch);
    while(1){
      if (ch==1){
        printf("\n You have selected espresso \n");
        curr_quantity_coffee=curr_quantity_coffee-beans_espresso;
        curr_quantity_water=curr_quantity_water-water_espresso;
        
        
      }
      else if (ch==2){
        printf("Going back to previous option \n");
        continue;
      }
      else {
        printf("Invalid Choice. \n");
        continue;
      }
    }
}


















//main body of code.
int main() {
  
  int j;
  int ch;
  int curr_quantity_choc=400;
  int curr_quantity_coffee=200;
  int curr_quantity_milk=1000;
  int curr_quantity_water=1000;
  float total_made;

  main_menu();
}



