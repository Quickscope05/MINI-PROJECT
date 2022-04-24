# include<stdio.h>
int main()
{
    char name[100];
    int unitsconsumed;
    double mobilenumber;
    int amount = 0;
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter  Your UNINTSCONSUMED :");
    scanf("%d",&unitsconsumed);
    printf("Enter your Mobile Number :");
    scanf("%lf",&mobilenumber);
    if(unitsconsumed==0){ 
    amount=0;}
    if(unitsconsumed<=30){
    amount = unitsconsumed*4.25;}
    else if(unitsconsumed>=31&&unitsconsumed<=100){
    amount = unitsconsumed*5.0;}
    else if(unitsconsumed>=101&&unitsconsumed<=200){
    amount = unitsconsumed*6.75;}
    else if(unitsconsumed>201){
    amount = unitsconsumed*7.50;}
    printf("ELECTRICITY BILL\n");
    switch(amount){
        case 0:
        printf("No Bill for You\n");
        break;
    }
    printf("Name : %s\n",name);
    printf("YOUR MOBILE NUMBER : %.0lf\n",mobilenumber);
    printf("YOUR TOTAL AMOUNT IS : %d\n" ,amount);
    printf("UNITSCONSUMED THIS MONTH : %d\n" ,unitsconsumed);
    printf("THANK YOU");
    return 0;
}