#include <stdio.h>
#include <string.h>

struct info
{
    char name[100];
    char surname[100];
    char number[100];
};

int main(){
    char a[100];
    printf("\n\t\n");
    struct info hamkor1;
    struct info hamkor2;
    struct info hamkor3;
    struct info hamkor4;
    
    strcpy(hamkor1.name, "Dilshod");
    strcpy(hamkor1.surname, "Abdullayev");
    strcpy(hamkor1.number, "+998 (90) 123-45-67");
    printf(" %s %s %s ", hamkor1.name, hamkor1.surname, hamkor1.number);
    printf("\n\t\n");
    ////////////////////////////////////////////////////////////////////
    strcpy(hamkor2.name, "Ne'mat");
    strcpy(hamkor2.surname, "Abdurahimov");
    strcpy(hamkor2.number, "+998 (90) 321-44-65");
    printf(" %s %s %s ", hamkor2.name, hamkor2.surname, hamkor2.number);
    printf("\n\t\n");
    ////////////////////////////////////////////////////////////////////
    strcpy(hamkor3.name, "Dilbar");
    strcpy(hamkor3.surname, "Rejepova");
    strcpy(hamkor3.number, "+998 (97) 777-77-77");
    printf(" %s %s %s ", hamkor3.name, hamkor3.surname, hamkor3.number);
    printf("\n\t\n");
    ////////////////////////////////////////////////////////////////////
    strcpy(hamkor4.name, "Hafiza");
    strcpy(hamkor4.surname, "Karimova");
    strcpy(hamkor4.number, "+998 (90) 811-11-11");
    printf(" %s %s %s ", hamkor4.name, hamkor4.surname, hamkor4.number);
    printf("\n\t\n");

    printf("kimning telefon raqami kerak: ");
    scanf("%s", &a);

if (strcasecmp(hamkor1.name, a)==0)
{
    printf("Telefon nomeri: %s", hamkor1.number);
}

else if (strcasecmp(hamkor2.name, a)==0)
{
    printf("Telefon nomeri: %s", hamkor2.number);
}

else if (strcasecmp(hamkor3.name, a)==0)
{
    printf("Telefon nomeri: %s", hamkor3.number);
}

else if (strcasecmp(hamkor4.name, a)==0)
{
    printf("Telefon nomeri: %s", hamkor4.number);
}
else{
        printf("noto'gri ism\n");
}
    return 0;
}