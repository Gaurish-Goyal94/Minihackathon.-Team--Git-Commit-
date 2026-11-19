    #include <stdio.h>
    #include <string.h>

    int main() {
        float budget, amount;
        float food = 0, travel = 0, books = 0, entertainment = 0;
        float total, remaining;
        int n, category;

        printf("STUDENT EXPENSE TRACKER\n");

        printf("Enter your monthly budget: Rs. ");
        scanf("%f", &budget);

        
        printf("Enter number of expenses: ");
        scanf("%d", &n);

        
        for (int i = 1; i <= n; i++) {
            printf("\nExpense %d\n", i);

            printf("Select category:\n");
            printf("1. Food\n");
            printf("2. Travel\n");
            printf("3. Books\n");
            printf("4. Entertainment\n");
            printf("Enter choice: ");
            scanf("%d", &category);

            printf("Enter amount: Rs. ");
            scanf("%f", &amount);

            switch (category) {
                case 1:
                    food += amount;
                    break;

                case 2:
                    travel += amount;
                    break;

                case 3:
                    books += amount;
                    break;

                case 4:
                    entertainment += amount;
                    break;

                default:
                    printf("Invalid category! Expense not recorded.\n");
                    i--;
                    break;
            }
        }

    
        total = food + travel + books + entertainment;
        remaining = budget - total;

        
        float highest = food;
        char highestCategory[20] = "Food";

        if (travel > highest) {
            highest = travel;
            strcpy(highestCategory, "Travel");
        }

        if (books > highest) {
            highest = books;
            strcpy(highestCategory, "Books");
        }

        if (entertainment > highest) {
            highest = entertainment;
            strcpy(highestCategory, "Entertainment");
        }

        
        printf("\n EXPENSE SUMMARY");
        printf("\n");

        printf("Monthly Budget : Rs. %.2f\n", budget);
        printf("Total Spending : Rs. %.2f\n", total);

        printf("\nCategory-wise Expenses:\n");
        printf("Food  : Rs. %.2f\n", food);
        printf("Travel: Rs. %.2f\n", travel);
        printf("Books : Rs. %.2f\n", books);
        printf("Entertainment : Rs. %.2f\n", entertainment);

        printf("\nHighest Expenditure : %s (Rs. %.2f)\n",
            highestCategory, highest);

        
        if (total > budget) {
            printf("Budget Status: WARNING! Budget Exceeded!\n");
            printf("Exceeded By: Rs. %.2f\n", total - budget);
        } else 
        {
            printf("Remaining Budget : Rs. %.2f\n", remaining);
            printf("Budget Status : Within Budget\n");
        }

        return 0;
    }