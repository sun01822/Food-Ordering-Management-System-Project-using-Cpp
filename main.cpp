#include <bits/stdc++.h>
using namespace std;

void heading();
void menu();
void choice();
void specailSelection();
void flavouredBelgianFries();
void milkTeaSeries();
void soloPizzaPedrico();
void assignValue();
void payment();
void areYouWantSomething();

int total;
bool paid=false;
map<int, int> mp1;
map<int, int> mp2;
map<int, int> mp3;
map<int, int> mp4;



int main()
{
    assignValue();
	heading();
	while(1)
	{
	    if(paid)
            break;
		menu();
	}
	return 0;
}

void heading()
{
	cout << "\t\t\tWELCOME TO Coolers Delight" << endl;
	cout << "\t\tA Taste of the creamiest!" << endl;
}

void menu()
{
	cout << "\n\t\t\t\t\tMenu" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\t[1] SPECIAL SELECTIONS" << endl;
	cout << "\t\t\t[2] FLAVORED BELGIAN FRIES" << endl;
	cout << "\t\t\t[3] MILK TEA SERIES" << endl;
	cout << "\t\t\t[4] 5\" SOLO PIZZA PEDRICO\'S" << endl;
	choice();
}

void choice()
{
	int option;
	cout << "\t\t\tEnter your choice: ";
	cin >> option;
	if(option==1)
		specailSelection();
	else if(option==2)
		flavouredBelgianFries();
	else if(option==3)
		milkTeaSeries();
	else if(option==4)
		soloPizzaPedrico();
	else
	{
		cout << "\t\t\tPlease enter correct input" << endl;
		choice();
	}
}

void specailSelection()
{
    int option;
    int quantity;
    int subtotal=0;
    cout << "\n\t\t\tSpecail Selection Sub-Menu:" << endl;
    cout << "\t\t\t[1] HALO-HALO (SPECIAL)   |    P70" << endl;
    cout << "\t\t\t[2] HALO-HALO (REGULAR)   |    P60" << endl;
    cout << "\t\t\t[3] MANGO GRAHAM FLOAT    |    P78" << endl;
    cout << "\t\t\t[4] MAIS CON YELO         |    P78" << endl;
    cout << "\t\t\tEnter your choice: ";
    cin >> option;
    switch(option)
    {
        case 1:
        {
            cout << "\t\t\tHALO-HALO (SPECIAL) P70 - QTY: ";
            cin >> quantity;
            subtotal+=(mp1[1]*quantity);
            break;
        }
        case 2:
        {
            cout << "\t\t\t[2] HALO-HALO (REGULAR) P60 - QTY: ";
            cin >> quantity;
            subtotal+=(mp1[2]*quantity);
            break;
        }
        case 3:
        {
            cout << "\t\t\t[3] MANGO GRAHAM FLOAT P78 - QTY: ";
            cin >> quantity;
            subtotal+=(mp1[3]*quantity);
            break;
        }
        case 4:
        {
            cout << "\t\t\t[4] MAIS CON YELO P78 - QTY: ";
            cin >> quantity;
            subtotal+=(mp1[4]*quantity);
            break;
        }
        default:
        {
            cout << "\t\t\tPlease enter correct input" << endl;
            specailSelection();
        }
    }
    cout << "\t\t\tSubbtotal: " << subtotal << endl;
    total+=subtotal;
    areYouWantSomething();
}

void flavouredBelgianFries()
{
    int option;
    int quantity;
    int subtotal=0;
    cout << "\n\t\t\tFLAVORED BELGIAN FRIES (CHEESE /  BBQ  /  SOUR CREAM) Sub-Menu:" << endl;
    cout << "\t\t\t[1] MEDIUM                |    P45" << endl;
    cout << "\t\t\t[2] LARGE                 |    P60" << endl;
    cout << "\t\t\t[3] XLARGE                |    P65" << endl;
    cout << "\t\t\t[4] XXL                   |    P90" << endl;
    cout << "\t\t\t[5] XXXL                  |    P110" << endl;
    cout << "\t\t\t[6] POTATO TWISTER        |    P38" << endl;
    cout << "\t\t\tEnter your choice: ";
    cin >> option;
    switch(option)
    {
        case 1:
        {
            cout << "\t\t\t[1] MEDIUM P45 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[1]*quantity);
            break;
        }
        case 2:
        {
            cout << "\t\t\t[2] LARGE P60 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[2]*quantity);
            break;
        }
        case 3:
        {
            cout << "\t\t\t[3] XLARGE P65 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[3]*quantity);
            break;
        }
        case 4:
        {
            cout << "\t\t\t[4] XXL P90 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[4]*quantity);
            break;
        }
        case 5:
        {
            cout << "\t\t\t[5] XXXL P110 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[5]*quantity);
            break;
        }
        case 6:
        {
            cout << "\t\t\t[6] POTATO TWISTER P38 - QTY: ";
            cin >> quantity;
            subtotal+=(mp2[6]*quantity);
            break;
        }
        default:
        {
            cout << "\t\t\tPlease enter correct input" << endl;
            specailSelection();
        }
    }
    cout << "\t\t\tSubbtotal: " << subtotal << endl;
    total+=subtotal;
    areYouWantSomething();
}

void milkTeaSeries()
{
    int option;
    int quantity;
    int subtotal=0;
    cout << "\n\t\t\tMILK TEA SERIES Sub-Menu:" << endl;
    cout << "\t\t\t[1] WINTER MELON                   |    P75" << endl;
    cout << "\t\t\t[2] TARO                           |    P75" << endl;
    cout << "\t\t\t[3] MATCHA                         |    P75" << endl;
    cout << "\t\t\t[4] CHOCOLATE                      |    P75" << endl;
    cout << "\t\t\t[5] DARK CHOCO CREAM CHEESE        |    P80" << endl;
    cout << "\t\t\t[6] RED VELVET CREAM CHEESE        |    P80" << endl;
    cout << "\t\t\t[7] OREO CHEESECAKE                |    P80" << endl;
    cout << "\t\t\tEnter your choice: ";
    cin >> option;
    switch(option)
    {
        case 1:
        {
            cout << "\t\t\t[1] WINTER MELON P75 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[1]*quantity);
            break;
        }
        case 2:
        {
            cout << "\t\t\t[2] TARO P75 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[2]*quantity);
            break;
        }
        case 3:
        {
            cout << "\t\t\t[3] MATCHA P75 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[3]*quantity);
            break;
        }
        case 4:
        {
            cout << "\t\t\t[4] CHOCOLATE P75 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[4]*quantity);
            break;
        }
        case 5:
        {
            cout << "\t\t\t[5] DARK CHOCO CREAM CHEESE P80 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[5]*quantity);
            break;
        }
        case 6:
        {
            cout << "\t\t\t[6] RED VELVET CREAM CHEESE P80 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[6]*quantity);
            break;
        }
         case 7:
        {
            cout << "\t\t\t[6] OREO CHEESECAKE P80 - QTY: ";
            cin >> quantity;
            subtotal+=(mp3[7]*quantity);
            break;
        }
        default:
        {
            cout << "\t\t\tPlease enter correct input" << endl;
            specailSelection();
        }
    }
    cout << "\t\t\tSubbtotal: " << subtotal << endl;
    total+=subtotal;
    areYouWantSomething();
}

void soloPizzaPedrico()
{
    int option;
    int quantity;
    int subtotal=0;
    cout << "\n\t\t\t5\" SOLO PIZZA PEDRICO\'S Sub-Menu:" << endl;
    cout << "\t\t\t[1] HAM + PINEAPPLE & CHEEEZ       |    P55" << endl;
    cout << "\t\t\t[2] HAM & CHEEZ                    |    P55" << endl;
    cout << "\t\t\t[3] CHORIZO & CHEEZ                |    P55" << endl;
    cout << "\t\t\t[4] CHEEZ & CHEEZ                  |    P55" << endl;
    cout << "\t\t\tEnter your choice: ";
    cin >> option;
    switch(option)
    {
        case 1:
        {
            cout << "\t\t\tHAM + PINEAPPLE & CHEEEZ P55 - QTY: ";
            cin >> quantity;
            subtotal+=(mp4[1]*quantity);
            break;
        }
        case 2:
        {
            cout << "\t\t\t[2] HAM & CHEEZ P55 - QTY: ";
            cin >> quantity;
            subtotal+=(mp4[2]*quantity);
            break;
        }
        case 3:
        {
            cout << "\t\t\t[3] CHORIZO & CHEEZ P55 - QTY: ";
            cin >> quantity;
            subtotal+=(mp4[3]*quantity);
            break;
        }
        case 4:
        {
            cout << "\t\t\t[4] CHEEZ & CHEEZ P55 - QTY: ";
            cin >> quantity;
            subtotal+=(mp4[4]*quantity);
            break;
        }
        default:
        {
            cout << "\t\t\tPlease enter correct input" << endl;
            specailSelection();
        }
    }
    cout << "\t\t\tSubbtotal: " << subtotal << endl;
    total+=subtotal;
    areYouWantSomething();
}


void assignValue()
{
    mp1.insert(make_pair(1,70));
    mp1.insert(make_pair(2,60));
    mp1.insert(make_pair(3,78));
    mp1.insert(make_pair(4,78));

    mp2.insert(make_pair(1,45));
    mp2.insert(make_pair(2,55));
    mp2.insert(make_pair(3,65));
    mp2.insert(make_pair(4,90));
    mp2.insert(make_pair(5,110));
    mp2.insert(make_pair(6,38));

    mp3.insert(make_pair(1,75));
    mp3.insert(make_pair(2,75));
    mp3.insert(make_pair(3,75));
    mp3.insert(make_pair(4,75));
    mp3.insert(make_pair(5,80));
    mp3.insert(make_pair(6,80));
    mp3.insert(make_pair(7,80));

    mp4.insert(make_pair(1,55));
    mp4.insert(make_pair(2,55));
    mp4.insert(make_pair(3,55));
    mp4.insert(make_pair(4,55));
}

void payment()
{
    int cash;
    cout << "\n\t\t\t[Payment]" << endl;
    cout << "\t\t\tTotal: " << total << endl;
    while(1)
    {
        cout << "\t\t\tEnter Payment(Cash): ";
        cin >> cash;
        if(cash<total)
        {
            cout << "\t\t\tInsufficient Cash!!!" << endl;
        }
        else if(cash>=total)
        {
            cout << "\t\t\tChange: " << cash-total << endl;
            break;
        }
    }
    cout << "\t\t\tThank you for shopping in Coolers Delight" << endl;
    cout << "\t\t\t-----------------------------------------" << endl;
    paid = true;
}

void areYouWantSomething()
{
    char ch;
    while(1){
        cout << "\t\t\tDo you want to puchase another product?(Y/N): ";
        cin >> ch;
        if(ch=='Y')
        {
            menu();
            break;
        }
        else if(ch=='N')
        {
            payment();
            break;
        }
        else
        {
            cout << "\t\t\tPlease enter correct input" << endl;
        }
    }
}

