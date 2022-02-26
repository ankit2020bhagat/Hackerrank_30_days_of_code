#include <bits/stdc++.h>
using namespace std;
class Person
{
protected:
    string f_name;
    string l_name;
    int id;

public:
    Person(string _fname, string _lname, int _id)
    {
        this->f_name = _fname;
        this->l_name = _lname;
        this->id = _id;
    }
    void printPerson()
    {
        cout << "Name: " << l_name << ", " << f_name << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string _fname, string _lname, int _id, vector<int> score)
        : Person(_fname, _lname, _id)
    {
        testScores = score;
    }
    char calculate()
    {
        int sum = 0;
        for (int i = 0; i < this->testScores.size(); i++)
        {
            sum += this->testScores[i];
        }
        int avg = sum / this->testScores.size();
        if (avg >= 90 && avg <= 100)
            return 'O';
        else if (avg >= 80 && avg < 90)
            return 'E';
        else if (avg >= 70 && avg < 80)
            return 'A';
        else if (avg >= 55 && avg < 70)
            return 'P';
        else if (avg >= 40 && avg < 55)
            return 'D';
        else
            return 'T';
    }
};

int main()
{
    string f_name;
    string l_name;
    int id, l, data;
    vector<int> test;
    cin >> f_name >> l_name >> id;

    for (int i = 0; i < l; i++)
    {
        cin >> data;
        test.push_back(data);
    }
}