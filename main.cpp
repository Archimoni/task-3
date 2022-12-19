#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num = 0;
    int i;
    string  s, stroka;
    ifstream file;
    file.open("in1.txt");
    cout << "Enter your string: ";
    cin >> s;
    while (!file.eof()) {
        num++;
        getline(file,stroka);
        i = stroka.find(s);
        if (i != -1)
        {
            cout << num << endl;
        }


    }
    file.close();
    return 0;


}