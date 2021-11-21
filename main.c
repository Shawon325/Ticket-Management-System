#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <time.h>
#define MAX_LIMIT 100
#define COLMNV 10
#define ROWV 4
#define BUS_FILE "bus.txt"
#define CUS_FILE "customer.txt"
int fseat[ROWV][COLMNV], booked_row, booked_col;

void welcomeScreen(), mainMenu(), menuScreen(), busAdd(), busAddView(), busRootAdd(), busRootView(), bookedSeat(), seeAvailableBus();
void adminRegister(), adminLogin(), addNewCustomer(), customerLogin(), displaySeat(), cumtomerMenu(), subMenuCustomer(), bookedDetails(), bookedAllData();
int main()
{
    welcomeScreen();
    menuScreen();
    mainMenu();

    return 0;
}

void welcomeScreen()
{

    printf("\n\n\n\n\n\n\n\t\t\t\t-----------------------------------------");
    printf("\n\t\t\t\t#\t\t WELCOME\t\t#");
    printf("\n\t\t\t\t#\t Ticket Management System \t#");
    printf("\n\t\t\t\t#\t\t Team Members \t\t#");
    printf("\n\t\t\t\t#\t Md. Shahidul Bhuiyan - 004 \t#");
    printf("\n\t\t\t\t#\t Ridoy Chandro Sarkar - 005 \t#");
    printf("\n\t\t\t\t#\t Tanvir Hossen - 008 \t\t#");
    printf("\n\t\t\t\t#\t Kazi Atik Foysal - 054 \t#");
    printf("\n\t\t\t\t#\t Md Imran Ahamed - 014 \t\t#");
    printf("\n\t\t\t\t-----------------------------------------\n");
    printf("\t\t\t\t\t\n");
}

void menuScreen()
{
    printf("\n\n\t\t\t\t----------------------------------------\n");

    //printf("\t\t\t\t\t\t Main Menu\t\t");
    printf("\t\t\t\t\t MAIN MENU \n");
    printf("\t\t\t\t\t --------- \n");
    printf("\t\t\t\t\t 1.Press 1 For Register Admin \n");
    printf("\t\t\t\t\t 2.Press 2 For Admin Login \n");
    printf("\t\t\t\t\t 3.Press 3 For Customer Sign up \n");
    printf("\t\t\t\t\t 4.Press 4 For Customer Login \n");
    printf("\t\t\t\t\t 5.Press 5 For Quit :) \n");
    printf("\n\t\t\t\t----------------------------------------\n");
}

void menuScreenAdmin()
{
    printf("\n\n\t\t -------------------------------------------\n");
    printf("\t\t\t ADMIN MENU \n");
    printf("\t\t\t ----------- \n");
    printf("\t\t\t 1.Press 1 For  Add Bus Root \n");
    printf("\t\t\t 2.Press 2 For See Bus Root Details \n");
    printf("\t\t\t 3.Press 3 For Add Bus  \n");
    printf("\t\t\t 4.Press 4 For See Bus Details \n");
    printf("\t\t\t 5.Press 5 For Bus Reservation \n");
    printf("\t\t\t 6.Press 6 For See Bus Reservation Details \n");
    printf("\t\t\t 7.Press 7 For See Bus All Booked Details \n");
    printf("\t\t\t 8.Press 8 Return Main Menu \n");
    printf("\t\t\t 9.Press 9 For Quit :) \n");
    printf("\n\t\t ------------------------------------------------\n");
}

void cumtomerMenu()
{
    printf("\n\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t\t\t CUSTOMER MENU \n");
    printf("\t\t\t ----------- \n");
    printf("\t\t\t 1.Press 1 For See Bus Details \n");
    printf("\t\t\t 2.Press 2 For Bus Reservation \n");
    printf("\t\t\t 3.Press 3 For See Bus Reservation Details  \n");
    printf("\t\t\t 4.Press 4 Return Main Menu \n");
    printf("\t\t\t 5.Press 5 For Quit :) \n");
    printf("\n\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}

void subMenuCustomer()
{
    cumtomerMenu();
    for (;;)
    {
        int choice;
        printf("\tEnter Customer Menu Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            busAddView();
        }
        else if (choice == 2)
        {
            bookedSeat();
        }
        else if (choice == 3)
        {
            bookedDetails();
        }
        else if (choice == 4)
        {
            mainMenu();
        }
        else if (choice == 5)
        {
            printf("\t \a Thank You For Choosing Us.Have a Great Day :)\n");
            exit(0);
        }
        else
        {
            printf("\t Sorry Your Choice Is Wrong.\n");
            exit(0);
        }
    }
}
void subMenuAdmin()
{
    menuScreenAdmin();
    for (;;)
    {
        int choice;
        printf("\tEnter Admin Menu Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            busRootAdd();
        }
        else if (choice == 2)
        {
            busRootView();
        }
        else if (choice == 3)
        {
            busAdd();
        }
        else if (choice == 4)
        {
            busAddView();
        }
        else if (choice == 5)
        {
            bookedSeat();
        }
        else if (choice == 6)
        {
            bookedDetails();
        }
        else if (choice == 7)
        {
            bookedAllData();
        }
        else if (choice == 8)
        {
            mainMenu();
        }
        else if (choice == 9)
        {
            printf("\t \a Thank You For Choosing Us.Have a Great Day :)\n");
            exit(0);
        }
        else
        {
            printf("\t Sorry Your Choice Is Wrong.\n");
            exit(0);
        }
    }
}

void mainMenu()
{
    for (;;)
    {
        int choice;
        printf("\tEnter Main Menu Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            adminRegister();
        }
        else if (choice == 2)
        {
            adminLogin();
        }
        else if (choice == 3)
        {
            addNewCustomer();
        }
        else if (choice == 4)
        {
            customerLogin();
        }
        else if (choice == 4)
        {
            printf("\t \a Thank You For Choosing Us.Have a Great Day :)\n");
            exit(0);
        }
        else
        {
            printf("\t Sorry Your Choice Is Wrong.\n");
            exit(0);
        }
    }
    //getch();
}

struct user
{
    char user_id[MAX_LIMIT];
    char user_name[MAX_LIMIT];
    char password[MAX_LIMIT];
    char email[MAX_LIMIT];
    char phone[MAX_LIMIT];
};

void adminRegister()
{
    FILE *fptr;
    struct user r;
    fptr = fopen("user.txt", "a");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t Add New Admin Form\n");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t Enter User ID: ");
    scanf("%s", &r.user_id);
    printf("\t Enter User Name: ");
    scanf("%s", &r.user_name);
    printf("\t Enter User Password: ");
    scanf("%s", &r.password);
    printf("\t Enter User Email: ");
    scanf("%s", &r.email);
    printf("\t Enter User Phone: ");
    scanf("%s", &r.phone);

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fwrite(&r, sizeof(r), 1, fptr);
    fclose(fptr);
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t \t You are successfully registered!! \n");
    printf("\t \t \t Your UserId is %s and your password is %s \n", r.user_id, r.password);
    printf("\t \t \t Now login with your userid and password!! Press By 2 \n");
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
}

void adminLogin()
{
    int i;
    char usserid[MAX_LIMIT], ch;
    char password[MAX_LIMIT];
    FILE *fptr;
    struct user r;
    fptr = fopen("user.txt", "r");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND!!!");
        exit(1);
    }
    printf("\t UserID : ");
    scanf("%s", &usserid);

    printf("\t Password : ");
    initscr();
    noecho();

    for (i = 0; i < 100; i++)
    {
        ch = getch();
        if (ch == '\n')
            break;

        password[i] = ch;
        ch = '*';
        printw("%c ", ch);
    }
    password[i] = '\0';
    endwin();
    //scanf("%s", &password);
    while (fread(&r, sizeof(r), 1, fptr))
        ;
    {
        if (strcmp(usserid, r.user_id) == 0 && strcmp(password, r.password) == 0)
        {
            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("\t \t \t You are successfully logged in :)\n");
            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            subMenuAdmin();
        }
        else
        {

            printf("\t \t **************************************************\n");
            printf("\t \t \t Your UserID or password is incorrect !!\n");
            printf("\t \t **************************************************\n");
            printf("\n");

            adminLogin();
        }
    }
    fclose(fptr);
}

void addNewCustomer()
{
    FILE *fptr;
    struct user cr;
    fptr = fopen("customer.txt", "a");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t Welcome Customer Register Panel\n");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t Enter User ID: ");
    scanf("%s", &cr.user_id);
    printf("\t Enter User Name: ");
    scanf("%s", &cr.user_name);
    printf("\t Enter User Password: ");
    scanf("%s", &cr.password);
    printf("\t Enter User Email: ");
    scanf("%s", &cr.email);
    printf("\t Enter User Phone: ");
    scanf("%s", &cr.phone);

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fwrite(&cr, sizeof(cr), 1, fptr);
    fclose(fptr);
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t \t You are successfully registered!! \n");
    printf("\t \t \t Your UserId is %s and your password is %s \n", cr.user_id, cr.password);
    printf("\t \t \t Now login with your userid and password!! Press By 3 \n");
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
}

void customerLogin()
{
    int i;
    char usserid[MAX_LIMIT], ch;
    char password[MAX_LIMIT];
    int count_commit = 0;
    FILE *fptr;
    struct user cr;
    fptr = fopen("customer.txt", "r");
    if (fptr == NULL)
    {
        printf("Data File Not Found!!!");
        exit(1);
    }
    printf("\t UserID : ");
    scanf("%s", &usserid);
    printf("\t Password : ");
    initscr();
    noecho();

    for (i = 0; i < 100; i++)
    {
        ch = getch();
        if (ch == '\n')
            break;

        password[i] = ch;
        ch = '*';
        printw("%c ", ch);
    }
    password[i] = '\0';
    endwin();
    while (fread(&cr, sizeof(cr), 1, fptr))
        ;
    {
        if (strcmp(usserid, cr.user_id) == 0 && strcmp(password, cr.password) == 0)
        {

            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("\t \t \t You are successfully logged in :)\n");
            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            subMenuCustomer();
        }
        else
        {

            printf("\t \t **************************************************\n");
            printf("\t \t \t Your UserID or password is incorrect !!\n");
            printf("\t \t **************************************************\n");
            printf("\n");
            customerLogin();
        }
    }
    fclose(fptr);
}

void viewCustomer()
{
    char ch;
    FILE *fptr;
    struct user cr;
    fptr = fopen("customer.txt", "r");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\t---------------------------------------------------------------------------------------------\n");

    while (fread(&cr, sizeof(struct user), 1, fptr))

        printf("\t \t Id = %s \t| Name = %s \t| Email = %s  \t| Phone = %s \n", cr.user_id, cr.user_name, cr.email, cr.phone);

    printf("\t---------------------------------------------------------------------------------------------\n");
    // close file
    fclose(fptr);
}

struct busroot
{
    char root_name[MAX_LIMIT];
    char from[MAX_LIMIT];
    char to[MAX_LIMIT];
    char distance[MAX_LIMIT];
};

void busRootAdd()
{
    FILE *fptr;
    struct busroot root;
    fptr = fopen("busroot.txt", "a");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t Welcome Bus root Add Form\n");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t Enter Root Name: ");
    scanf("%s", &root.root_name);
    printf("\t Enter Root From: ");
    scanf("%s", &root.from);
    printf("\t Enter Root To: ");
    scanf("%s", &root.to);
    printf("\t Enter Root Distance: ");
    scanf("%s", &root.distance);

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fwrite(&root, sizeof(root), 1, fptr);
    fclose(fptr);
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t \t Root Name %s's  Data Saved Successfully !! \n", root.root_name);
    printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
}

void busRootView()
{
    char ch;
    FILE *fptr;
    struct busroot root;
    fptr = fopen("busroot.txt", "r");
    if (fptr == NULL)
    {
        printf("Data File Not Found !");
        exit(1);
    }
    printf("\t---------------------------------------------------------------------------------------------\n");

    while (fread(&root, sizeof(struct busroot), 1, fptr))

        printf("\t\t Name = %s \t| From = %s \t| To = %s  \t| Distance = %s \n", root.root_name, root.from, root.to, root.distance);

    printf("\t---------------------------------------------------------------------------------------------\n");

    fclose(fptr);
}

struct busdata
{
    char root_name[MAX_LIMIT];
    char bus_name[MAX_LIMIT];
    int total_seat;
};

void busAdd()
{
    FILE *fptr, *rptr;
    struct busdata bus;
    struct busroot root;
    fptr = fopen("busdata.txt", "a");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t Welcome Bus Data Add Form\n");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t Enter Root Name: ");
    scanf("%s", &bus.root_name);
    rptr = fopen("busroot.txt", "r");
    if (rptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    while (fread(&root, sizeof(struct busroot), 1, rptr))
        ;
    {
        if (strcmp(bus.root_name, root.root_name) == 0)
        {
            printf("\t Enter Bus Name: ");
            scanf("%s", &bus.bus_name);

            bus.total_seat = ROWV * COLMNV;
            printf("\t  Bus Total Seat : %d ", bus.total_seat);
            printf("\n");

            if (fptr == NULL)
            {
                printf("Error!");
                exit(1);
            }

            fwrite(&bus, sizeof(bus), 1, fptr);
            fclose(fptr);
            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("\t \t \t Bus Name %s's  Data Saved Successfully !! \n", bus.bus_name);
            printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
            printf("\n");
        }
        else
        {
            printf("\t \t **************************************************\n");
            printf("\t \t \t This Root Data Not Found !!\n", bus.bus_name);
            printf("\t \t **************************************************\n");
            printf("\n");
        }
    }

    fclose(rptr);
}

void busAddView()
{

    FILE *fptr;
    struct busdata busd;
    fptr = fopen("busdata.txt", "r");
    if (fptr == NULL)
    {
        printf("Data File Not Found !");
        exit(1);
    }
    printf("\t---------------------------------------------------------------------------------------------\n");

    while (fread(&busd, sizeof(struct busdata), 1, fptr))

        printf("\t\t Root Name = %s \t| Bus Name = %s \t| Total Seat = %d  \t \n", busd.root_name, busd.bus_name, busd.total_seat);

    printf("\t---------------------------------------------------------------------------------------------\n");

    fclose(fptr);
}
struct seatbook
{
    char date[MAX_LIMIT];
    char bus_name[MAX_LIMIT];
    int book_row;
    int book_column;
    int total_seat;
    int availabl_seat;
    int book_seat;
};

void seeAvailableBus()
{
    char date[MAX_LIMIT];
    char bus_name[MAX_LIMIT];
    int n = 0, h = 1;
    FILE *fptr;
    struct seatbook seat;
    fptr = fopen("seatbook.txt", "r");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("\t Enter Date dd/mm/yyyy: ");
    scanf("%s", &date);
    printf("\t Enter Bus Name : ");
    scanf("%s", &bus_name);

    while (fread(&seat, sizeof(seat), 1, fptr) == 1)
    {

        if (strcmp(seat.date, date) == 0 && strcmp(seat.bus_name, bus_name) == 0)
        {

            printf("\t \t \t  \t  \t  Seats\n");
            printf("\t\t 1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \t 8 \t 9 \t 10");
            printf("\n");
            for (int i = 0; i < ROWV; i++)
            {

                printf("Rows %d : ", i + 1);
                for (int j = 0; j < COLMNV; j++)
                {

                    if (seat.book_row == i && seat.book_column == j)
                    {
                        printf("\t %d", h);
                    }
                    else
                    {
                        printf("\t %d", n);
                    }
                }

                printf("\n");
            }
            printf("\n");
        }

        printf("\t \t **************************************************\n");
        printf("\t \t \t This Bus Data Not Found !!\n");
        printf("\t \t **************************************************\n");
        printf("\n");
    }
    //printf("\t---------------------------------------------------------------------------------------------\n");

    //printf ("\t\t Root Name = %s \t| Bus Name = %s \t| Total Seat = %s  \n", bus.root_name,bus.bus_name, bus.total_seat);

    //printf("\t---------------------------------------------------------------------------------------------\n");

    fclose(fptr);
}
void bookedDetails()
{
    FILE *fptr;
    char date[MAX_LIMIT];
    char bus_name[MAX_LIMIT];
    struct seatbook seat;
    fptr = fopen("seatbook.txt", "r");
    if (fptr == NULL)
    {
        printf("Data File Not Found !");
        exit(1);
    }
    printf("\t Enter Date dd/mm/yyyy: ");
    scanf("%s", &date);
    printf("\t Enter Bus Name : ");
    scanf("%s", &bus_name);
    printf("\t---------------------------------------------------------------------------------------------------------\n");

    while (fread(&seat, sizeof(struct seatbook), 1, fptr))
    {

        if (strcmp(seat.date, date) == 0 && strcmp(seat.bus_name, bus_name) == 0)
        {

            printf("\t\t Date = %s \t| Bus Name = %s \t| Row[%d]Column[%d] = Booked\t \n", seat.date, seat.bus_name, seat.book_row + 1, seat.book_column + 1, seat.availabl_seat, seat.book_seat);
        }
    }

    printf("\t-------------------------------------------------------------------------------------------------------\n");

    fclose(fptr);
}
void bookedAllData()
{
    FILE *fptr;

    struct seatbook seat;
    fptr = fopen("seatbook.txt", "r");
    if (fptr == NULL)
    {
        printf("Data File Not Found !");
        exit(1);
    }

    printf("\t----------------------------------------------------------------------------------------------------\n");

    while (fread(&seat, sizeof(struct seatbook), 1, fptr))
    {

        printf("\t\t Date = %s \t| Bus Name = %s \t| Row[%d]Column[%d] = Booked\t \n", seat.date, seat.bus_name, seat.book_row + 1, seat.book_column + 1, seat.availabl_seat, seat.book_seat);
    }

    printf("\t---------------------------------------------------------------------------------------------------\n");

    fclose(fptr);
}
void chooseSeat()
{
    int row, col, k;
    printf("\t \t Which row do you want to choose? : ");
    scanf("%d", &row);
    printf("\t \t Which seat do you want to select? : ");
    scanf("%d", &col);
    if (row > ROWV || col > COLMNV)
    {
        printf("\t \t Wrong Entry !! Try again\n");
        chooseSeat();
    }
    else if (fseat[row - 1][col - 1] != 0)
    {
        printf(" \t \t Seat is already reserved try another !!\n");
        chooseSeat();
    }
    else
    {
        fseat[row - 1][col - 1] = 1;
        booked_row = row - 1;
        booked_col = col - 1;

        displaySeat();
    }
}

void bookedSeat()
{

    int num_seat, row, colum, total_seat, available, booked, incre = 0;
    struct busdata bus;
    struct seatbook seat;
    FILE *fptr, *rptr;
    fptr = fopen("seatbook.txt", "a");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\t \t Welcome Bus Reservation Form\n");
    printf("\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    printf("\n");
    printf("\t\t  Enter Date dd/mm/yyyy: ");
    scanf("%s", &seat.date);
    printf("\t \t  Enter Bus Name : ");
    scanf("%s", &seat.bus_name);

    rptr = fopen("busdata.txt", "r");
    if (rptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    while (fread(&bus, sizeof(struct busdata), 1, rptr))
        ;
    {
        if (strcmp(seat.bus_name, bus.bus_name) == 0)
        {

            if (rptr == NULL)
            {
                printf("Error!");
                exit(1);
            }
            else
            {
                total_seat = ROWV * COLMNV;

                //printf("How many seats do you want to reserve?\n");
                //scanf("%d", &num_seat);

                displaySeat();

                //for (int i = 1; i <= num_seat; i++)
                //{

                seat.total_seat = total_seat;
                seat.availabl_seat = total_seat - 1;
                seat.book_seat = incre + 1;
                chooseSeat();
                seat.book_row = booked_row;
                seat.book_column = booked_col;
                //printf("row = %d col = %d ",seat.book_row , seat.book_column);
                if (fptr == NULL)
                {
                    printf("Error!");
                    exit(1);
                }
                fwrite(&seat, sizeof(seat), 1, fptr);

                printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                printf("\t \t \t Congratulations!! Reservation Completed !!! \n");
                printf("\t \t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
                printf("\n");
                printf("\n");

                //}
                fclose(fptr);
            }
        }
        else
        {
            printf("\t \t **************************************************\n");
            printf("\t \t \t This Bus Data Not Found !!\n");
            printf("\t \t **************************************************\n");
            printf("\n");
        }
    }
    fclose(rptr);
}

void displaySeat()
{
    printf("\t \t \t  \t  \t  Seats\n");
    printf("\t\t 1 \t 2 \t 3 \t 4 \t 5 \t 6 \t 7 \t 8 \t 9 \t 10");

    printf("\n");

    for (int i = 0; i < ROWV; i++)
    {

        printf("Rows %d : ", i + 1);
        for (int j = 0; j < COLMNV; j++)
        {

            printf("\t %d ", fseat[i][j]);
        }

        printf("\n");
    }
    printf("\n");
}
