#include <stdio.h>


void payment(){
    int tel_no;
    int fare=700;
    printf("\nWe accept mobile payments via M-pesa\n Please enter your mobile number: \n");
    scanf("%d",&tel_no);

    printf("Our fare is set at %d, if you accept that please enter your pin in the pop up window: ", fare);
    //Simulate transaction process.

    printf("\n SUCCESS!! Payment completed and your seat is booked.");
}


void bus_book(){
     int selector;
     printf("Welcome to the bus booking section:\n Our active Matatu is KBX 123J \n Odd seats are window seats and even seats are the inner seats\n Our available seats are:  1,3,4,7,9, 10,11,15,16,18,19,20,22,23,32,33\n Which seat would you like? ");
     scanf("%d", &selector);

    printf("To confirm your booking for seat number %d, please proceed to payment: ", selector);
    payment();
}
void cancel_book(){
    int seat;
    printf("For which seat would you like to cancel?\n");
    scanf("%d", & seat);

    printf("Your booking is now cancelled :(\n");
}

void welcome_section(){
    int choice;
    printf("Welcome to Pamoja Sacco Booking Platform: \nEnter 1 to book a bus or 2 to cancel an existing booking: \n");
    scanf("%d", &choice);
    //printf("%d ", choice);

    retry:
    if (choice==1){
        bus_book();
    }else if (choice==2)
    {
        cancel_book();
    }else{
        printf("Invalid choice, please select between 1 and 2 to book or cancel booking respectively\n");
        scanf("%d", &choice);
        goto retry;
    }
    
    
}

int main(){
    welcome_section();

    
}