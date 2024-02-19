#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str; //={" my name is abhishek maheswari"};
    ofstream out;
    // // ofstream out("r_file_w,.txt");
    out.open("r_file_w.txt");
    cout << "Enter the string for the file " << endl;
    getline(cin, str);
    out << str;
    // // out << " my name is abhishek maheshwari ";
    out.close();

    string str1;
    ifstream in;
    in.open("r_file_w.txt");
    // instream in("r_file_w,.txt");
    getline(in, str1);
    cout << " The content of the file is : " << str1 << endl;
    // while (in.eof() == 0)
    // {
    // //     getline(in, str1);
    // //     cout << " The content of the file is : " << str1 << endl;
    // }
    in.close();
    return 0;
}