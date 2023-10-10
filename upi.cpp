#include<iostream>
using namespace std;

class upi
{
public:
    int upi_id, upi_id_p2;
    float account_balance, account_balance_p2;
    float remaining_balance, remaining_balance_p2;
    string account_holder_name, account_holder_name_p2;
    float mtransfer;
    float eamount;
    
public:
    void display();
    void person();
    void mtrans();
};

void upi::display()
{
    cout << "Enter Account Holder Name:" << endl;
    cin >> account_holder_name;
    cout << "Enter Account Balance:" << endl;
    cin >> account_balance;
    cout << "Enter UPI id:" << endl;
    cin >> upi_id;
}

void upi::person()
{
    cout << "Enter Account Holder Name 2:" << endl;
    cin >> account_holder_name_p2;
    cout << "Enter Account Balance 2:" << endl;
    cin >> account_balance_p2;
    cout << "Enter UPI id 2:" << endl;
    cin >> upi_id_p2;
}

void upi::mtrans()
{
    cout << "Enter Amount to Transfer:" << endl;
    cin >> eamount;
    if (eamount <= account_balance)
    {
        account_balance -= eamount;
        account_balance_p2 += eamount;
        cout << "Money Transferred Successfully!" << endl;
    }
    else
    {
        cout << "Insufficient Balance for Transfer!" << endl;
    }
}

int main()
{
    upi u;
    u.display();
    u.person();
    u.mtrans();

    cout << "Updated Balances:" << endl;
    cout << u.account_holder_name << ": " << u.account_balance << endl;
    cout << u.account_holder_name_p2 << ": " << u.account_balance_p2 << endl;

    return 0;
}



