#include <iostream>
using namespace std;

void functionComment(string str)
{
    if (str.substr(0, 2) == "//")
    {
        cout << "Single Line Comment" << endl;
    }
    else if (str.substr(0, 2) == "/*" &&
             str.substr(str.length() - 2, 2) == "*/")
    {
        cout << "Multiple Line Comment" << endl;
    }
    else
    {
        cout << "Not a Comment" << endl;
    }
}

void function2(string ss, char cc[], int size)
{
    for (char ch : ss)
    {
        if (ch == '+' || ch == '-' || ch == '%' ||
            ch == '*' || ch == '=' || ch == '/')
        {
            if (ch == '+')
                cout << "Plus => " << ch << endl;

            if (ch == '=')
                cout << "Equal => " << ch << endl;

            if (ch == '%')
                cout << "Percentage => " << ch << endl;

            if (ch == '/')
                cout << "Divide => " << ch << endl;

            if (ch == '-')
                cout << "Minus => " << ch << endl;

            if (ch == '*')
                cout << "Multiply => " << ch << endl;
        }
    }
}



void function3(string ss)
{
     if (ss.substr(0, 2) == "//") {

        cout << "Single Line Comment" << endl;
      }
      else if (ss.substr(0,2)=="/*" && ss.substr(ss.length()-2,2)=="*/")
      {
          cout<<"Multiple Line Comment"<<endl;
      }

    else {

          cout << "Not a Comment" << endl;
    }


}


void functionIdentifier(string x)
{
    char spChar[]={'@','!','#','%','$','^','&'};
    if (x[0]=='_')
    {
        cout<<" Identifier"<<endl;

    }
    else{cout<<"Not Identifier"<<endl;}

     for (int i = 1; i < x.length(); i++)
    {
        if (x[i] == ' ')
        {
            cout << "Not Identifier" << endl;

        }


        for (int j = 0; j < 7; j++)
        {
            if (x[i] == spChar[j])
            {
                cout << "Not Identifier" << endl;

            }
        }
    }
}


void function5(int aa[], int size)
{
    int sum = 0;
    float av;

    for(int i = 0; i < size; i++)
    {
        sum = sum + aa[i];
    }

    av = (float)sum / size;

    cout << "Result: " << av << endl;
}



void function6(int a[],int size=4)
{
     int max=a[0];
    int min =a[0];

    for(int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];

        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<"MAx :"<<max<<endl;

    cout<<"Min :"<<min<<endl;
}

void function7(string x,string y)
{
    string z=x+y;
    cout<<"Full Name :"<<z<<endl;
}

int main()
{
    //*******task_1
    string str;

    cout << "Enter a comment: ";
    getline(cin, str);

    functionComment(str);






    //*******Task_2

     string dd = "3+5=8";
    char operators[] = {'+', '-', '%', '*', '=', '/'};

    //function2(dd, operators, 6);





    //******task_3

     string st;

    cout << "Enter a comment: ";
     getline(cin, st);

    //function3(str);





    //******task_4

    string ss;
    cout<<"Enter The Word :";
    getline(cin, ss);

    functionIdentifier(ss);






    //*******task_5

     int aa[4] = {1, 2, 3, 4};

    int size = sizeof(aa) / sizeof(aa[0]);

    //function5(aa, size);







    //********task_6

    int a[4]={2,4,1,5};


     size = sizeof(a) / sizeof(a[0]);

    //function6(a,4);






    //*******task_7
     string f1="Rabby ";
    string f2="Sarker";
    //function7(f1,f2);
}

