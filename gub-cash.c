#include <stdio.h>
struct Gub_Kash{
    int send_money;
};
//Main Function Declaier
void send_money();
void payment();
void my_gub();
void cashout();
//My Gub Function Declaier
void ck_bl();
void ck_pass();
void ck_acc();
void help_line();
void option(){
    int choice;
    while(choice !=5){
        printf("\n\t\t\t\t--------Welcome To GUB-Kash--------\n");
        printf(" \t\t\t\t 1. Send Money(Without Charge).\n");
        printf(" \t\t\t\t 2. Payment Of GUB-Kash.\n");
        printf(" \t\t\t\t 3. Cash Out.\n");
        printf(" \t\t\t\t 4. My GUB-Kash\n");
        printf(" \t\t\t\t 5. Exit.\n");
        printf(" \t\t\t\t________________________________________\n");
        printf("\t\t\t\tChoice Option:");
        scanf("%d",&choice);

        switch(choice){
         case 1:
            send_money();
            break;
         case 2:
            payment();
            break;
         case 3:
            cashout();
            break;
         case 4:
             my_gub();
            break;

        }

    }

}
void send_money(){
    int bank_num, gub_routing,amaount,account_pass;
    printf("\t\t\t\tEnter GUB Bank No: ");
    scanf("%d",&bank_num);
    printf("\t\t\t\tEnter Routing Number: ");
    scanf("%d",&gub_routing);
    if(gub_routing==2590){
            printf("\t\t\t\tEnter Amount: ");
            scanf("%d",&amaount);
            printf("\t\t\t\tEnter Account pass: ");
            scanf("%d",&account_pass);
            if(account_pass==123){
                printf("\n\t\t\t\tTotal Tk      : %d\n", amaount);
                printf("\t\t\t\tTransgition ID: MYGUB1374\n");
                printf("\t\t\t\tSend Money Successfully..!\n\n");
                printf("\t\t\t\tTHANK YOU.\n\n");
            }else{
                printf("\t\t\t\tYour Account password is wrong..\n\n ");
            }

    }else{
         printf("\t\t\t\tRouting Number is not match.");
         printf("\n\t\t\t\tPlease try again.\n\n");
    }
}

void payment(){
    int office_num,pay_ammount,acc_pass;
    printf("\t\t\t\tEnter GUB Office Number: ");
    scanf("%d",&office_num);
    printf("\t\t\t\tEnter the Amount: ");
    scanf("%d",&pay_ammount);
    printf("\t\t\t\tEnter your account pass:");
    scanf("%d",&acc_pass);
    if(acc_pass==123){
                printf("\n\t\t\t\tTotal Tk      : %d\n", pay_ammount);
                printf("\t\t\t\tTransgition ID: MYGUB8789\n");
                printf("\t\t\t\tPayment Successfully..!\n");
                printf("\t\t\t\tTHANK YOU.\n\n");
    }else
     printf("\t\t\t\tYour Account password is wrong..\n\n ");
}
void cashout(){
    int agent,pay_ammount,acc_pass,referance;
   printf("\t\t\t\tGUB Agent Number: ");
   scanf("%d",&agent);
       printf("\n\t\t\t\t25 Tk Cash Back Every 1k Taka.and it's limited by just 3k\n\n");
       printf("\t\t\t\tEnter the Ammount: ");
       scanf("%d",&pay_ammount);
       printf("\n\t\t\t\tUse Referral code and You can get 50 taka.\n\n");
       printf("\n\t\t\t\tType Referral Code: ");
       scanf("%d",&referance);
       printf("\n\t\t\t\tYour Account pass:");
       scanf("%d",&acc_pass);
       if(acc_pass==123){
            printf("\n\t\t\t\tTotal Tk          : %d\n", pay_ammount);
                printf("\t\t\t\tTransgition ID: MYGUB7365\n");
             printf("\t\t\t\tCash Out Successfully..!\n");
             printf("\t\t\t\tCongratulation's you got 50 taka.\n\n");
          if(pay_ammount>=1000){
             printf("\n\t\t\t\tCash Back 25 Taka.\n");
          }
          else if(pay_ammount>=2000){
            printf("\n\t\t\t\tCash Back 50 Taka.\n");
          }
          else if(pay_ammount>=3000){
            printf("\n\t\t\t\tCash Back 75 Taka.\n");
          }
    }else
     printf("\t\t\t\tYour Account password is wrong..\n\n ");
}
void my_gub(){
    int choice2;
        while(choice2!=5){
            printf(" \t\t\t\t My GUB\n");
            printf(" \t\t\t\t 1. Check Balance.\n");
            printf(" \t\t\t\t 2. Your Account Details.\n");
            printf(" \t\t\t\t 3. Check Password.\n");
            printf(" \t\t\t\t 4. Help-Line.\n");
            printf(" \t\t\t\t 5. Back.\n");
            printf("\t\t\t\t___________________________________");
            printf("\n\t\t\t\tChoice one: ");
            scanf("%d",&choice2);

            switch(choice2){
            case 1:
                ck_bl();
                break;
            case 2:
                ck_acc();
                break;
            case 3:
                ck_pass();
                break;
            case 4:
                help_line();
                break;
            }
        }
}
void ck_bl(){
    int pass;
     printf("\t\t\t\tEnter your password: ");
     scanf("%d",&pass);
         if(pass==123){
            printf("\t\t\t\tYour Account Balance : 15,000\n");
         }else
         printf("\t\t\t\tPlease enter correct password.\n");
}

void ck_acc(){
    int pass;
     printf("\t\t\t\tEnter your password: ");
     scanf("%d",&pass);
         if(pass==123){
            printf("\n\n\t\t\t\tSecret and Privacy. Please don't share anyone.\n");
            printf("\t\t\t\tThis is fully Your Risk, If you share Anyone.\n");
            printf("\t\t\t\tOur authorities not responsible.\n\n");
            printf("\t\t\t\tAccount Owner name                  : Mohammad Rony\n");
            printf("\t\t\t\tYour NID-number                     : 1245 0980 4576\n");
            printf("\t\t\t\tThe number you used open the account: +8801865-582517\n");
            printf("\t\t\t\tYour E-mail                         : ronychowdury2019@gmail.com\n");
            printf("\t\t\t\tYour GUB ID                         : 213 902 058\n\n\n");

         }else
         printf("\t\t\t\tPlease enter correct password.\n");
}
void ck_pass(){
   int pass;
     printf("\t\t\t\tEnter your password: ");
     scanf("%d",&pass);
         if(pass==123){
            printf("\t\t\t\tYour Account password.\n");
            printf("\t\t\t\t___________________________________\n");
            printf("\t\t\t\tWe are showing your password in binary number's\n");
            printf("\t\t\t\tfor security purpose.\n\n");
            printf("\t\t\t\tPassword is: 1111011\n");
            printf("\t\t\t\t___________________________________\n\n");
         }else
         printf("\t\t\t\tPlease enter correct password.\n");
}
void help_line(){
            printf("\t\t\t\t__________________________CONTACT US_____________________________\n\n");
            printf("\t\t\t\tContact Number      : +8801965-86850\n");
            printf("\t\t\t\t                    : +8801765-86850\n");
            printf("\t\t\t\tOur Help-Line no    : 2139\n");
            printf("\t\t\t\tOur Website         : https://www.mygub.com\n");
            printf("\t\t\t\tOur Facebook Page   : https://www.facebook/page/mygub\n");
            printf("\t\t\t\t_________________________________________________________________\n\n");
}
int main(){
    option();
}
