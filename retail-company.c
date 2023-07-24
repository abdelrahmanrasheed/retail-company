#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num_branches;
int deleted_branch;
long branch_sales;
float branch_sales_array[100][12];

int sales_data (void);
int new_branch (void);
void delete_branch (void);
void total_sales(void);
void share_percentage (void);
void month_peak (void);
void specific_month (void);
void specific_branch(void);

int main()
{
    int user_option;
    do
    {
        printf("Please Enter number for corresponding function:\n\n"
               "1.Enter sales data\n"
               "2.Add a record for a new branch\n"
               "3.Delete record for an existing branch\n"
               "4.Calculate total sales\n"
               "5.Calculate percentage share of each branch\n"
               "6.Determine the month of the peak sales\n"
               "7.Display sales of a specific month\n"
               "8.Display sales of a specific branch\n"
               "0.Done\n\n");
        scanf("%i",&user_option);
        if (user_option == 0)
        {
            printf("Thank You!");
        }
        else if (user_option == 1)
        {
            sales_data();
        }
        else if (user_option == 2)
        {
            new_branch();
        }
        else if (user_option == 3)
        {
            delete_branch();
        }
        else if (user_option == 4)
        {
            total_sales();
        }
        else if (user_option == 5)
        {
            share_percentage();
        }
        else if (user_option == 6)
        {
            month_peak();
        }
        else if (user_option == 7)
        {
            specific_month();
        }
        else if (user_option == 8)
        {
            specific_branch();
        }
        else
        {
            printf("\nEnter Valid input from 1-8\n\n");
        }

    }
    while (user_option != 0);

}

int sales_data (void)
{
    printf("Number of Branches: ");
    scanf("%i",&num_branches);

    for (int i = 0; i < num_branches; i++)
    {
        printf("\n");
        printf("sales for branch %i :\n", (i + 1) );


        for (int j = 0; j < 12; j++)
        {
            printf("sales for month %i :", (j + 1) );
            scanf("%f", &branch_sales_array[i][j]);
        }
    }


    printf("Branch | Month:\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (int i = 0; i < num_branches; i++)
	{
		printf("Branch %d :\t", (i + 1));
		for (int j = 0; j < 12; j++)
		{
			printf("%.1lf\t", branch_sales_array[i][j]);
		}
		printf("\n");
	}
    printf("\n\n");
	return 0;

}

int new_branch (void)
{
    num_branches++;
	printf("Sales for the new branch number %d\n", (num_branches));
	for (int i = 0; i < 12; i++)
	{
		printf("Sales for month %d: ", (i + 1));
		scanf("%f",&branch_sales_array[num_branches - 1][i]);
	}
	printf("\n");
	printf("Branch | Month:\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (int i = 0; i < num_branches; i++)
	{
		printf("Branch %d:\t", (i + 1));
		for (int j = 0; j < 12; j++)
		{
			printf("%.1lf\t", branch_sales_array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 1;

}

void delete_branch (void)
{
    printf("Branch you want to delete ?\n");
	scanf("%d", &deleted_branch);
	deleted_branch--;
	for (int i = 0; i < 12; i++)
    {
        branch_sales_array[deleted_branch][i] = 0;
    }
    printf("Branch | Month:\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (int i = 0; i < num_branches; i++)
	{
	    if ((branch_sales_array[i][0] != 0) && (branch_sales_array[i][1] != 0) && (branch_sales_array[i][2] != 0) && (branch_sales_array[i][3] != 0) && (branch_sales_array[i][4] != 0) && (branch_sales_array[i][5] != 0) && (branch_sales_array[i][6] != 0) && (branch_sales_array[i][7] != 0) && (branch_sales_array[i][8] != 0) && (branch_sales_array[i][9] != 0) && (branch_sales_array[i][10] != 0) && (branch_sales_array[i][11] != 0))
        {
            printf("Branch %d:\t", (i + 1));
            for (int j = 0; j < 12; j++)
		{
            printf("%.1lf\t", branch_sales_array[i][j]);

		}
		printf("\n");

        }
	}
}


void total_sales(void)
{
    float total_sale = 0;
    for (int i = 0; i < num_branches; i++)
	{
	    if ((branch_sales_array[i][0] != 0) && (branch_sales_array[i][1] != 0) && (branch_sales_array[i][2] != 0) && (branch_sales_array[i][3] != 0) && (branch_sales_array[i][4] != 0) && (branch_sales_array[i][5] != 0) && (branch_sales_array[i][6] != 0) && (branch_sales_array[i][7] != 0) && (branch_sales_array[i][8] != 0) && (branch_sales_array[i][9] != 0) && (branch_sales_array[i][10] != 0) && (branch_sales_array[i][11] != 0))
        {
            for (int j = 0; j < 12; j++)
            {
                total_sale = total_sale + branch_sales_array[i][j];
            }
        }
	}
	printf("Total company sales is = %.1f\n",total_sale);
	printf("\n");
}


void share_percentage (void)
{
    float total_sale = 0;
    for (int i = 0; i < num_branches; i++)
	{
	    if ((branch_sales_array[i][0] != 0) && (branch_sales_array[i][1] != 0) && (branch_sales_array[i][2] != 0) && (branch_sales_array[i][3] != 0) && (branch_sales_array[i][4] != 0) && (branch_sales_array[i][5] != 0) && (branch_sales_array[i][6] != 0) && (branch_sales_array[i][7] != 0) && (branch_sales_array[i][8] != 0) && (branch_sales_array[i][9] != 0) && (branch_sales_array[i][10] != 0) && (branch_sales_array[i][11] != 0))
        {
            for (int j = 0; j < 12; j++)
            {
                total_sale = total_sale + branch_sales_array[i][j];
            }
        }
	}
	float total_branch_sale[num_branches];
    for (int i = 0; i < num_branches; i++)
	{
	    if ((branch_sales_array[i][0] != 0) && (branch_sales_array[i][1] != 0) && (branch_sales_array[i][2] != 0) && (branch_sales_array[i][3] != 0) && (branch_sales_array[i][4] != 0) && (branch_sales_array[i][5] != 0) && (branch_sales_array[i][6] != 0) && (branch_sales_array[i][7] != 0) && (branch_sales_array[i][8] != 0) && (branch_sales_array[i][9] != 0) && (branch_sales_array[i][10] != 0) && (branch_sales_array[i][11] != 0))
        {
            for (int j = 0; j < 12; j++)
            {
                total_branch_sale[i] = total_branch_sale[i] + branch_sales_array[i][j];
            }
            printf("Branch %i shares = %.2f%%\n", (i + 1),(total_branch_sale[i] / total_sale) * 100);
        }
	}
}

void month_peak (void)
{
    float month_sales = 0;
    float sum = 0;
    int month_max = 0;
    for (int i = 0; i < num_branches; i++)
	{
	    if ((branch_sales_array[i][0] != 0) && (branch_sales_array[i][1] != 0) && (branch_sales_array[i][2] != 0) && (branch_sales_array[i][3] != 0) && (branch_sales_array[i][4] != 0) && (branch_sales_array[i][5] != 0) && (branch_sales_array[i][6] != 0) && (branch_sales_array[i][7] != 0) && (branch_sales_array[i][8] != 0) && (branch_sales_array[i][9] != 0) && (branch_sales_array[i][10] != 0) && (branch_sales_array[i][11] != 0))
        {
            for (int j = 0; j < 12; j++)
            {
                month_sales = month_sales + branch_sales_array[i][j];
                if (month_sales > sum)
                {
                    sum = month_sales;
                    month_max = j + 1;
                }
                else {

                }
            }   month_sales = 0;
        }
	}
	sum = 0;
	for (int i = 0; i < num_branches; i++)
    {
        sum = sum + branch_sales_array[i][month_max - 1];
    }
    printf("Month %i has the peak sales of %f\n", month_max, sum);

}

void specific_month (void)
{
    int month;
    int temp;
    int j;

    printf("Input month: \n");
    scanf("%d",&month);
    printf("Month %i sales is: \n", month);
    month--;
    float branch_sales_array2[num_branches][12];
    for (int i = 0; i < num_branches; i++)
    {
        for (j = 0; j < 12; j++)
        {
            branch_sales_array2[i][j] = branch_sales_array[i][j];
        }
    }
    for (int z = 0; z < num_branches; z++)
    {
        for (int x = 0; x < num_branches - (z - 1); x++)
        {
            if (branch_sales_array2[x][j] > branch_sales_array2[x + 1][j])
            {
                temp = branch_sales_array2[x][j];
                branch_sales_array2[x][j] = branch_sales_array2[x + 1][j];
                branch_sales_array2[x + 1][j] = temp;
            }
        }
        for ( z = num_branches; z > 0; z--)
        {
            printf("Branch %i : %.1f \n", z, branch_sales_array2[z - 1][j]);
            break;
        }
    }
}

void specific_branch(void)
{
    int min, temp,branch;
    printf("Input Branch : \n");
    scanf("%i",&branch);
    printf("Branch %i sales:\n", branch);
    branch--;
    float branch_sales_array2[12];

    for (int i = 0; i < 12; i++)
    {
        branch_sales_array2[i] = branch_sales_array[branch][i];
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (branch_sales_array2[i] > branch_sales_array2[j])
            {
                temp = branch_sales_array2[i];
                branch_sales_array2[i] = branch_sales_array2[j];
                branch_sales_array2[j] = temp;
            }
        }
    }
    for (int i = 11; i >= 0; i--)
    {
        for (int j = 0; j < 12; j++)
        {
            if (branch_sales_array2[i] == branch_sales_array[branch][j])
            {
                printf("Month %i : %.1f\n", (j+1), branch_sales_array2[j]);
            }
        }
    }
}
