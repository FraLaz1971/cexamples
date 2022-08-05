#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* name, surname, id, address and age */
struct StudentData{
    char *st_name;
    char *st_surname;
    int st_id;
    int st_birthyear;
    int st_courseyear;
    int st_age;
};

void display_student_data(struct StudentData *mstudent){
	puts("*** START RECORD ***");
	printf("Student Name is: %s\n", mstudent->st_name);
	printf("Student Surname is: %s\n", mstudent->st_surname);
	printf("Student Id is: %d\n", mstudent->st_id);
	printf("Student Birth Year is: %d\n", mstudent->st_birthyear);
	printf("Student Age is: %d\n", mstudent->st_age);
	printf("Student Course Year is: %d\n", mstudent->st_courseyear);
	puts("*** END RECORD ***");
}

void set_student_data(struct StudentData *mstudent, char *mname, char *msurname, int mid, int mbirthyear, int mage, int mcourseyear ){
	mstudent->st_name = mname;
	mstudent->st_surname = msurname;
	mstudent->st_id = mid;
	mstudent->st_birthyear = mbirthyear;
	mstudent->st_courseyear = mcourseyear;
	mstudent->st_age = mage;
}

int main(int argc, char **argv){
     /* student is the variable of structure StudentData*/
     	struct StudentData student;
     /*Assigning the values of each struct member here*/
	set_student_data(&student, "Ulkar", "Karimova", 10, 1984,36, 2);
     /* Displaying the values of struct members */
	display_student_data(&student);
     /*Assigning new values of each struct member here*/
	set_student_data(&student, "Adrian", "Kazakov", 20, 1989,31, 3);
	display_student_data(&student);
	return 0;
}
