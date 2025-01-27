#include<stdio.h>

int main(){
    float salary, increment;
    printf("Enter salary: ");
    scanf("%f",&salary);
    if(salary<=100000 && salary>=50000){
        increment=salary*0.15;
    }
    else if(salary>=8000 && salary<50000 && salary>0){
        increment=salary*0.10;
    }
    else {
        printf("Your salary is invalid for increment\n");
        return 0;
    }
    salary +=increment;
    printf("Increment:%.3f\nTotal_salary:%.3f", increment, salary);
    
    return 0;
}