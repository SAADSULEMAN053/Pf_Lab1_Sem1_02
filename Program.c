#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
         /*Variable Declarations*/
    int semester,counter=1,subjects,counter_2,marks,CHD;
    float CP=0.0; // CP means Credit Points
    float collective_CP=0.0;
    float total_CP=0.0;
    float sem_gpa=0.0; // sem_gpa means semester gpa
    char grade,signs;
    int count_prob=0; // variable for counting no of probabtions
    float c_gpa=0.0;
    /* _______________________________________*/

    again:  // label of goto statement

    printf("Enter Total semesters: ");
    scanf("%d",&semester);

      /* if statement in case user inputs semester greater than 8*/

    if(semester>8 || semester<1)
        {
            printf("\nYou have entered an invalid amount of semester, Please Enter Again\n");
            printf("\nHit Enter Key to input the total semesters again\n");
            getch();
            system("cls");
            printf("\n");
            goto again;
        }

        /*outer loop for asking how many subjects student has studied in a semester*/

    while(counter<=semester)
        {
            label:
            printf("\n\nEnter the no. of subjects you took in semester %d: ",counter);
            scanf("%d",&subjects);
            if(subjects>=8 || subjects<=0)
                {
                    printf("\n\nMaximum Subject that you can take in one semester is 7, please enter the no. of subjects again.\n");
                    printf("\n\nPress enter to Input subjects again: ");
                    getch();
                    goto label;
                }

                /* inner loop used for entering marks for subject in a semester */

            for(counter_2=1;counter_2<=subjects && marks!=-1;counter_2++)
                {
                    printf("\n_________READ__________\n");
                    printf("\n\nEnter Marks in subject %d ",counter_2);
                    printf("\nOr enter -1 in place of marks if you do not wish to enter marks for more subjects in semester %d",counter_2);
                    printf("\n\n_______ENTER MARKS_______\n\n");
                    printf("\n\tMarks: ");
                    scanf("%d",&marks);

                    /* bunch of if statements for grading and assigning credit points for obtained marks*/

                    if(marks>=101)
                        {
                            marks=50;
                        }
                    if(marks<-1)
                        {
                            marks=50;
                        }
                    if(marks>=85)
                    {
                        grade='A';
                        switch(marks)
                        {
                        case 85:
                        CP=3.67;
                        break;
                        case 86:
                        CP=3.69;
                        break;
                        case 87:
                        CP=3.71;
                        break;
                        case 88:
                        CP=3.73;
                        break;
                        case 89:
                        CP=3.75;
                        break;
                        case 90:
                        CP=3.77;
                        break;
                        case 91:
                        CP=3.79;
                        break;
                        case 92:
                        CP=3.81;
                        break;
                        case 93:
                        CP=3.84;
                        break;
                        case 94:
                        CP=3.87;
                        break;
                        case 95:
                        CP=3.90;
                        break;
                        case 96:
                        CP=3.92;
                        case 97:
                        CP=3.94;
                        break;
                        case 98:
                        CP=3.98;
                        case 99:
                        CP=4.0;
                        break;
                        case 100:
                        CP=4.0;
                        break;
                        }
                        printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c\tCredit Points: %f",counter_2,marks,grade,CP);
                        collective_CP+=(CP);//body of if
                    }
                    if(marks>=80 && marks<=84 )
                        {
                            grade='A';
                            signs='-';
                            switch(marks)
                            {
                                case 80:
                                CP=3.34;
                                break;
                                case 81:
                                CP=3.40;
                                break;
                                case 82:
                                CP=3.50;
                                break;
                                case 83:
                                CP=3.58;
                                break;
                                case 84:
                                CP=3.66;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }
                        if(marks>=75 && marks<=79 )
                        {
                            grade='B';
                            signs='+';
                            switch(marks)
                            {
                                case 75:
                                CP=3.01;
                                break;
                                case 76:
                                CP=3.10;
                                break;
                                case 77:
                                CP=3.20;
                                break;
                                case 78:
                                CP=3.30;
                                break;
                                case 79:
                                CP=3.33;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                      printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=71 && marks<=74 )
                        {
                            grade='B';
                            switch(marks)
                            {
                                case 71:
                                CP=2.67;
                                break;
                                case 72:
                                CP=2.70;
                                break;
                                case 73:
                                CP=2.90;
                                break;
                                case 74:
                                CP=3.00;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c\tCredit Points: %f",counter_2,marks,grade,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=68 && marks<=70 )
                        {
                            grade='B';
                            signs='-';
                            switch(marks)
                            {
                                case 68:
                                CP=2.34;
                                break;
                                case 69:
                                CP=2.40;
                                break;
                                case 70:
                                CP=2.66;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                      printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=64 && marks<=67 )
                        {
                            grade='C';
                            signs='+';
                            switch(marks)
                            {
                                case 64:
                                CP=2.01;
                                break;
                                case 65:
                                CP=2.28;
                                break;
                                case 66:
                                CP=2.30;
                                break;
                                case 67:
                                CP=2.33;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                      printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=61 && marks<=63 )
                        {
                            grade='C';
                            switch(marks)
                            {
                                case 61:
                                CP=1.67;
                                break;
                                case 62:
                                CP=1.80;
                                break;
                                case 63:
                                CP=2.00;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c\tCredit Points: %f",counter_2,marks,grade,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=58 && marks<=60 )
                        {
                            grade='C';
                            signs='-';
                            switch(marks)
                            {
                                case 58:
                                CP=1.31;
                                break;
                                case 59:
                                CP=1.41;
                                break;
                                case 60:
                                CP=1.66;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                      printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=54 && marks<=57 )
                        {
                            grade='D';
                            signs='+';
                            switch(marks)
                            {
                                case 54:
                                CP=1.01;
                                break;
                                case 55:
                                CP=1.09;
                                break;
                                case 56:
                                CP=1.18;
                                break;
                                case 57:
                                CP=1.30;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                      printf("\nSubject: %d\tMarks: %d\tGrade: %c%c\tCredit Points: %f",counter_2,marks,grade,signs,CP);
                            collective_CP+=(CP);
                        }

                        if(marks>=50 && marks<=53 )
                        {
                            grade='D';
                            switch(marks)
                            {
                                case 50:
                                CP=0.10;
                                break;
                                case 51:
                                CP=0.50;
                                break;
                                case 52:
                                CP=0.70;
                                break;
                                case 53:
                                CP=1.00;
                                break;
                            }
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c\tCredit Points: %f",counter_2,marks,grade,CP);
                            collective_CP+=(CP);
                        }

                        if( marks<50 )
                        {
                            grade='F';
                            CP=0.0;
                            printf("\n__________________________SUBJECT RESULT____________________________________\n");
                     printf("\nSubject: %d\tMarks: %d\tGrade: %c\tCredit Points: %f",counter_2,marks,grade,CP);
                            collective_CP+=(CP);
                        }

                /*______________END OF IF STATEMENTS USED FOR ASSIGNING GRADES AND CREDIT POINTS______________________________*/

                } // END OF INNER LOOP

                CHD=4*subjects; // TOTAL CREDIT HOURS OF ONE SEMESTER
                printf("\n");
                printf("\n_____________SEMESTER %d RESULT______________\n",counter);
                printf("\n\tTotal Credit Hours:  %d",CHD);
                printf("\n\tTotal Credit Points: %f",collective_CP*4);
                sem_gpa=(collective_CP*4.0)/CHD; // FORMULA FOR CALCULATING GPA IN A SEMESTER
                printf("\n\tGPA of semester %d:  %f",counter,sem_gpa);
                c_gpa=(c_gpa+sem_gpa)/counter; // FOR COMMUTATIVE GPA

                /*Rules for failing semester i.e gpa<2.0*/

                if(sem_gpa<2.0)
                    {
                        printf("\n\n______________\n\n");
                      printf("\n\nProbabation Warning! Please improve your grades.\n\n");

                    }
                    if(counter<=4)
                    {
                if(counter==1 && sem_gpa<2.0)
                    {
                        count_prob++;
                    }
                if(counter==2 && sem_gpa<2.0)
                    {
                        count_prob+=2;
                    }
                if(counter==3 && sem_gpa<2.0)
                    {
                        count_prob+=4;
                    }
                if(counter==4 && sem_gpa<2.0)
                    {
                        count_prob+=4;
                    }


                // alot of ifs idk meh :/
                if(count_prob==3 || count_prob==6 || count_prob==8 || count_prob==9 || count_prob==10 )
                    {
                        printf("\nYou are dismissed!\n");
                        goto label2;
                    }
                    }


                if(counter==5 && sem_gpa<2.0)
                    {
                        count_prob++;
                    }
                if(counter==6 && sem_gpa<2.0)
                    {
                        count_prob+=2;
                    }
                if(counter==7 && sem_gpa<2.0)
                    {
                        count_prob+=4;
                    }
                if(counter==8 && sem_gpa<2.0)
                    {
                        count_prob+=4;
                    }


                // alot of ifs idk meh :/
                if(count_prob==3 || count_prob==6 || count_prob==8 || count_prob==9 || count_prob==10 )
                    {
                        printf("\nYou will have to \"Repeat Semester\"\n");
                        goto label2;
                    }

            collective_CP=0.0;
            counter++;
        } // end of outer loop
        printf("\n");
        printf("\n______________ FINAL RESULT ________________\n");
        printf("\n\n\t  Your CGPA is %.3f\n\n",c_gpa);
label2:
    return 0;
}
