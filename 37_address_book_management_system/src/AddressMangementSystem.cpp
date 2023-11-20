#include "iostream"
#include "string"
#include <random>
using namespace std;

#define MAX 1000

struct Contact
{
    string name;
    string sex;
    int age;
    long phone_number;
    string address;
};

struct AddressBooks
{
    Contact contact[MAX];

    int Size = 0;
};

void add_contact(AddressBooks *address)
{
    if (address->Size == MAX)
    {
        cout << "The address book is full and cannot be added" << endl;
    }
    cout << "please enter the name" << endl;
    cin >> address->contact[address->Size].name;
    cout << "please enter the sex" << endl;
    cin >> address->contact[address->Size].sex;
    string sex;
    while (true)
    {
        if (address->contact[address->Size].sex == "male" || address->contact[address->Size].sex == "female")
        {
            sex = address->contact[address->Size].sex;
            break;
        }
        else
        {
            cout << "Only can input male or female" << endl;
            cin >> address->contact[address->Size].sex;
        }
    }
    cout << "please enter the age" << endl;
    cin >> address->contact[address->Size].age;
    cout << "please enter the phone number" << endl;
    cin >> address->contact[address->Size].phone_number;
    cout << "please enter the address" << endl;
    cin >> address->contact[address->Size].address;
    cout << "Add successfully" << endl;
    address->Size++;
    system("cls");
}

void show_contacts(AddressBooks *address)
{
    if (address->Size == 0)
    {
        cout << "No Contacts" << endl;
    }
    else
    {
        cout << "name   "
             << " sex   "
             << " age    "
             << " phone number    "
             << "     address " << endl;
        for (int i = 0; i < address->Size; i++)
        {
            cout << " " << address->contact[i].name << "\t"
                 << " " << address->contact[i].sex << "\t"
                 << " " << address->contact[i].age << "\t"
                 << " " << address->contact[i].phone_number << "\t\t"
                 << "   " << address->contact[i].address << endl;
        }
    }
    system("pause");
    system("cls");
}

int find_contact(AddressBooks *address, string name)
{
    for (int i = 0; i < address->Size; i++)
    {
        if (address->contact[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

void delete_contact(AddressBooks *address)
{
    string name;
    cout << "Please enter the contact you want to delete" << endl;
    cin >> name;

    if (find_contact(address, name) == -1)
        cout << "No trace of this person" << endl;
    else
    {
        for (int i = find_contact(address, name); i < address->Size; i++)
        {
            address->contact[i] = address->contact[i + 1];
        }
        address->Size--;
        cout << "delete success" << endl;
    }
    system("pause");
    system("cls");
}

void find_contact(AddressBooks *address)
{
    string name;
    cout << "Please enter the contact you want to find" << endl;
    cin >> name;

    if (find_contact(address, name) == -1)
        cout << "No trace of this person" << endl;
    else
    {
        cout << "name   "
             << " sex   "
             << " age    "
             << " phone number    "
             << "     address " << endl;

        cout << " " << address->contact[find_contact(address, name)].name << "\t"
             << " " << address->contact[find_contact(address, name)].sex << "\t"
             << " " << address->contact[find_contact(address, name)].age << "\t"
             << " " << address->contact[find_contact(address, name)].phone_number << "\t\t"
             << "   " << address->contact[find_contact(address, name)].address << endl;
    }
    system("pause");
    system("cls");
}

void modify_contact(AddressBooks *address)
{
    string name;
    cout << "Please enter the contact you want to modify" << endl;
    cin >> name;

    if (find_contact(address, name) == -1)
        cout << "No trace of this person" << endl;
    else
    {
        cout << "please enter the name" << endl;
        cin >> address->contact[find_contact(address, name)].name;
        cout << "please enter the sex" << endl;
        cin >> address->contact[find_contact(address, name)].sex;
        string sex;
        while (true)
        {
            if (address->contact[find_contact(address, name)].sex == "male" || address->contact[find_contact(address, name)].sex == "female")
            {
                sex = address->contact[find_contact(address, name)].sex;
                break;
            }
            else
            {
                cout << "Only can input male or female" << endl;
                cin >> address->contact[find_contact(address, name)].sex;
            }
        }
        cout << "please enter the age" << endl;
        cin >> address->contact[find_contact(address, name)].age;
        cout << "please enter the phone number" << endl;
        cin >> address->contact[find_contact(address, name)].phone_number;
        cout << "please enter the address" << endl;
        cin >> address->contact[find_contact(address, name)].address;
        cout << "Modify successfully" << endl;
    }
    system("pause");
    system("cls");
}

void clear_contact(AddressBooks *address)
{
    address->Size = 0;
    cout << "Address book cleared" << endl;
    system("pause");
    system("cls");
}

void show_menu()
{
    cout << "**************************************" << endl;
    cout << "***** 1. Add contact\t\t *****" << endl;
    cout << "***** 2. Show contacts\t\t *****" << endl;
    cout << "***** 3. Delete contact\t\t *****" << endl;
    cout << "***** 4. Find a contact\t\t *****" << endl;
    cout << "***** 5. Modify the contact\t *****" << endl;
    cout << "***** 6. Clear contacts\t\t *****" << endl;
    cout << "***** 0. Exit address book\t *****" << endl;
    cout << "**************************************" << endl;
}

int main()
{
    AddressBooks ads;
    int select = 0;
    while (true)
    {
        show_menu();

        cin >> select;
        switch (select)
        {
        case 0:
            cout << "Welcome next use" << endl;
            return 0;
            break;
        case 1:
            add_contact(&ads);
            break;
        case 2:
            show_contacts(&ads);
            break;
        case 3:
            delete_contact(&ads);
            break;
        case 4:
            find_contact(&ads);
            break;
        case 5:
            modify_contact(&ads);
            break;
        case 6:
            clear_contact(&ads);
            break;

        default:
            break;
        }
    }

    return 0;
}