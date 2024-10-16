#include<stdio.h>
#define admin_pass 1245 
#define max_quantity_coffee 100
#define max_quantity_water 1000
#define max_quantity_milk 1000
#define max_quantity_choc 400
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
float cost_espresso=3.5;
float cost_cappucino=4.5;
float cost_mocha=5.5;
float money,coin,change,coin1;
int j,ch,ch1,ch2,ad,ad1,con;
int curr_quantity_choc=400;
int curr_quantity_coffee=100;
int curr_quantity_milk=1000;
int curr_quantity_water=1000;
float total_made;

void pay_espresso(){
  while(1){
    printf("Enter amount of 1.00 coins: \n");
    scanf("%f",&coin);
    
    printf("Enter amount of 0.50 coins: \n");
    scanf("%f",&coin1);
    
    money+=((coin*1)+(coin1*0.5));
    if (money>=cost_espresso){
      change=money-cost_espresso;
      printf("Your Payment is Confirmed, Please Collect ur Coffee!\n Your Change is %2.2f AED",change);
      break;
    }
    else{
      printf("Insufficient Funds, Please Enter the rest \n");
      continue;
    }
  } 
}

void pay_cappucino(){
  while(1){
    printf("Enter amount of 1.00 coins: \n");
    scanf("%f",&coin);
    
    printf("Enter amount of 0.50 coins: \n");
    scanf("%f",&coin1);
    
    money+=((coin*1)+(coin1*0.5));
    if (money>=cost_espresso){
      change=money-cost_espresso;
      printf("Your Payment is Confirmed, Please Collect ur Coffee!\n Your Change is %2.2f AED",change);
      break;
    }
    else{
      printf("Insufficient Funds, Please Enter the rest \n");
      continue;
    }
    
  }
  
}

void pay_mocha(){
  while(1){
      printf("Enter amount of 1.00 coins: \n");
    scanf("%f",&coin);
    
    printf("Enter amount of 0.50 coins: \n");
    scanf("%f",&coin1);
    
    money+=((coin*1)+(coin1*0.5));
    if (money>=cost_espresso){
      change=money-cost_espresso;
      printf("Your Payment is Confirmed, Please Collect ur Coffee!\n Your Change is %2.2f AED",change);
      break;
    }
    else{
      printf("Insufficient Funds, Please Enter the rest \n");
      continue;
    }
    
  }
  
}

void espresso_selection(){  
    while(1){
      
      printf("Confirm coffee selection (1/2) : ");
      scanf("%d",&ch);

      if (ch==1){
        printf("\n You have selected espresso \n");
        curr_quantity_coffee=curr_quantity_coffee-beans_espresso;
        curr_quantity_water=curr_quantity_water-water_espresso;
        pay_espresso();
        break;
        
        
      }
      else if (ch==2){
        printf("Going back to previous option \n");
        break;
      }
      else {
        printf("Invalid Choice. \n");
        continue;
      }
    }
}

void capp_selection(){  
    while(1){
      printf("Confirm coffee selection (1/2) : ");
      scanf("%d",&ch1);

      if (ch1==1){
        printf("\n You have selected cappucino \n");
        curr_quantity_coffee=curr_quantity_coffee-beans_capuccino;
        curr_quantity_water=curr_quantity_water-water_capuccino;
        curr_quantity_milk=curr_quantity_milk-milk_capuccino;
        pay_cappucino();
        break;
        
      }
      if (ch1==2){
        printf("Going back to previous option \n");
        break;
      }
      else {
        printf("Invalid Choice. \n");
        continue;
      }
    }
}

void mocha_selection(){  
    while(1){
      printf("Confirm coffee selection (1/2) : ");
      scanf("%d",&ch2);

      if (ch2==1){
        printf("\n You have selected mocha \n");
        curr_quantity_coffee=curr_quantity_coffee-beans_mocha;
        curr_quantity_water=curr_quantity_water-water_mocha;
        curr_quantity_milk=curr_quantity_milk-milk_mocha;
        curr_quantity_choc=curr_quantity_choc-choc_mocha;
        pay_mocha();
        break;
        
      }
      else if (ch2==2){
        printf("Going back to previous option \n");
        break;
        
      }
      else {
        printf("Invalid Choice. \n");
        continue;
      }
    }
}

void chose_coffee(){

  printf("U Have selected to order coffee \n");
  while(1){
    printf("1. Espresso \n");
    printf("2. Capuccino \n");
    printf("3. Mocha \n");
    printf("Select your option: \n");

    scanf("%d",&j);
    if (j<0||j>3 ){
      printf("*****INVALID INPUT***** \n");
      continue;
    }

    else if (j==1){
      printf("U have selected Espresso. Price: %2.2f AED \n",cost_espresso);
      espresso_selection();  
      if (ch==1){
        //go back?
        break;
      }
    }
    else if (j==2){
      printf("U have selected Capuccino. Price: %2.2f AED \n",cost_cappucino);
      capp_selection();
      if (ch1==1){
        break;
      }
    }
    else if(j==3){
      printf("U have selected Mocha. Price: %2.2f AED \n",cost_mocha);
      mocha_selection();
      if (ch2==1){
        break;
      }
    }
  }
}

void admin(){
  while(1){
    if(curr_quantity_coffee<min_coffee){
      printf("******REPLENISH COFFEE****** \n");
    }
    if(curr_quantity_milk<min_milk){
      printf("******REPLENISH MILK****** \n");
    }
    if(curr_quantity_water<min_water){
      printf("******REPLENISH WATER****** \n");
    }
    if(curr_quantity_choc<min_choc){
      printf("******REPLENISH CHOCOLATE SYRUP****** \n");
    }

    printf("1.Quantity & Amount Made. \n");
    printf("2.Replenish Ingredients. \n");
    printf("3.Change Price of Drink. \n");
    printf("0. Return to prev. menu. \n");
    printf("Please Select ur option: \n");
    scanf("%d",&ad);
    if(ad==1){
      printf("Quantity of Ingredients: \n");
      printf("Water : %d mL. \n",curr_quantity_water);
      printf("Milk : %d mL. \n",curr_quantity_milk);
      printf("Chocolate Syrup : %d mL. \n",curr_quantity_choc);
      printf("Coffee Beans : %d . \n",curr_quantity_coffee);
      printf("Total Amount Made: %2.3f \n",total_made);
      

    }
    if(ad==2){
      printf("Replenishing Ingredients \n");
      curr_quantity_coffee=max_quantity_coffee;
      curr_quantity_choc=max_quantity_choc;
      curr_quantity_milk=max_quantity_milk;
      curr_quantity_water=max_quantity_water;
      printf("*****INGREDIENTS REPLENISHED***** \n");

    }

    if (ad==3){
      while(1){

        printf("1.Change cost of Espresso \n");
        printf("2.Change cost of Capuccino \n");
        printf("3.Change cost of Mocha \n");
        printf("Enter which to change amount of: \n");
        scanf("%d",ad1);
        if (ad1==1){
          printf("Confirm? (1/2)");
          scanf("%d",con);
          if (con==1){
            printf("Current cost of Espresso: %2.3f \n",cost_espresso);
            printf("New cost of Espresso: \n");
            scanf("%2.3f",cost_espresso);  
          }

        }
      }
    
    }

    
  }
 

}

int main_menu(){
  int i;
  while (1){
    int admin_pass_input;
    printf("1. Order Coffee \n");
    printf("2. Admin \n");
    printf("0. Exit \n");
    printf(" please select ur option  ");
    scanf("%d", &i);
    if(i==0){
      printf("Thank You!");
      break;  // exit the loop
    }
    if (i<0 || i>2 )
       {
       printf(" Invalid choice. \n");       
       continue;  
       }
      
    else if (i==2){
      printf(" Admin Selected \n Enter admin password: ");
      scanf("%d",&admin_pass_input);
      if(admin_pass_input==admin_pass){
        printf("password correct \n");
        admin();
      }
      else if(admin_pass_input!= admin_pass){
        printf("password incorrect. \n");
        continue;
      }
      admin();
    }
    else if (i==1){
      chose_coffee();
      break;

      
    }
      
  }
}

//main body of code.
int main() {
  


  main_menu();
}



