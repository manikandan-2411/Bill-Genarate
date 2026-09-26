#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main()
{
    int choice, quantity;
    float total = 0;
    float gst,final_total;
    char more;

        printf("Welcome to CM Dhaba!\n");
        printf("        MENU      \n");
        printf("                  \n");
        printf("1. Dosa    - Rs 50\n");
        printf("2. Idli    - Rs 30\n");
        printf("3. Vada    - Rs 20\n");
        printf("4. Pongal  - Rs 40\n");
        printf("5. Chapati - Rs 25\n");
        printf("6. Rice    - Rs 35\n");
        printf("7. Dal     - Rs 25\n");
        printf("8. Sambar  - Rs 30\n");
        printf("9. Sweet   - Rs 50\n");
        printf("10. Juice  - Rs 20\n");
        printf("11. Exit\n");
    do
    {
    

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 11)
        {
            break;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        switch (choice)
        {
            case 1:
                printf("You have selected Dosa.\n");
                total += quantity * 50;
                break;

            case 2:
                printf("You have selected Idli.\n");
                total += quantity * 30;
                break;

            case 3:
                printf("You have selected Vada.\n");
                total += quantity * 20;
                break;

            case 4:
                printf("You have selected Pongal.\n");
                total += quantity * 40;
                break;

            case 5:
                printf("You have selected Chapati.\n");
                total += quantity * 25;
                break;

            case 6:
                printf("You have selected Rice.\n");
                total += quantity * 35;
                break;

            case 7:
                printf("You have selected Dal.\n");
                total += quantity * 25;
                break;

            case 8:
                printf("You have selected Sambar.\n");
                total += quantity * 30;
                break;

            case 9:
                printf("You have selected Sweet.\n");
                total += quantity * 50;
                break;

            case 10:
                printf("You have selected Juice.\n");
                total += quantity * 20;
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }


        printf("Do you want to order more food items (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    gst = total *50 /100;
    final_total =total + gst;

    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    
     /*bill */
     printf("\n");
     printf("==========================\n");
     printf("      CM DHABA            \n");
     printf("==========================\n");

     printf("Date : %02d-%02d-%04d\n",
            t->tm_mday,
            t->tm_mon + 1,
            t->tm_year + 1900);

     printf("Time : %02d:%02d:%02d\n",
            t->tm_hour,
            t->tm_min,
            t->tm_sec);      

     printf("--------------------------\n");
     printf("      BILL RECEIPT        \n");
     printf("                          \n");
     printf("Food Total : Rs %.2f\n",total);
     printf("Gst (50%%)  : Rs %.2f\n",gst);
     printf("---------------------------\n");
     printf("Final_total: Rs %.2f\n",final_total);
     printf("---------------------------\n");
     printf("  Thank you! visit Again.  \n");
     printf("===========================\n");

    return 0;
}