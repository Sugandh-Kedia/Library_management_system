#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct library {
    int bookid;
    char bookname[100];
    char author[100];
    int pageno;
    float price;
};

struct library lib[100];
int keepcount = 0;

void addbook() {
    printf("\nEnter New Book ID: ");
    scanf("%d", &lib[keepcount].bookid);
    printf("\nEnter New Book Name: ");
    scanf("%s", lib[keepcount].bookname);
    printf("\nEnter Author: ");
    scanf("%s", lib[keepcount].author);
    printf("\nEnter No. of Pages: ");
    scanf("%d", &lib[keepcount].pageno);
    printf("\nEnter Price: ");
    scanf("%f", &lib[keepcount].price);
    keepcount++;
    printf("\n%s added in System\n",lib[keepcount-1].bookname);
}

void sortByName() {
    struct library temp;
    for (int i = 0; i < keepcount - 1; i++) {
        for (int j = 0; j < keepcount - i - 1; j++) {
            if (strcmp(lib[j].bookname, lib[j + 1].bookname) > 0) {
                temp = lib[j];
                lib[j] = lib[j + 1];
                lib[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Book List by Name:\n");
    for (int a = 0; a < keepcount; a++) {
        printf("\nBook ID: %d\n", lib[a].bookid);
        printf("Book Name: %s\n", lib[a].bookname);
        printf("Author Name: %s\n", lib[a].author);
        printf("No. of Pages: %d\n", lib[a].pageno);
        printf("Price: %f\n", lib[a].price);
    }
    printf("--END OF LIST--\n");
}


void display() {
    printf("\nBOOKS IN SYSTEM:\n");
    for (int a = 0; a < keepcount; a++) {
        printf("\nBook ID: %d\n", lib[a].bookid);
        printf("Book Name: %s\n", lib[a].bookname);
        printf("Author: %s\n", lib[a].author);
        printf("No. of Pages: %d\n", lib[a].pageno);
        printf("Price: %f\n", lib[a].price);
    }
    printf("--END OF LIST--\n");
}

void search() {
    int b;
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &b);
    for (int a = 0; a < keepcount; a++) {
        if (b == lib[a].bookid) {
            printf("\nBook ID: %d\n", lib[a].bookid);
            printf("Book Name: %s\n", lib[a].bookname);
            printf("Author: %s\n", lib[a].author);
            printf("No. of Pages: %d\n", lib[a].pageno);
            printf("Price: %f\n", lib[a].price);
            return;
        }
    }
    printf("\nBook Does Not Exist in System\n");
}

void sort() {
    struct library temp;
    for (int a = 0; a < keepcount - 1; a++) {
        for (int e = a + 1; e < keepcount; e++) {
            if (lib[e].bookid < lib[a].bookid) {
                temp = lib[e];
                lib[e] = lib[a];
                lib[a] = temp;
            }
        }
    }
    printf("\nSorted Book List:\n");
    for (int a = 0; a < keepcount; a++) {
        printf("\nBook ID: %d\n", lib[a].bookid);
        printf("Book Name: %s\n", lib[a].bookname);
        printf("Author Name: %s\n", lib[a].author);
        printf("No. of Pages: %d\n", lib[a].pageno);
        printf("Price: %f\n", lib[a].price);
    }
    printf("--END OF LIST--\n");
}

int main() {
    int j = 0;
    int keepcount = 0;
    int i = 0;

    while (j != 6) {
        printf("\nLIBRARY MANAGEMENT SYSTEM\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search by Book ID\n");
        printf("4. Total No. of Books in System\n");
        printf("5. Sort by Book ID\n");
        printf("6. Sort by Book NAME\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &j);

        switch (j) {
    case 1:
        addbook();
        keepcount++;
        i++;
        break;

    case 2:
        display();
        break;

    case 3:
        search();
        break;

    case 4:
        printf("\nTotal No. of Books in System: %d\n", keepcount);
        break;

    case 5:
        sort();
        break;

    case 6:
        sortByName();
        break;

    case 7:
        printf("\nExiting\n");
        exit(0);

    default:
        printf("\nIncorrect Choice\n");
        break;
}

    }
    return 0;
}
