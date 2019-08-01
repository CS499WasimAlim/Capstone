#include <stdio.h>
#include <stdlib.h>
#define rate 0.35

int main()
{
    double beg_mileage, /* beginning odometer reading*/
           end_mileage, /*final odometer reading*/
           miles, /* miles driven*/
           reimbursement;
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("Enter beginning odometer reading=>\n");
    scanf("%lf",&beg_mileage);
    printf("Enter ending odometer reading=>\n");
    scanf("%lf",&end_mileage);

    miles=end_mileage - beg_mileage; /*mileage driven*/
    reimbursement=miles*rate;

    printf("You traveled %f miles. At %f per mile\n", miles, rate);
    printf("Your reimbursement is %f", reimbursement);

    return 0;
}
