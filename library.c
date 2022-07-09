#include<stdio.h>
void main()
{
    homepage();
    signin();
}

void homepage()
{
    printf("\n");
    printf("************************************************************************************************************************\n");
    printf("************************************************************************************************************************\n");
    printf("\n\n");
    printf("*************************                              LIBRARY SYSTEM                          *************************\n");
    printf("\n\n");
    printf("************************************************************************************************************************\n");
    printf("************************************************************************************************************************\n");

    printf("\n\n\n\n");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n\n\n\n\n\n");


    printf("Press any key to continue....\n\n");
    printf("************************************************************************************************************************\n");


    getch();
    system("cls");

}



void student()
{
    system("cls");
    int id;
    printf("\n*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n\n\n\n\n\n");
    printf("Thanks for choosing 1.....\n\n\n\n");
    printf("\t\t\t\t\t\tMember id:\n");

    printf("************************************************************************************************************************\n");
    scanf("%d",&id);
    details(id);
    printf("\n");
    getch();
    system("cls");
}
void details(int id)
{
    system("cls");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\t\t\t\t\t Name:M.N.Amalan\n\n");
    printf("\t\t\t\t\t Student id:As2020999\n\n");
    printf("\t\t\t\t\t E-mail id:abde@gmail.com\n\n");
    printf("\t\t\t\t\t Phone id:0777123456\n\n");
    printf("\t\t\t\t\t Address:A9 road,hehala,mannar\n\n");
    printf("\t\t\t\t\t Member id:%d\n\n",id);
    printf("\nPress any key to continue......\n");
    printf("************************************************************************************************************************\n");
    getch();
    system("cls");
    book_details();

}
void book_details()
{
    system("cls");
    int choice;
     printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
     printf("\n\n\n");
     printf("\t\t\t\t\t 1.Search book\n");
     printf("\t\t\t\t\t 1.Return book\n");
     printf("\n\nEnter your choice:\n");
     printf("************************************************************************************************************************\n");
     scanf("%d",&choice);

     switch(choice)
     {
     case 1:
        search_book();
        break;
     case 2:
        details_book();
        break;
     default:
        break;
     }

}
void search_book()
{
    system("cls");
    int bookid;
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\n\t\t\t\tPlease enter the book id:\n\n\n");
    printf("************************************************************************************************************************\n");
    scanf("%d",&bookid);
    aboutbook(bookid);

}
void aboutbook(int bookid)
{
    system("cls");
     printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
     printf("\n");
     printf("\t\tBook name  \t\t:Code name god\n\n");
     printf("\t\tBook id    \t\t:%d\n\n",bookid);
     printf("\t\tBook author\t\t:Mani bhaumik\n\n");
     printf("\t\tBook price \t\t:250Rs\n\n");

     printf("\n\n");
     printf("Book status    \t\t:Available");

}

void details_book()
{
    system("cls");
    int choice;

     printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
     printf("\t\t1.Book is order(no damage)\t:\n");
     printf("\t\t2.Some damage             \t:\n");
     printf("\t\t3.Late submit             \t:\n\n");

     printf("Enter your choice:\n");
     printf("************************************************************************************************************************\n");
     scanf("%d",&choice);

     switch(choice)
     {
     case 1:
        book_is_order();
        break;
     case 2:
        some_damage();
        break;
     case 3:
        late_submit();
        break;
     default:
        printf("invalid enter number!!!!\n");
     }

}
void book_is_order()
{
    system("cls");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\t\t\t\t\tThank you come again\n\n");
    printf("************************************************************************************************************************\n\n");
    printf("Press any key to exit:");
}
void some_damage()
{
    system("cls");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\n\t\t\t\t\tYour Penatly amount per day:100Rs\n");
    printf("************************************************************************************************************************\n\n");
    printf("\t\t\t\t\tThank you come again\n\n");
    printf("************************************************************************************************************************\n\n");
    printf("Press any key to exit:");
}
void late_submit()
{
    system("cls");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\n\t\t\t\t\tYour Penatly amount per day:100Rs\n");
    printf("************************************************************************************************************************\n\n");
    printf("\t\t\t\t\tThank you come again\n\n");
    printf("************************************************************************************************************************\n\n");
    printf("Press any key to exit:");
}




void signin()
{
    system("cls");
    int choice;
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n\n\n\n");
    printf("Please choose any option to login the system.......\n\n\n\n");
    printf("\t\t\t\t1.Student\n");
    printf("\t\t\t\t2.Professor\n");
    printf("\t\t\t\t3.Library staff\n");
    printf("\t\t\t\t4.Register new members\n");
    printf("\t\t\t\t5.exit the system \n\n\n\n");

    printf("Enter your choice:\n\n");

    printf("************************************************************************************************************************\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        student();
        break;
    case 2:
        professor();
        break;
    case 3:
        library_staff();
        break;
    case 4:
        register_new();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("invalid enter number!!!!");
    }
}
void professor()
{
    system("cls");
    int id;
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n\n\n\n\n\n");
    printf("Thanks for choosing 1.....\n\n\n\n");
    printf("\t\t\t\t\t\tMember id:\n");

    printf("************************************************************************************************************************\n");
    scanf("%d",&id);
    getch();
    system("cls");
    details(id);

}
void library_staff()
{
    system("cls");
    int id;
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n\n\n\n\n\n");
    printf("Thanks for choosing 1.....\n\n\n\n");
    printf("\t\t\t\t\t\tMember id:");

    printf("************************************************************************************************************************\n");
    scanf("%d",&id);
    details(id);
    printf("\n");
    getch();
    system("cls");
}
void register_new()
{
    system("cls");
    printf("*************************                      WELCOME TO LIBRARY SYSTEM                       *************************\n");
    printf("\t\t\t\t\t Name:M.N.Amalan\n\n");
    printf("\t\t\t\t\t Student id:As2020999\n\n");
    printf("\t\t\t\t\t E-mail id:abde@gmail.com\n\n");
    printf("\t\t\t\t\t Phone id:0777123456\n\n");
    printf("\t\t\t\t\t Address:A9 road,hehala,mannar\n\n");

    printf("\nPress 0,add to become a library member.......\n");
    printf("************************************************************************************************************************\n");

}

