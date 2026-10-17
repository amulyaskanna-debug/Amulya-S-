#include <stdio.h>

int main()
{
    int choice, count = 0, i;
    float amount, total = 0;
    float expenses[100];
    int category[100];

    printf("===== PERSONAL EXPENSE TRACKER =====\n");

    do
    {
        printf("\n1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Show Total Expenses\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (count >= 100)
                {
                    printf("Expense limit reached!\n");
                    break;
                }

                printf("\nExpense Categories:\n");
                printf("1. Food\n");
                printf("2. Travel\n");
                printf("3. Education\n");
                printf("4. Other\n");

                printf("Enter category number: ");
                scanf("%d", &category[count]);

                if (category[count] < 1 ||
                    category[count] > 4)
                {
                    printf("Invalid category!\n");
                    break;
                }

                printf("Enter expense amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Enter a valid positive amount!\n");
                    break;
                }

                expenses[count] = amount;
                total = total + amount;
                count++;

                printf("Expense added successfully!\n");
                break;

            case 2:
                if (count == 0)
                {
                    printf("No expenses recorded.\n");
                    break;
                }

                printf("\n----- YOUR EXPENSES -----\n");

                for (i = 0; i < count; i++)
                {
                    printf("%d. ", i + 1);

                    switch (category[i])
                    {
                        case 1:
                            printf("Food");
                            break;
                        case 2:
                            printf("Travel");
                            break;
                        case 3:
                            printf("Education");
                            break;
                        case 4:
                            printf("Other");
                            break;
                    }

                    printf(" - Rs. %.2f\n", expenses[i]);
                }
                break;

            case 3:
                printf("Total Expenses: Rs. %.2f\n", total);
                break;

            case 4:
                printf("Thank you for using Expense Tracker!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}


out put 

===== PERSONAL EXPENSE TRACKER =====

1. Add Expense
2. View Expenses
3. Show Total Expenses
4. Exit

Enter your choice: 1

Expense Categories:
1. Food
2. Travel
3. Education
4. Other

Enter category number: 1
Enter expense amount: 100

Expense added successfully!