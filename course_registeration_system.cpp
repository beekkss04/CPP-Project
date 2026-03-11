#include <iostream>
#include <string>

using namespace std;

struct Course
{
    string code;
    string name;
    int capacity;
    int enrolled;
};

Course courses[5]{
    {"CS10x", "Data Science", 3, 0},
    {"CS11x", "Web Development", 2, 0},
    {"CS12x", "Artificial Intelligence", 2, 0},
    {"CS13x", "Cyber Security", 3, 0},
    {"CS14x", "Computer Science Foundation", 4, 0}};

string registercourse[5];
int regcount = 0;

void viewcourse()
{
    cout << "\nAvailable Courses\n";

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ": "
             << courses[i].code << " - "
             << courses[i].name
             << " | Seats left = "
             << courses[i].capacity - courses[i].enrolled
             << endl;
    }
}

void registerCourse()
{

    if (regcount >= 5)
    {
        cout << "Maximum course limit reached\n";
        return;
    }

    int c;

    viewcourse();

    cout << "Enter Sr. No. of course to register: ";
    cin >> c;

    c--;

    if (c < 0 || c >= 5)
    {
        cout << "Invalid course number\n";
        return;
    }

    for (int i = 0; i < regcount; i++)
    {
        if (registercourse[i] == courses[c].code)
        {
            cout << "You already registered this course\n";
            return;
        }
    }

    if (courses[c].enrolled >= courses[c].capacity)
    {
        cout << "Seats not available\n";
        return;
    }

    courses[c].enrolled++;

    registercourse[regcount] = courses[c].code;
    regcount++;

    cout << "Registered successfully\n";
    cout << "Course Code: " << courses[c].code << endl;
}

void viewRegistered()
{

    if (regcount == 0)
    {
        cout << "Not registered for any course\n";
        return;
    }

    cout << "\nYour Courses:\n";

    for (int i = 0; i < regcount; i++)
    {
        cout << registercourse[i] << endl;
    }
}

void dropCourse()
{
    if (regcount == 0)
    {
        cout << "No registered courses\n";
        return;
    }

    cout << "\nYour Registered Courses:\n";

    for (int i = 0; i < regcount; i++)
    {
        cout << i + 1 << ": " << registercourse[i] << endl;
    }

    int c;

    cout << "Enter Sr. No. of course to drop: ";
    cin >> c;

    c--;

    if (c < 0 || c >= regcount)
    {
        cout << "Invalid choice\n";
        return;
    }

    string code = registercourse[c];

    for (int i = 0; i < 5; i++)
    {
        if (courses[i].code == code)
        {
            courses[i].enrolled--;
        }
    }

    for (int i = c; i < regcount - 1; i++)
    {
        registercourse[i] = registercourse[i + 1];
    }

    regcount--;

    cout << "Course dropped successfully\n";
}

int main()
{

    int choice;

    while (true)
    {

        cout << "\n========================================\n";
        cout << "   Course Registration System\n";
        cout << "========================================\n";
        cout << "1. View Courses\n";
        cout << "2. Register Course\n";
        cout << "3. Drop Course\n";
        cout << "4. View My Registered Courses\n";
        cout << "5. Exit\n";
        cout << "-------------------------------------------\n";
        cout << "Enter your choice: ";

        cin >> choice;
        if (choice == 5)
        {
            cout << "Exiting...\n";
            break;
        }

        switch (choice)
        {

        case 1:
            viewcourse();
            break;

        case 2:
            registerCourse();
            break;

        case 3:
            dropCourse();
            break;

        case 4:
            viewRegistered();
            break;

        default:
            cout << "Invalid choice\n";
        }
    }

    return 0;
}