#include <stdio.h>
#include <string.h>
#include <math.h>

struct info
{
    char name[10];
    char surname[10];
    int id;
    int Math;
    int English;
    int IT;
    int Russian;
    float average;
};

int main()
{


    struct info student1 = {.id = 1, .English = 5, .Math = 5, .IT = 4, .Russian = 5};
    strcpy(student1.name, "Dilshod");
    strcpy(student1.surname, "Abdullayev");
    student1.average = (student1.English + student1.Math + student1.IT + student1.Russian) / 4;

    struct info student2 = {.id = 2, .English = 3, .Math = 3, .IT = 4, .Russian = 5};
    strcpy(student2.name, "Ne'mat");
    strcpy(student2.surname, "Abdurahimov");
    student2.average = (student2.English + student2.Math + student2.IT + student2.Russian) / 4;

    struct info student3 = {.id = 3, .English = 5, .Math = 5, .IT = 5, .Russian = 5};
    strcpy(student3.name, "Rejepova");
    strcpy(student3.surname, "Dilbar");
    student3.average = (student3.English + student3.Math + student3.IT + student3.Russian) / 4;

    struct info student4 = {.id = 4, .English = 4, .Math = 4, .IT = 5, .Russian = 5};
    strcpy(student4.name, "Hafiza");
    strcpy(student4.surname, "Karimova");
    student4.average = (student4.English + student4.Math + student4.IT + student4.Russian) / 4;

    printf("# \t Familya Ism \t\t Baholar\n");
    printf("%d\t %s %s \t %d %d %d %d\n", student1.id, student1.name, student1.surname, student1.English, student1.Math, student1.IT, student1.Russian);
    printf("%d\t %s %s \t %d %d %d %d\n", student2.id, student2.name, student2.surname, student2.English, student2.Math, student2.IT, student2.Russian);
    printf("%d\t %s %s \t %d %d %d %d\n", student3.id, student3.name, student3.surname, student3.English, student3.Math, student3.IT, student3.Russian);
    printf("%d\t %s %s \t %d %d %d %d\n", student4.id, student4.name, student4.surname, student4.English, student4.Math, student4.IT, student4.Russian);


    return 0;
}