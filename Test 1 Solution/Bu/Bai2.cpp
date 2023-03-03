#include <iostream>
#include <fstream>

using namespace std;

struct Teacher
{
    string name;
    int year;
    float salary;
};

void input(Teacher list[], int &n)
{
    cout << "Nhap so luong giao vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Teacher " << i + 1 << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, list[i].name);
        cout << "Year of birth: ";
        cin >> list[i].year;
        cout << "Salary: ";
        cin >> list[i].salary;
    }
}

void output(Teacher list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << list[i].name << "\t" << list[i].year << "\t" << list[i].salary << endl;
    }
}

void inputFile(Teacher list[], int &n)
{
    ifstream fileIn("input.txt");
    fileIn >> n;
    for (int i = 0; i < n; i++)
    {
        fileIn.ignore();
        getline(fileIn, list[i].name);
        fileIn >> list[i].year;
        fileIn >> list[i].salary;
    }
    fileIn.close();
}

void outputFile(Teacher list[], int n)
{
    ofstream fileOut("output.txt");
    for (int i = 0; i < n; i++)
    {
        fileOut << list[i].name << "\t" << list[i].year << "\t" << list[i].salary << endl;
    }
    fileOut.close();
}

void findByName(Teacher list[], int n)
{
    string name;
    cout << "Nhap ten giao vien muon tim: ";
    cin.ignore();
    getline(cin, name);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (list[i].name == name)
        {
            cout << "YES\n";
            cout << list[i].name << "\t" << list[i].year << "\t" << list[i].salary << endl;
            check = true;
            break;
        }
    }
    if (!check)
    {
        cout << "NO\n";
    }
}

void insert(Teacher list[], int &n)
{
    int pos;
    do
    {
        cout << "Nhap vi tri muon chen: (0 < pos < " << n << "): ";
        cin >> pos;
    } while (pos <= 0 || pos >= n);

    Teacher t;
    cout << "Name: ";
    cin.ignore();
    getline(cin, t.name);
    cout << "Year of birth: ";
    cin >> t.year;
    cout << "Salary: ";
    cin >> t.salary;

    for (int i = n; i > pos; i--)
    {
        list[i] = list[i - 1];
    }
    list[pos] = t;

    n++;

    outputFile(list, n);
}

void remove(Teacher list[], int &n)
{
    int pos;
    do
    {
        cout << "Nhap vi tri muon xoa: (0 < pos < " << n << "): ";
        cin >> pos;
    } while (pos <= 0 || pos >= n);

    for (int i = pos; i < n - 1; i++)
    {
        list[i] = list[i + 1];
    }

    n--;

    outputFile(list, n);
}

void sortAsc(Teacher list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[i].salary > list[j].salary)
            {
                swap(list[i], list[j]);
            }
        }
    }

    outputFile(list, n);
}

int main()
{
    Teacher list[100];
    int n;
    while (true)
    {
        cout << "-----------------MENU---------------\n";
        cout << "1. Nhap thong tin cho n giao vien tu ban phim\n";
        cout << "2. Doc thong tin tu file input.txt\n";
        cout << "3. In ra thong tin giao vien\n";
        cout << "4. Ghi thong tin giao vien ra file output.txt\n";
        cout << "5. Tim kiem giao vien theo ma hang\n";
        cout << "6. Chen giao vien\n";
        cout << "7. Xoa giao vien\n";
        cout << "8. Sap xep danh sach giao vien\n";
        cout << "0. Thoat !\n";
        cout << "-------------------------------------\n";
        cout << "Nhap lua chon :";
        int lc;
        cin >> lc;

        switch (lc)
        {
        case 1:
            input(list, n);
            break;
        case 2:
            output(list, n);
            break;
        case 3:
            inputFile(list, n);
            break;
        case 4:
            outputFile(list, n);
            break;
        case 5:
            findByName(list, n);
            break;
        case 6:
            insert(list, n);
            break;
        case 7:
            remove(list, n);
            break;
        case 8:
            sortAsc(list, n);
            break;
        case 0:
            return 0;
        default:
            cout << "Lua chon k co san!\n";
            break;
        }
    }
    return 0;
}