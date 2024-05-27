#include <errno.h>

#include <stdio.h>

#include <string.h>


struct Information {

    char first_name[100];

    char middle_name[100];

    char last_name[100];

    char suffix[10];

    char gender[10];

    int age;

    int month;

    int day;

    int year;

    char street_name[100];

    char municipality[100];

    char province[100];

    char bgy[100];

    char district[100];

    char cellphone_number[15];

};

void enter_information(struct Information * info, FILE * fp) {

    printf("Enter First Name: ");

    fgets(info -> first_name, 50, stdin);

    scanf("%s", info -> first_name);

    fprintf(fp, "First Name: %s\n", info -> first_name);

    printf("Enter Middle Name: ");

    fgets(info -> middle_name, 50, stdin);

    scanf("%s", info -> middle_name);

    fprintf(fp, "Middle Name: %s\n", info -> middle_name);

    printf("Enter Last Name: ");

    fgets(info -> last_name, 50, stdin);

    scanf("%s", info -> last_name);

    fprintf(fp, "Last Name: %s\n", info -> last_name);

    printf("Enter Suffix: ");

    scanf("%s", info -> suffix);

    fprintf(fp, "Suffix: %s\n", info -> suffix);

    printf("Enter Gender (M/F): ");

    scanf("%s", info -> gender);

    fprintf(fp, "Gender (M/F): %s\n", info -> gender);

    printf("Enter Date of Birth (MM/DD/YYYY): ");

    scanf("%d/%d/%d", & info -> month, & info -> day, & info -> year);
    fprintf(fp, "Date of Birth (MM/DD/YYYY): %d/%d/%d\n", info -> month, info -> day, info -> year);

    while (getchar() != '\n');

    printf("Enter Street Name: ");

    fgets(info -> street_name, 100, stdin);

    info -> street_name[strcspn(info -> street_name, "\n")] = 0;

    fprintf(fp, "Street Name: %s\n", info -> street_name);

    printf("Enter Municipality: ");

    fgets(info -> municipality, 100, stdin);

    info -> municipality[strcspn(info -> municipality, "\n")] = 0;

    fprintf(fp, "Municipality: %s\n", info -> municipality);

    printf("Enter Province: ");

    fgets(info -> province, 100, stdin);

    info -> province[strcspn(info -> province, "\n")] = 0;

    fprintf(fp, "Province: %s\n", info -> province);

    printf("Enter Bgy: ");

    fgets(info -> bgy, 100, stdin);

    info -> bgy[strcspn(info -> bgy, "\n")] = 0;

    fprintf(fp, "Bgy: %s\n", info -> bgy);

    printf("Enter District: ");

    fgets(info -> district, 100, stdin);

    info -> district[strcspn(info -> district, "\n")] = 0;

    fprintf(fp, "District: %s\n", info -> district);

    printf("Enter Cellphone Number: ");

    scanf("%s", info -> cellphone_number);

    fprintf(fp, "Cellphone Number: %s\n", info -> cellphone_number);

}

void view_information(struct Information * info, FILE * fp) {
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

}

void delete_information(struct Information * info, FILE *fp) {

    fclose(freopen("INPR.text", "w", fp));

    printf("Information deleted successfully.\n");

}

int main() {

    struct Information user_info;

    int choice;

    int is_info_entered = 0;

    FILE * fp;
    fp = fopen("INPR.text", "w+");
    if (fp != NULL) {

        do {

            printf("\n1. Enter Information\n");

            printf("2. View Information\n");

            printf("3. Delete Information\n");

            printf("4. Exit\n");

            printf("Enter your choice: ");

            scanf("%d", & choice);

            switch (choice) {

            case 1:

                if (fp != NULL) {
                    enter_information( & user_info, fp);

                    is_info_entered = 1;
                }

                break;

            case 2:

                

                if (is_info_entered) {

                    view_information( & user_info, fp);

                    printf("\nDo you want to edit the information? (1 for Yes, 0 for No): ");

                    int edit_choice;

                    scanf("%d", & edit_choice);

                    if (edit_choice == 1) {
                        enter_information( & user_info, fp);

                    }

                } else {

                    printf("Please enter information first.\n");

                }

                break;

            case 3:

                if (is_info_entered) {

                    delete_information( & user_info, fp);

                    is_info_entered = 0;

                } else {

                    printf("No information to delete.\n");

                }

                break;

            case 4:

                printf("Exiting program.\n");

                break;

            default:

                printf("Invalid choice. Please try again.\n");

            }

        } while (choice != 4);

    } else {
        fclose(fp);
    }

    printf("Value of errno:%d\n", errno);

    printf("The error message is: %s\n", strerror(errno));

    return 0;

}
