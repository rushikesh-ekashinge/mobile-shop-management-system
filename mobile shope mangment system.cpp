#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct mobile
{
    char nm[200];
    double mob;
    char a[200];
    int price;

};

void display_history();
void display_cust();
void display_data();
void display_ma();
int main()
{
     int k ;

while(1)

   {

    char *time_now;				//it provide single function to current time
    time_t t = time(NULL);		//it obtain current time
    time_now = ctime(&t);	  //   ctime means convert time_t value in textual reprsention
     printf("\n\n\nDate and Time : %s", time_now);

    printf("\nSelect Required option. \n1.For Mobile purchasing.\n2.For purchased history.\n3.For viewing customer info.\n4.Display data." );
    scanf("%d",&k);
    switch(k)
{

        case 1:
               display_ma();
                break;

        case 2: display_history();

                 break;

        case 3: display_cust();

                break;
        case 4: display_data();

               break;
printf("--------------------------------------------------------------------------------------");
        }

}


   return 0;
}//main


void display_ma()
{
int op,ver,n,p,d;

long int gst=0,total=0;
     ma:
    printf("\n\n\n###############################################################################################");
    printf("\n++++++++++++++++++                                                      +++++++++++++++++++++++");
    printf("\n++++++++++++++++++         WELCOME TO RKVP MOBILE SHOP                  +++++++++++++++++++++++");
    printf("\n++++++++++++++++++                                                      +++++++++++++++++++++++");
    printf("\n###############################################################################################");


        printf("\n\n\n\n\n ENTER THE COMPANY OPTION:");
        printf("\n1.OPPO");
        printf("\n2.SAMSUNG");
        printf("\n3.REALME");
        printf("\n4.REDMI");
        printf("\n5.SONY");
        printf("\n6.ONEPLUS");
        printf("\n7.VIVO");
        printf("\n8.NOKIA");
        printf("\n9.APPLE");
        printf("\n10.MOTOROLA");
        printf("\n11.EXIT\n");
        scanf("%d", &op);
        switch (op)
        {

        case 1:

            printf("\n\n * OPPO *");

            printf("\n\n Enter the choice version:");

            printf("\n 1.OPPO Reno 5 Pro 5G");
            printf("\n 2.OPPO F17 Pro");
            printf("\n 3.OPPO A53 2020");
            printf("\n 4.OPPO A15");
            printf("\n 5.OPPO A31 2020");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);

            switch (ver)
            {
            case 1:

                printf("\n 1.OPPO Reno 5 Pro 5G");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4350 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 34,497");


                break;
            case 2:
                printf("\n 2.OPPO F17 Pro");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4015 mAh\n SIM=dual");
                printf("\n screen size is :-6.43 inches\n weight=164 grams");
                printf("\n color is available:-Matte Black, Magic Blue, Metallic White");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=60 MP,Front=18 MP");
                printf("\n\n\n price is:- 21,490");

                break;
            case 3:
                printf("\n 3. OPPO A53 2020");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=186 grams");
                printf("\n color is available:-Electric Black, Fairy White, Fancy Blue");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=17 MP,Front=16 MP");
                printf("\n\n\n price is:- 12,869");

                break;

            case 4:
                printf("\n 4.OPPO A15");
                printf("\n features:-");
                printf("\n RAM=3 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 4230 mAh\n SIM=dual");
                printf("\n screen size is :-6.52 inches\n weight=175 grams");
                printf("\n color is available:-Dynamic Black, Mystery Blue");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=17 MP,Front=5 MP");
                printf("\n\n\n price is:- 8,990");

                break;
            case 5:
                printf("\n 5.OPPO A31 2020");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4230 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=180 grams");
                printf("\n color is available:-Mystery Black, Fantasy White");
                printf("\n operating system is:-Android 9");
                printf("\n camera rear=16 MP,Front=8 MP");
                printf("\n\n\n price is:- 9,990");

                break;

            case 6:

                  goto ma;
                  break;

            }
            break;

        case 2:
            printf("\n\n * SAMSUNG *");

            // do
            //{

            printf("\n\n Enter the choice version:");

            printf("\n 1.Samsung Galaxy A52 5G");
            printf("\n 2.Samsung Galaxy F62");
            printf("\n 3.Samsung Galaxy A32 4G");
            printf("\n 4.Samsung Galaxy M12");
            printf("\n 5.Samsung Galaxy S21");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.Samsung Galaxy A52 5G");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4500 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=189 grams");
                printf("\n color is available:-Awesome Black, Awesome Blue, Awesome Violet, Awesome White");
                printf("\n operating system is:-Android 11");
                printf("\n camera rear=86 MP,Front=32 MP");
                printf("\n\n\n price is:- 37,100");

                break;
            case 2:
                printf("\n 2.Samsung Galaxy F62");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 7000 mAh\n SIM=dual");
                printf("\n screen size is :-6.70 inches\n weight=218 grams");
                printf("\n color is available:-Laser Blue, Laser Green, Laser Grey");
                printf("\n operating system is:-Android 11");
                printf("\n camera rear=86 MP,Front=32 MP");
                printf("\n\n\n price is:- 23,999");

                break;
            case 3:
                printf("\n 3.Samsung Galaxy A32 4G");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.40 inches\n weight=184 grams");
                printf("\n color is available:-Awesome Black, Awesome Blue, Awesome Violet, Awesome White");
                printf("\n operating system is:-Android");
                printf("\n camera rear=79 MP,Front=20 MP");
                printf("\n\n\n price is:- 21,999");

                break;
            case 4:
                printf("\n 4.Samsung Galaxy M12");
                printf("\n features:-");
                printf("\n RAM=3 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 6000 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=221 grams");
                printf("\n color is available:-Attractive Black, Elegant Blue, Trendy Emerald Green");
                printf("\n operating system is:-Android");
                printf("\n camera rear=57 MP,Front=8 MP");
                printf("\n\n\n price is:- 10,999");

                break;
            case 5:
                printf("\n 5.Samsung Galaxy S21");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.20 inches\n weight=171 grams");
                printf("\n color is available:-Phantom Violet");
                printf("\n operating system is:-Android 11");
                printf("\n camera rear=88 MP,Front=10 MP");
                printf("\n\n\n price is:- 69,999");

                break;
            case 6:

                  goto ma;
                  break;
            }
            break;

        case 3:
            printf("\n\n * REALME *");

            // do
            //{

            printf("\n\n Enter the choice version:");

            printf("\n 1.Realme X2 Pro");
            printf("\n 2.Realme 7");
            printf("\n 3.Realme 3 Pro");
            printf("\n 4.Realme 6i");
            printf("\n 5.Realme C12");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.Realme X2 Pro");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=199 grams");
                printf("\n color is available:-Neptune Blue, Lunar White");
                printf("\n operating system is:-Android 9 Pie");
                printf("\n camera rear=87 MP,Front=16 MP");
                printf("\n\n\n price is:- 24,884");

                break;
            case 2:
                printf("\n 2.Realme 7");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=196.50 grams");
                printf("\n color is available:-Mist Blue, Mist White");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=76 MP,Front=16 MP");
                printf("\n\n\n price is:- 14,999");

                break;
            case 3:
                printf("\n 3.Realme 3 Pro");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4045 mAh\n SIM=dual");
                printf("\n screen size is :-6.30 inches\n weight=172 grams");
                printf("\n color is available:-Carbon Grey, Lightning Purple, Nitro Blue");
                printf("\n operating system is:-Android 9 Pie");
                printf("\n camera rear=21 MP,Front=25 MP");
                printf("\n\n\n price is:- 16,490");

                break;
            case 4:
                printf("\n 4.Realme 6i");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4300 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=191 grams");
                printf("\n color is available:-Eclipse Black, Lunar White");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=60 MP,Front=16 MP");
                printf("\n\n\n price is:- 13,189");

                break;
            case 5:
                printf("\n 5.Realme C12");
                printf("\n features:-");
                printf("\n RAM=3 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 6000 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=209 grams");
                printf("\n color is available:-Power Blue, Poer Silver");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=17 MP,Front=5 MP");
                printf("\n\n\n price is:- 8,450");

                break;
            case 6:

                  goto ma;
                  break;
            }
            break;

        case 4:
            printf("\n\n * REDMI *");

            printf("\n\n Enter the choice version:");
            printf("\n 1.Redmi Note 10");
            printf("\n 2.Redmi 9i");
            printf("\n 3.Redmi 8A Dual");
            printf("\n 4.Redmi K30 5G");
            printf("\n 5.Redmi Note 7S");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.Redmi Note 10");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.43 inches\n weight=178.80 grams");
                printf("\n color is available:-Aqua Green, Frost White, Shadow Black");
                printf("\n operating system is:-Android 11");
                printf("\n camera rear=60 MP,Front=13 MP");
                printf("\n\n\n price is:- 11,999");

                break;
            case 2:
                printf("\n 2.Redmi 9i");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.53 inches\n weight=194 grams");
                printf("\n color is available:-Midnight Black, Sea Blue, Nature Green");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=13 MP,Front=5 MP");
                printf("\n\n\n price is:- 8,049");

                break;
            case 3:
                printf("\n 3.Redmi 8A Dual");
                printf("\n features:-");
                printf("\n RAM=2 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.22 inches\n weight=188 grams");
                printf("\n color is available:-Midnight Grey, Sky White, Sea Blue");
                printf("\n operating system is:-Android 9.0");
                printf("\n camera rear=15 MP,Front=8 MP");
                printf("\n\n\n price is:- 7,639");

                break;
            case 4:
                printf("\n 4.Redmi K30 5G");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4500 mAh\n SIM=dual");
                printf("\n screen size is :-6.50 inches\n weight=208 grams");
                printf("\n color is available:-Deep Sea Light, Time Monologue, Flower, Shadow, Purple Jade Fantasy");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=79 MP,Front=22 MP");
                printf("\n\n\n price is:- 20,100");

                break;
            case 5:
                printf("\n 5.Redmi Note 7S");
                printf("\n features:-");
                printf("\n RAM=3 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.30 inches\n weight=186 grams");
                printf("\n color is available:-Astro Moonlight White, Onxy Black, Ruby Red, Sapphire Blue");
                printf("\n operating system is:-Android Pie");
                printf("\n camera rear=53 MP,Front=13 MP");
                printf("\n\n\n price is:- 11,600");

                break;
            case 6:

                  goto ma;
                  break;
            }
            break;

        case 5:
            printf("\n\n * SONY *");
            printf("\n\n Enetr the choice version:");

            printf("\n 1.Sony Xperia 8 Lite");
            printf("\n 2.Sony Xperia 5 II");
            printf("\n 3.Sony Xperia XZ2");
            printf("\n 4.Sony Xperia L1");
            printf("\n 5.Sony Xperia R1");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.Sony Xperia 8 Lite");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 2870 mAh\n SIM=dual");
                printf("\n screen size is :-6.00 inches\n weight=170 grams");
                printf("\n color is available:-White, Black");
                printf("\n operating system is:-Android");
                printf("\n camera rear=20 MP,Front=8 MP");
                printf("\n\n\n price is:- 20,800");

                break;
            case 2:
                printf("\n 2.Sony Xperia 5 II");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.10 inches\n weight=163 grams");
                printf("\n color is available:-Black, Blue, Grey, Pink");
                printf("\n operating system is:-Android 10");
                printf("\n camera rear=36 MP,Front=8 MP");
                printf("\n\n\n price is:- 78,000");

                break;
            case 3:
                printf("\n 3.Sony Xperia XZ2");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 3180 mAh\n SIM=dual");
                printf("\n screen size is :-5.70 inches\n weight=198 grams");
                printf("\n color is available:-Black");
                printf("\n operating system is:-Android 8.0");
                printf("\n camera rear=19 MP,Front=5 MP");
                printf("\n\n\n price is:- 57,900");

                break;
            case 4:
                printf("\n 4.Sony Xperia L1");
                printf("\n features:-");
                printf("\n RAM=2 GB, 64 \n internal storage=16 GB");
                printf("\n Battery is 2620 mAh\n SIM=dual");
                printf("\n screen size is :-5.50 inches\n weight=180 grams");
                printf("\n color is available:-Black, White, Pink");
                printf("\n operating system is:-Android 7.0");
                printf("\n camera rear=13 MP,Front=5 MP");
                printf("\n\n\n price is:- 9,899");

                break;
            case 5:
                printf("\n 5.Sony Xperia R1");
                printf("\n features:-");
                printf("\n RAM=2 GB, 64 \n internal storage=16 GB");
                printf("\n Battery is 2620 mAh\n SIM=dual");
                printf("\n screen size is :-5.20 inches\n weight=154 grams");
                printf("\n color is available:-Black, Silver");
                printf("\n operating system is:-Android 7.0");
                printf("\n camera rear=13 MP,Front=8 MP");
                printf("\n\n\n price is:- 9,990");

                break;
            case 6:

                  goto ma;
                  break;
            }
            break;

        case 6:
            printf("\n\n * one plus *");

			printf("\n\n Enter the choice version:");
            printf("\n 1.one plus 8T");
            printf("\n 2.one plus nord");
            printf("\n 3.one plus 8T pro");
            printf("\n 4.one plus 7");
            printf("\n 5.one plus 7T");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.one plus 8T");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=153 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 60,000");

                break;
            case 2:
                printf("\n 2.one plus nord");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=573 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v01");
                printf("\n camera rear=48 MP,Front=16 MP");
                printf("\n\n\n price is:- 30,000");
                break;
            case 3:
                printf("\n 3.one plus 8T pro");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=248 GB");
                printf("\n Battery is 6000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=128 MP,Front=62 MP");
                printf("\n\n\n price is:- 80,000");
                break;
            case 4:
                printf("\n 4.one plus 7");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=64 MP,Front=16 MP");
                printf("\n\n\n price is:- 45,000");
                break;
            case 5:
                printf("\n 5.one plus 7T");
                printf("\n features:-");
                printf("\n RAM=12 GB, 64 \n internal storage=128GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 50,000");
                break;
            case 6:

                  goto ma;
                  break;
            }
            break;
        case 7:
            printf("\n\n * VIVO *");

            printf("\n\n Enter the choice version:");
            printf("\n 1.vivo v30");
            printf("\n 2.vivo x50");
            printf("\n 3.vivo x50pro");
            printf("\n 4.vivo Y95s");
            printf("\n 5.vivo v17");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.vivo v30");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=153 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 30,000");

                break;
            case 2:
                printf("\n 2.vivo x50");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=256 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=573 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v01");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 40,000");
                break;
            case 3:
                printf("\n 3.vivo x50pro");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=248 GB");
                printf("\n Battery is 6000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=128 MP,Front=62 MP");
                printf("\n\n\n price is:- 53,000");
                break;
            case 4:
                printf("\n 4.vivo Y95s");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=64 MP,Front=16 MP");
                printf("\n\n\n price is:- 15,000");
                break;
            case 5:
                printf("\n 5.vivo v17");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=128GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=48 MP,Front=16 MP");
                printf("\n\n\n price is:- 18,000");
                break;
            case 6:

                  goto ma;
                  break;
            }

            break;
        case 8:
            printf("\n\n * NOKIA *");

            printf("\n\n Enter the choice version:");
            printf("\n 1.NOKIA 9PUEVIEW");
            printf("\n 2.NOKIA8.1");
            printf("\n 3.NOKIA7.1");
            printf("\n 4.NOKIA5.1");
            printf("\n 5.NOKIA 5.1PLUS");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.NOKIA 9PUEVIEW");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=153 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=48 MP,Front=13 MP");
                printf("\n\n\n price is:- 30,000");

                break;
            case 2:
                printf("\n 2.NOKIA8.1");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=168 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=16 MP,Front=13 MP");
                printf("\n\n\n price is:- 15,000");
                break;
            case 3:
                printf("\n 3.NOKIA7.1");
                printf("\n features:-");
                printf("\n RAM=3GB, 64 \n internal storage=32 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 10,000");
                break;
            case 4:
                printf("\n 4.NOKIA5.1");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=32GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=13 MP,Front=8 MP");
                printf("\n\n\n price is:- 7,000");
                break;
            case 5:
                printf("\n 5.NOKIA 5.1PLUS");
                printf("\n features:-");
                printf("\n RAM=4 GB, 64 \n internal storage=32GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=162 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=16 MP,Front=13 MP");
                printf("\n\n\n price is:- 10,000");
                break;
            case 6:

                  goto ma;
                  break;
            }

            break;
        case 9:
            printf("\n\n * APPLE *");

            printf("\n\n Enter the choice version:");
            printf("\n 1.iphone 12 pro");
            printf("\n 2.iphone 12 ");
            printf("\n 3.iphone 11 pro");
            printf("\n 4.iphone 12mini ");
            printf("\n 5.iphone xr");
            printf("\n 6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.iphone 12 pro");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=256 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=153 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 1,20,000");

                break;
            case 2:
                printf("\n 2.iphone 12 ");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 90,000");
                break;
            case 3:
                printf("\n 3.iphone 11 pro");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 4500 mAh\n SIM=dual");
                printf("\n screen size is :-6.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 55,000");
                break;
            case 4:
                printf("\n 4.iphone 12mini ");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4500 mAh\n SIM=dual");
                printf("\n screen size is :-5.6 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 45,000");
                break;
            case 5:
                printf("\n 5.iphone xr");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-5.55 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=13 MP,Front=13 MP");
                printf("\n\n\n price is:- 50,000");
                break;
            case 6:

                  goto ma;
                  break;
            }

            break;
        case 10:
            printf("\n\n * MOTOROLA *");

            printf("\n\n Enter the choice version:");
            printf("\n 1.MOTOROLA MOTO G 5G");
            printf("\n 2.MOTOROLA G9");
            printf("\n 3.MOTOROLA G9 POWER");
            printf("\n 4.MOTOROLA ONE FUSSION+");
            printf("\n 5.MOTOROLA G8");
            printf("\n6.EXIT\n");
            scanf("%d", &ver);
            switch (ver)
            {
            case 1:
                printf("\n 1.MOTOROLA MOTO G 5G");
                printf("\n features:-");
                printf("\n RAM=8 GB, 64 \n internal storage=128 GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=153 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v11");
                printf("\n camera rear=48 MP,Front=32 MP");
                printf("\n\n\n price is:- 21,000");

                break;
            case 2:
                printf("\n 2.MOTOROLA G9");
                printf("\n features:-");
                printf("\n RAM=6 GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=168 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=48 MP,Front=16 MP");
                printf("\n\n\n price is:- 15,000");
                break;
            case 3:
                printf("\n 3.MOTOROLA G9 POWER");
                printf("\n features:-");
                printf("\n RAM=4GB, 64 \n internal storage=64 GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10 ");
                printf("\n camera rear=63 MP,Front=13 MP");
                printf("\n\n\n price is:- 10,000");
                break;
            case 4:
                printf("\n 4.MOTOROLA ONE FUSSION+");
                printf("\n features:-");
                printf("\n RAM=16 GB, 64 \n internal storage=128GB");
                printf("\n Battery is 5000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=173 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=64 MP,Front=32 MP");
                printf("\n\n\n price is:- 39,000");
                break;
            case 5:
                printf("\n 5.MOTOROLA G8");
                printf("\n features:-");
                printf("\n RAM=3 GB, 64 \n internal storage=32GB");
                printf("\n Battery is 4000 mAh\n SIM=dual");
                printf("\n screen size is :-6.3 inches\n weight=172 grams");
                printf("\n color is available:-Astral Blue,starry Black");
                printf("\n operating system is:-Android v10");
                printf("\n camera rear=16 MP,Front=13 MP");
                printf("\n\n\n price is:- 8,000");
                break;
            case 6:

                  goto ma;
                  break;
            }
                 break;

       case 11:

            printf("\nThank you ! Visit again! Have a  nice day!");
            printf("\n\n  Do you want purchase again. ");
                    printf("Enter your choice:");
                    printf("\n 1.yes");
                    printf("\n 2.no");
                    scanf("%d", &n);
                    switch (n)
                    {
                    case 1:

                        if (n == 1)
                           goto ma;
                        break;

                    case 2:
                        if (n == 2)
                        printf("\n\nThank you ! Visit again! Have a  nice day!\n\n");
                        break;

                    }
                      break;
            }

         if(op!=11)
        {

            printf("\n\n Do you want purchase selected mobile ? \n\n");
            printf("\nEnter the choice");
            printf("\n1.yes");
            printf("\n2.no");
            scanf("%d", &p);
            switch (p)
            {
            case 1:

                printf("\n---------------------------------------------------------\n");
                printf(" Welcome to Billing");
                printf("\n---------------------------------------------------------\n");

               struct mobile m1;

                FILE *fptr, *fptr2, *fptr3;

              //New file for every user
                fptr = (fopen(m1.nm,"a"));
                
				printf("\n Enter name of customer:");
                scanf("%s", &m1.nm);
                fprintf(fptr, "\nCustomer Name:-%s", m1.nm);

                printf(" \n Enter the Contact number:");
                scanf("%ld", &m1.mob);
                fprintf(fptr, "\n Contact Number:-%ld", m1.mob);


                printf("\n Enter the name of the item:-");
                scanf("%s", &m1.a);
                fprintf(fptr, "\nPurchased Mobile:-%s", m1.a);

               printf("\nEnter the price:-");
               scanf("%d", &m1.price);
                fprintf(fptr, "\nPurchased Mobile Price:-%d", m1.price);

                fwrite(&m1,sizeof(m1),1,fptr);

                fclose(fptr);


                gst = ((m1.price / 100) * 18);
                total = m1.price + gst;

               fptr2 = fopen("bill.txt","r");
               if(fptr2==NULL)
               {
                   printf("\nNo customer history found!!");
                   printf("\nAdding new customer....");

                 int cust_no=0;     //No of customers till  now
                int total_price=0;       //Total amount of money earned
                 int no_mob=0;      //Total no of mob sold

                   fclose(fptr2);
                    fptr2=fopen("bill.txt", "w");

                   fprintf(fptr2, "%d \n%d \n%d", cust_no, total_price, no_mob);
                   }


               else
               {

                   int cust_no;     //No of customers till  now
                   int total_price;       //Total amount of money earned
                   int no_mob;      //Total no of mob sold

                    fscanf(fptr2,"%d \n%d \n%d", &cust_no, &total_price, &no_mob);
                    fclose(fptr2);

                   cust_no=cust_no+1;
                   total_price=total_price+total;
                   no_mob=no_mob+1;

                   fptr2=fopen("bill.txt", "w");

                   fprintf(fptr2, "%d \n%d \n%d", cust_no, total_price, no_mob);
               }

               fclose(fptr2);


              fptr3 = (fopen("data.txt","a"));
              fprintf(fptr3, "\nCustomer Name:-%s", m1.nm);
              fprintf(fptr3, "\n Contact Number:-%d", m1.mob);
              fprintf(fptr3, "\nPurchased Mobile:-%s", m1.a);
              fprintf(fptr3, "\nPurchased Mobile Price:-%d", m1.price);
              printf("%d\n",m1.price);

               fwrite(&m1,sizeof(m1),1,fptr3);
                  fclose(fptr3);





                printf("\n\n  ---------------- RKVP Mobile Shop  ----------------\n\n");
                printf("Final Bill Recept \n");

                printf("\n\n============================================================\n");
                printf("Customer Name :%s\n\n", m1.nm );
                printf("Contact Number :%d\n\n", m1.mob);

                printf("\n\n============================================================\n");

                printf("Mobile Model:-%s\n\n",m1.a);

                printf("Mobile Price:-%d \n\n",m1.price);

                printf("GST Amount:-%d\n\n",gst);

                printf("Final Total Price:-%d\n\n",total);

                printf("\n============================================================\n");
                fprintf(fptr, "\nTotal Price of Mobile:-%d", total);
                goto again;

                printf("\n\n Thank you ! Do visit again\n\n");
               break;

            case 2:
               
                again:
                    printf("\n\n Thanks ");
                    printf("\n Do you want purchase again.\n\n ");
                    printf("Enter your choice:");
                    printf("\n 1.yes");
                    printf("\n 2.no");
                    scanf("%d", &d);
                    switch (d)
                    {
                    case 1:

                        if (d == 1)
                         goto ma;
                        break;

                    case 2:
                        if (d == 2)
                        printf("\n\nThank you ! Visit again! Have a  nice day!\n\n");
                        break;
                    }
                } //case 2
            //switch1

        } //if
}




void display_history()
{
    FILE *fptr2;

    fptr2=fopen("bill.txt", "r");

    if(fptr2==NULL)
    {
        printf("\nNo customer history found 1111111!!");
        return;
    }

   int cust_no;     //No of customers till  now
   int total_price;      //Total amount of money earned
   int no_mob;      //Total no of mob sold

    fscanf(fptr2, "%d\n%d \n%d", &cust_no, &total_price, &no_mob);

    printf("\n\nTotal no. of customers : %d", cust_no);
    printf("\n\nTotal no. of mobiles sold : %d", no_mob);
    printf("\n\nTotal bill amount : %d",total_price);

    fclose(fptr2);

    return;
}


void display_cust()
{
    struct mobile m1;
    FILE *fptr;

    char name[20];
    printf("\nEnter customer name: ");
    scanf("%s", name);


       fptr=(fopen(name,"rb"));
        if(fptr==NULL){
            printf("File not found,New Customer");
           return                                                                                                                                                                 ;
        }
       while(fread(&m1,sizeof(m1),1,fptr)>0)
      {
    printf("%s %d %s %d",m1.nm,m1.mob,m1.a,m1.price);
      }
    fclose(fptr);

    return;
}
void display_data()
{
      FILE *fptr3 = fopen("data.txt", "r");
      char line[300];

        while (fgets(line, sizeof(line), fptr3)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
        printf("%s", line);
    }

    return;
}

