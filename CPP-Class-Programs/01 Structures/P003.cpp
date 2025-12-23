#include <stdio.h>
#include <string.h>

/*structure creation*/
struct student                  
{
    char name[50];          // structure member1
    int id;                 // structure member2
    char branch[20];        // structure member3
    int age;                // structure member4
    char place[50];         // structure member5

    /* --- Added new function pointers (methods) --- */
    void (*setData)(struct student *);     
    void (*displayData)(struct student *);
    void (*updatePlace)(struct student *, const char newPlace[]);
    
} stud;                      // structure variable


/* -------- Added: method definitions ---------- */

/* Method to take user input */
void setStudentData(struct student *s)
{
    printf("Enter Student Information\n");      
    printf("----------------------------\n");

    printf("enter name :");
    scanf("%s", s->name);

    printf("enter id :");
    scanf("%d", &s->id);
    
    printf("enter branch name :");
    scanf("%s", s->branch);
    
    printf("enter age :");
    scanf("%d", &s->age);
    
    printf("enter location :");
    scanf("%s", s->place);
}

/* Method to display student details */
void displayStudentData(struct student *s)
{
    printf("Displaying Student Information\n");
    printf("----------------------------\n");

    printf(" name: %s\n", s->name);
    printf(" id: %d \n", s->id);
    printf(" branch: %s \n", s->branch);
    printf(" age: %d\n", s->age);
    printf(" place: %s \n", s->place);
}

/* Example manipulation method: Update place */
void updateStudentPlace(struct student *s, const char newPlace[])
{
    strcpy(s->place, newPlace);
    printf("Location updated successfully!\n");
}


/* ------------------ MAIN PROGRAM --------------------- */
int main()
{
    /* Assigning methods to structure */
    stud.setData = setStudentData;
    stud.displayData = displayStudentData;
    stud.updatePlace = updateStudentPlace;

    /*Taking information from keyboard and store it by using structure variable stud*/
    stud.setData(&stud);   // Using method instead of direct code (your original input code remains above)

    /*Displaying student information */
    stud.displayData(&stud);   // Using method

    /* Example: Update place (demonstrating structure method) */
    stud.updatePlace(&stud, "Delhi");

    printf("\nAfter Updating Place:\n");
    stud.displayData(&stud);

    return 0;
}
