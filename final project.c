#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NUM_SEATS (40)
#define AC   (15)
#define NON_AC            (MAX_NUM_SEATS - AC)

void wellcome();
void login();
void airline();
void BdtoIndia();
void BdtoPakistan();
void BdtoSrilanka();
void BdtoJapan();
void BdtoCanada();
void information();
void seat_create();

int main(){
	wellcome();
	return(0);
}

void wellcome(){

	struct user{
		char name[40];
		char password[40];
	};

	FILE *fp;
	int i=0;
	int ret_userName;
	int ret_password;
	char userName[40];
	char password[40];
	struct user user_Set[10];
	int choice;

	printf("(1)Login\n(2)Create Account\nEnter Choice : ");
	scanf("%d",&choice);
	system("CLS");

	if(choice==2){
		printf("Registration :\nUser Name : ");
		fgets(user_Set[0].name,40,stdin);
		fgets(user_Set[0].name,40,stdin);
		printf("password : ");
		fgets(user_Set[0].password,40,stdin);
		fp=fopen("user.txt","wb");
		fwrite(user_Set,1,sizeof(user_Set),fp);
		printf("Your account has been created\n");
		fclose(fp);
		system("CLS");
		main();
	}else if(choice==1){
		fp=fopen("user.txt","rb");
		fread(user_Set,sizeof(struct user),10,fp);
		printf("%s",user_Set[0].name);
		fclose(fp);
		printf("Enter UserName : ");
		fgets(userName,40,stdin);
		fgets(userName,40,stdin);
		printf("Enter password : ");
		fgets(password,40,stdin);
		for(i=0;i<10;i++){
			ret_userName=strcmp(userName,user_Set[i].name);
			ret_password=strcmp(password,user_Set[i].password);
			if(ret_password==0 && ret_password==ret_userName){
				login();
				break;
			}else if(i==9){
				printf("You entered wrong!!!!\n");
				main();
			}
		}
	}


}
void login(){
    system("CLS");
	printf("welcome dear user ");
	airline();
}


void airline(){
	printf("--------WELCOME TO OUR AIRLINE------------\n");
	printf("Which flight do you want to choose ?\n"
		"\t1. Bangladesh to India\n"
		"\t2. Bangladesh to Pakistan\n"
		"\t3. Bangladesh to Srilanka\n"
		"\t4. Bangladesh to Japan\n"
		"\t5. Bangladesh to Canada\n");
	{
		printf("Please give your chosen flight number, like 1 , 2 or 3\n");
		int flightNumber;
		scanf("%d",&flightNumber);
        system("CLS");

		switch(flightNumber){
			case 1:
			printf("\n\n>>>>You choose flight number %d <<<<\n\n",flightNumber);
			printf("Details about your flight are given below\n\n");
			BdtoIndia();
			break;
			case 2:
			printf(">>>>You choose flight number %d <<<<\n",flightNumber);
			printf("Details about your flight are given below\n\n");
			BdtoPakistan();
			break;
			case 3:
			printf(">>>>You choose flight number %d<<<< \n",flightNumber);
			printf("Details about your flight are given below\n\n");
			BdtoSrilanka();
			break;
			case 4:
			printf(">>>>You choose flight number %d <<<<\n",flightNumber);
			printf("Details about your flight are given below\n\n");
			BdtoJapan();
			break;
			case 5:
			printf(">>>>You choose flight number %d<<<< \n",flightNumber);
			printf("Details about your flight are given below\n\n");
			BdtoCanada();
			break;
		}

		{


			int choice;
			printf("(1)make reservation\n(2)Exit\nenter the choice\n");
			scanf("%d",&choice);
			system("CLS");

			switch (choice)
			{
            case 1:
                information();
            case 2:
                exit(0);
			}
		}
	}
}

void information(){

	printf("give your information\n");



	char p[20],l[20],b[20],c[20],d[20];
	gets(p);
    printf("Name: ");
    gets(l);
    printf("                 \n");
    printf("City: ");
    gets(b);
    printf("                 \n");
    printf("Phone number: ");
    gets(c);
    printf("                 \n");
    printf("Departure date: ");
    gets(d);
    printf("                 \n");
      int a;
    printf("flight number: ");
    scanf("%d",&a);

    if(a==5){
    printf("--------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\t duration   |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 05\t\t2.00\t\tCanada\t\t17.47 \t 15:47       |\n");
    printf("--------------------------------------------------------------------|\n");


    }
    if(a==2)
    {

    printf("------------------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\t      duration        |\n");
    printf("|-----------------------------------------------------------------------------|\n");
    printf("|02\t\t12.00\t\tPakistan\t\t13.00 \   1:00         |\n");
    printf("------------------------------------------------------------------------------\n");


    }
    if(a==1)
      {
    printf("--------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\ duration    |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 01\t\t10.00\t\tIndia\t\t11.00\t1.00        |\n");
    printf("--------------------------------------------------------------------\n");
}
if(a==3)
    {
    printf("------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\ duration  |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("| 03\t\t14.00\t\tSrilanka\t15.00 \t1.00      |\n");
    printf("------------------------------------------------------------------\n");
}
if(a==4)
{
    printf("------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\tduration |\n");
    printf("|----------------------------------------------------------------|\n");
    printf("| 04\t\t11.30\t\tJapan\t\t17.30 \t6.00     |\n");
    printf("------------------------------------------------------------------\n");
}
   {
    printf("                 \n");
    printf("                 \n");
    printf("View reservation\n");
    printf("                   \n");

     printf("Name: \n%s\n",l);
        printf("                \n");
        printf("City: \n%s\n",b);
        printf("                \n");
        printf("Phone number: \n%s\n",c);
        printf("                        \n");
        printf("Departure date:\n%s\n",d);
        printf("                      \n");
    }


//system("CLS");
	seat_create();

}

void seat_create()
{



	printf("                   \n");
	printf("please book your seat\n");
	int plane[MAX_NUM_SEATS] = {0}, i=0;
	int nNumSeatsInFirst = 0;
	int nNumSeatsInEconomy = 0;
      int nSeatAssignmentFirstClass = 1; // start at 1;
      int nSeatAssignmentEconomy = AC + 1; // start at 6
      int k;
      int nClass;
      int nCurrentSeatAssignment;//      firstClass=1,NON AC seats=6,choice;
      char response[2];

      int       bPrintTicket;

      while( i < MAX_NUM_SEATS )


      {
      	printf("\n%s\n%s\n", "Please type 1 for \"AC seats\"","Please type 2 for\"NON AC seats\"");
      	scanf("%d", &k);

      	if( !( ( 1 == k ) || ( 2 == k ) ) )
      	{
      	    //printf("Do You want more seat\n");
      		continue;
      	}

            // start out assuming we will print ticket!



      	bPrintTicket = 1;
            nClass = k;
            // store the class before doing all the logical checks

            /****************************************************************/
            /***************      NON AC seats SECTION             ***************/
            /****************************************************************/
            if( 2 == k )
            {
                  // check for NON AC seats full
            	if( nNumSeatsInEconomy >= NON_AC )
            	{
                        // NON AC seats full
                        // check for AC seats  (plane ) full
            		if( nNumSeatsInFirst <= AC )
            		{



            			printf("The NON AC seats section is full.\n");
            			printf("would you like to sit in AC seats ");
            			printf("section( Y or N)?");
            			scanf("%s", response);

            			if ( toupper(response[0])=='Y')
            			{
                                    // print ticket!
            				bPrintTicket = 1;
            				printf( "Your seat assignment is %d\n", nSeatAssignmentFirstClass );
            				nCurrentSeatAssignment = nSeatAssignmentFirstClass;
            				plane[nSeatAssignmentFirstClass - 1] = 1;
            				nSeatAssignmentFirstClass++;
            				nNumSeatsInFirst++;
            				nClass = 1;
            				i++;
            			}

            		}
            		 exit(4);

            	}
            	else
            	{
                        // NON AC seats is not full
            		printf("Your seat assignment is %d\n", nSeatAssignmentEconomy );
            		plane[(nSeatAssignmentEconomy - 1)] = 1;
            		nCurrentSeatAssignment = nSeatAssignmentEconomy;
            		nSeatAssignmentEconomy++;
            		nNumSeatsInEconomy++;
            		i++;
            	}


            } // if( choice == 2 )


            /****************************************************************/
            /***************      AC seats SECTION         ***************/
            /****************************************************************/
            if( 1 == k )
            {
                  // check for fisrt class  full
            	if( nNumSeatsInFirst >= AC )
            	{
                        // AC seats full
                        // check for NON AC seats class  (plane) full
            		if( nNumSeatsInEconomy <= NON_AC )
            		{
            			printf("The AC seats section is full.\n");
            			printf("Would you like to sit in the NON AC seats ");
            			printf("section (Y or N)?");
            			scanf("%s", response);


            			if(toupper(response[0])=='Y')
            			{
            				printf("Your seat assignment is %d\n",nSeatAssignmentEconomy);
            				plane[nSeatAssignmentEconomy - 1] = 1;
            				nCurrentSeatAssignment = nSeatAssignmentEconomy;
            				nSeatAssignmentEconomy++;
            				nNumSeatsInEconomy++;
            				i++;
            				nClass = 2;
            			}

            		}
            	}
else
            	{
                        // first is not full
            		printf("Your seat assignment is %d\n", nSeatAssignmentFirstClass );
            		plane[(nSeatAssignmentFirstClass - 1)] = 1;
            		nCurrentSeatAssignment = nSeatAssignmentFirstClass;
            		nSeatAssignmentFirstClass++;
            		nNumSeatsInFirst++;

            		i++;
            	}
            }

            if( 1 == bPrintTicket )
            {
            	printf("\n==================================\n");
            	printf("                             \n");
            	printf("                             \n");
            	printf("    Class:%d                      \n",nClass);
            	printf("                             \n");
            	printf("    SEAT:%d                      \n",nCurrentSeatAssignment);
            	printf("                            \n");
                printf("                            \n");
            	printf("===================================\n");
            	printf("                                   \n");
            	printf("Thank you for booking your seats\n");
            	printf("                                  \n");

            }
        }

        printf("\nAll the seats for this flight are sold\n");


    }


void BdtoIndia(){
    printf("--------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\ duration    |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 01\t\t10.00\t\tIndia\t\t11.00\t1.00        |\n");
    printf("--------------------------------------------------------------------\n");
}

void BdtoPakistan(){
    printf("------------------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\t      duration        |\n");
    printf("|-----------------------------------------------------------------------------|\n");
    printf("|02\t\t12.00\t\tPakistan\t\t13.00 \   1:00         |\n");
    printf("------------------------------------------------------------------------------\n");


}

void BdtoSrilanka(){
    printf("------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\ duration  |\n");
    printf("|-----------------------------------------------------------------|\n");
    printf("| 03\t\t14.00\t\tSrilanka\t15.00 \t1.00      |\n");
    printf("------------------------------------------------------------------\n");
}

void BdtoJapan(){
    printf("------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\tduration |\n");
    printf("|----------------------------------------------------------------|\n");
    printf("| 04\t\t11.30\t\tJapan\t\t17.30 \t6.00     |\n");
    printf("------------------------------------------------------------------\n");
}

void BdtoCanada(){
    printf("--------------------------------------------------------------------\n");
    printf("|Flight Number\tDeparturel\tDestination\tArrival\t duration   |\n");
    printf("|-------------------------------------------------------------------|\n");
    printf("| 05\t\t2.00\t\tCanada\t\t17.47 \t 15:47       |\n");
    printf("--------------------------------------------------------------------|\n");
}
