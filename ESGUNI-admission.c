#include <stdio.h>
#include <stdlib.h>

void getProgram() {
  char programz;

  printf("\nPrograms available are BSCS(A), BSSE(B), BSAI(C) & BSBD(D)");
  printf("\nChoose your program: ");
  scanf("%c", &programz);

  switch(programz){
    case 'A':
      printf("You choosed %c, Bachelors of Computer Science", programz);
      printf(", Four year course, RS 70,000");

      break;
    case 'B':
      printf("You choosed %c, Bachelors of Software Engineering", programz);
      printf(", Four year course, RS 90,000");

      break;
    case 'C':
      printf("You choosed %c, Bachelors of Artificial Intelligence", programz);
      printf(", Four year course, RS 60,000");

      break;
    case 'D':
      printf("You choosed %c, Bachelors of Blockchain Development", programz);
      printf(", Four year course, RS 100,000");

      break;
    default:
      printf(", Invalid course");
  }
}


int main() {

char n[20], f[20], s[50], c[50], gss, ghs,address[60],phone[20],course[10];
int age, ssc, hsc;


printf("\t\t\t\t\t  EAST SIDE GROUP UNIVERSITY");
printf("\n\t\t\t\t\t\tADMISSION FORM");
printf("\n\t\t\t\t   Note:  use _ to give space between words \n\n");

printf("\n Enter your name: ");
//scanf("%s", n);
fgets(n,20,stdin);

printf(" Enter your father's name: ");
//scanf("%s", f);
fgets(f,20,stdin);

getProgram();


printf("\n\n Enter your age: ");
scanf("%d", &age);
  if(age<=30){
    printf("     Valid Age");
    printf(" \n Enter your school name: ");
    scanf("%s", s);
    printf(" Enter your SSC Percentage: ");
    scanf("%d", &ssc);
      if(ssc>=90 && ssc<=100)
        {
          printf("  Your Grade is A");
          gss = 'A';
        }
      else if(ssc>=80)
        {
          printf("  Your Grade is B");
          gss = 'B';
        }
      else if(ssc>=70)
        {
          printf("  Your Grade is C");
          gss = 'C';
        }
      else if(ssc>=60)
        {
          printf("  Your Grade is D");
          gss = 'D';
        }
      else if(ssc>=50)
        {
          printf("  Your Grade is E");
          gss = 'E';
        }
      else
        {
          printf("  Your Grade is F");
          gss = 'F';
        }

    printf("\n Enter your college name: ");
    scanf("%s", c);
    printf(" Enter your HSC Percentage: ");
    scanf("%d", &hsc);
    if(hsc>=90 && hsc<=100)
      {
        printf("  Your Grade is A");
        ghs = 'A';
      }
    else if(hsc>=80)
      {
        printf("  Your Grade is B");
        ghs = 'B';
      }
    else if(hsc>=70)
      {
        printf("  Your Grade is C");
        ghs = 'C';
      }
    else if(hsc>=60)
      {
        printf("  Your Grade is D");
        ghs = 'D';
      }
    else if(hsc>=50)
      {
        printf("  Your Grade is E");
        ghs = 'E';
      }
    else
      {
        printf("  Your Grade is F");
        ghs = 'F';
      }
      printf("\n Enter your Address: ");
      scanf("%s", address);

      printf(" Enter phone number: ");
      scanf("%s", phone);

      printf(" Confirm your program: ");
      scanf("%s", course);
      
      printf("\n\t\t\tGENERATE SLIP");

  }
  else{
    printf("     Your age is %d & you are not eligible to apply for the admission", age);
  }



FILE * fpointer = fopen("admission.txt", "w");
  fprintf(fpointer, "\t\t   EAST SIDE GROUP UNIVERSITY\n\t\t\tAdmission Form\n\t\t          %s Program - 2022\n",course);
  fprintf(fpointer, "\nName: %s", n);
  fprintf(fpointer, "Father's Name: %s", f);
  fprintf(fpointer, "Age: %d", age);
  fprintf(fpointer, "\nPhone: %s", phone);
  fprintf(fpointer, "\nEmail: %s", address);
  fprintf(fpointer, "\nSchool: %s", s);
  fprintf(fpointer, "\nSSC Result: %d%%", ssc);
  fprintf(fpointer, "\nSSC Grade: %c ",gss);
  fprintf(fpointer, "\nCollege: %s", c);
  fprintf(fpointer, "\nHSC Result: %d%%", hsc);
  fprintf(fpointer, "\nHSC Grade: %c ",ghs);
  fprintf(fpointer, "\n\n------------------------------------------------------------------------------------------------------------------------\n\t\t[ Developed by @wasiff_125 ]");



fclose(fpointer);

printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t[ Developed by @wasiff_125 ]");
}
