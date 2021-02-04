#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stud {
  char idno[16];
  char name[50];
  char gender;
  int age;
  char res_status;
  float cgpa;
  char emailaddress[40];
};

void populateRecords(struct stud [], int);
void generateEmailAddress(char [], char []); /* complete definition provided */
void storeEmailAddresses(struct stud [], int);
void printRecords(struct stud [], int);
float calculateAvgCG(struct stud [], int);

int main()
{
  int nos, i;
  // more declarations here...
  
  
  scanf("%d",&nos);    /* number of student records in the file */
  getchar();   /* to eat away the \n character at the end of line */
  struct stud rec[nos];    /* a VLA of structures being declared */
  
  populateRecords(rec,nos);     /* get data into the array */
  storeEmailAddresses(rec,nos);    /* generate and store email addresses */
  
  printRecords(rec,nos);    /* print records in the required format */
  
  printf("The mean CGPA of students is: %.3f\n", calculateAvgCG(rec,nos));
  
  return 0;
}

void populateRecords(struct stud arr[], int n)
{
	char c;
	int i = 0;
	int j = 0;
	for(int i = 0; i<n; i++)
	{
		scanf("%[^,],%[^,],%c,%d,%c,%f\n",arr[i].idno,arr[i].name,&arr[i].gender,&arr[i].age,&arr[i].res_status,&arr[i].cgpa);
	//Above scanf scans the two strings upto , and other inputs are comma separated as per the format file
	}
	return;
}

void generateEmailAddress(char idno[], char email[])
/* generates email address corresponding to the given ID no. 
   and stores in the array named email received as the second argument */
{
  char year[5];
  int i, yr, start, len, end;
  for (i = 0; i < 4; ++i)
    year[i] = idno[i];
  year[i]='\0';   /* year now contains the year of admission as a string */
  yr = atoi(year); /* contents of year being converted into an int */
  
  strcpy(email,"f");
  strcat(email,year);  /* email array now has fxxxx, where xxxx is the year of admission */
  
  if (yr < 2017)  /* prior to 2017 admissions */ 
    start = 9;  /* start extracting the last three digits in the ID number */
  else
    start = 8; /* start extracting the last four digits in the ID number */
  
  len = strlen(email);
  end = 11; /* extract till the last digit of the ID number */
  for (i = start; i <= end; ++i)
    email[len++] = idno[i];
  email[len] = '\0';
  strcat(email,"@pilani.bits-pilani.ac.in"); /* last part of email address */
  return;
}

void storeEmailAddresses(struct stud arr[], int n)
{
	for(int i = 0; i<n; i++)
	{
		generateEmailAddress(arr[i].idno, arr[i].emailaddress);
	}
  return;
}

void printRecords(struct stud arr[], int n)
{
	for(int i = 0; i<n;i++)
	{
		printf("%s  %s\nGender:  %c\nResidence status:  ",arr[i].idno,arr[i].name,arr[i].gender);
		if(arr[i].res_status == 'H') printf("Hostel\n");
		else	printf("Day Scholar\n");
		printf("CGPA:  %.2f\nEmail:  %s\n", arr[i].cgpa,arr[i].emailaddress);
		for(int j = 0; j<50; j++, putchar('-'));
		putchar('\n');
	}
		
  return;
}

float calculateAvgCG(struct stud arr[], int n)
{
  float avg = 0;
  for(int i = 0; i<n; i++)
  {
	  avg += arr[i].cgpa;
  }
  avg = avg/n;

  return avg;  
}
