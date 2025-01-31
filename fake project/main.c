#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "library_data.txt"

// Structure to hold information about a book
struct Book {
    int serial_number;
    char isbn[20];
    char title[100];
    char edition[50];
    char author[100];
    int is_reserved;
};

// Function prototypes
void addBook();
void deleteBook();
void searchBookByISBN();
void searchBookByTitle();
void searchBookByAuthor();
void modifyBook();
void displayAllBooks();
void issueBook();
void saveToFile(struct Book);
void readFromFile();
int getNumberOfBooks();

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add Book\n");
        printf("2. Delete Book\n");
        printf("3. Search Book by ISBN\n");
        printf("4. Search Book by Title\n");
        printf("5. Search Book by Author\n");
        printf("6. Modify/Update a Book Record\n");
        printf("7. Display All Books in Library\n");
        printf("8. Issue Book to Someone\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                deleteBook();
                break;
            case 3:
                searchBookByISBN();
                break;
            case 4:
                searchBookByTitle();
                break;
            case 5:
                searchBookByAuthor();
                break;
            case 6:
                modifyBook();
                break;
            case 7:
                displayAllBooks();
                break;
            case 8:
                issueBook();
                break;
            case 9:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 9.\n");
        }
    } while(choice != 9);

    return 0;
}

void addBook() {
    struct Book newBook;

    printf("Enter Book Serial Number: ");
    scanf("%d", &newBook.serial_number);
    printf("Enter ISBN: ");
    scanf("%s", newBook.isbn);
    printf("Enter Book Title: ");
    getchar(); // Clearing input buffer
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Removing newline character
    printf("Enter Edition: ");
    fgets(newBook.edition, sizeof(newBook.edition), stdin);
    newBook.edition[strcspn(newBook.edition, "\n")] = '\0'; // Removing newline character
    printf("Enter Author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Removing newline character
    newBook.is_reserved = 0; // Initializing to not reserved

    saveToFile(newBook);
    printf("Book added successfully!\n");
}

void deleteBook() {
    FILE *fp1, *fp2;
    struct Book book;
    int serialNumber;
    int found = 0;

    printf("Enter Serial Number of book to delete: ");
    scanf("%d", &serialNumber);

    fp1 = fopen(FILENAME, "rb");
    if (fp1 == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fp2 = fopen("temp.txt", "wb");
    if (fp2 == NULL) {
        printf("Error opening file!\n");
        fclose(fp1);
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, fp1)) {
        if (book.serial_number == serialNumber) {
            printf("Book deleted successfully!\n");
            found = 1;
        } else {
            fwrite(&book, sizeof(struct Book), 1, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove(FILENAME);
    rename("temp.txt", FILENAME);

    if (!found)
        printf("Book not found!\n");
}

void searchBookByISBN() {
    FILE *fp;
    struct Book book;
    char searchISBN[20];
    int found = 0;

    printf("Enter ISBN to search: ");
    scanf("%s", searchISBN);

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, fp)) {
        if (strcmp(book.isbn, searchISBN) == 0) {
            printf("Book found:\n");
            printf("Serial Number: %d\n", book.serial_number);
            printf("ISBN: %s\n", book.isbn);
            printf("Title: %s\n", book.title);
            printf("Edition: %s\n", book.edition);
            printf("Author: %s\n", book.author);
            printf("Is Reserved: %s\n", book.is_reserved ? "Yes" : "No");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Book not found!\n");
}

void searchBookByTitle() {
    FILE *fp;
    struct Book book;
    char searchTitle[100];
    int found = 0;

    printf("Enter Title to search: ");
    getchar(); // Clearing input buffer
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0'; // Removing newline character

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, fp)) {
        if (strcmp(book.title, searchTitle) == 0) {
            printf("Book found:\n");
            printf("Serial Number: %d\n", book.serial_number);
            printf("ISBN: %s\n", book.isbn);
            printf("Title: %s\n", book.title);
            printf("Edition: %s\n", book.edition);
            printf("Author: %s\n", book.author);
            printf("Is Reserved: %s\n", book.is_reserved ? "Yes" : "No");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Book not found!\n");
}

void searchBookByAuthor() {
    FILE *fp;
    struct Book book;
    char searchAuthor[100];
    int found = 0;

    printf("Enter Author to search: ");
    getchar(); // Clearing input buffer
    fgets(searchAuthor, sizeof(searchAuthor), stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = '\0'; // Removing newline character

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, fp)) {
        if (strcmp(book.author, searchAuthor) == 0) {
            printf("Book found:\n");
            printf("Serial Number: %d\n", book.serial_number);
            printf("ISBN: %s\n", book.isbn);
            printf("Title: %s\n", book.title);
            printf("Edition: %s\n", book.edition);
            printf("Author: %s\n", book.author);
            printf("Is Reserved: %s\n", book.is_reserved ? "Yes" : "No");
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("Book not found!\n");
}

void modifyBook() {
    FILE *fp1, *fp2;
    struct Book book;
    int serialNumber;
    int found = 0;

    printf("Enter Serial Number of book to modify: ");
    scanf("%d", &serialNumber);

    fp1 = fopen(FILENAME, "rb");
    if (fp1 == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fp2 = fopen("temp.txt", "wb");
    if (fp2 == NULL) {
        printf("Error opening file!\n");
        fclose(fp1);
        return;
    }

    while (fread(&book, sizeof(struct Book), 1, fp1)) {
        if (book.serial_number == serialNumber) {
            printf("Enter new ISBN: ");
            scanf("%s", book.isbn);
            printf("Enter new Title: ");
            getchar(); // Clearing input buffer
            fgets(book.title, sizeof(book.title), stdin);
            book.title[strcspn(book.title, "\n")] = '\0'; // Removing newline character
            printf("Enter new Edition: ");
            fgets(book.edition, sizeof(book.edition), stdin);
            book.edition[strcspn(book.edition, "\n")] = '\0'; // Removing newline character
            printf("Enter new Author: ");
            fgets(book.author, sizeof(book.author), stdin);
            book.author[strcspn(book.author, "\n")] = '\0'; // Removing newline character
            fwrite(&book, sizeof(struct Book), 1, fp2);
            printf("Book modified successfully!\n");
            found = 1;
        } else {
            fwrite(&book, sizeof(struct Book), 1, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove(FILENAME);
    rename("temp.txt", FILENAME);

    if (!found)
        printf("Book not found!\n");
}

void displayAllBooks() {
    FILE *fp;
    struct Book book;

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Books in Library:\n");
    while (fread(&book, sizeof(struct Book), 1, fp)) {
        printf("Serial Number: %d\n", book.serial_number);
        printf("ISBN: %s\n", book.isbn);
        printf("Title: %s\n", book.title);
        printf("Edition: %s\n", book.edition);
        printf("Author: %s\n", book.author);
        printf("Is Reserved: %s\n", book.is_reserved ? "Yes" : "No");
        printf("\n");
    }

    fclose(fp);
}

void issueBook() {
    // Implement issuing book functionality
    printf("Issue Book functionality not implemented yet!\n");
}

void saveToFile(struct Book book) {
    FILE *fp;

    fp = fopen(FILENAME, "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fwrite(&book, sizeof(struct Book), 1, fp);
    fclose(fp);
}

int getNumberOfBooks() {
    FILE *fp;
    struct Book book;
    int count = 0;

    fp = fopen(FILENAME, "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return -1;
    }

    while (fread(&book, sizeof(struct Book), 1, fp)) {
        count++;
    }

    fclose(fp);

    return count;
}
