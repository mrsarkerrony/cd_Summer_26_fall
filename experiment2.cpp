#include <iostream>
using namespace std;

void function(string input)
{
    char array1[] = {'<','+','*','%'};
    char array2[] = {'"',';',',',':'};
    string array3[] = {"cout","cin","namespace","main"};



    int s = 0;
    int e = 0;

    while (e <= input.length())
    {
        if (e == input.length() || input[e] == ' ')
        {
            string temp = "";


            for (int i = s; i < e; i++)
            {
                temp += input[i];
            }

            cout << "value: " << temp << endl;


            for (int i = 0; i < 4; i++)
            {
                if (temp == array3[i])
                {
                    cout << temp << " = Keyword" << endl;
                }

            }


            if (temp.length() == 1)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (temp[0] == array1[i])
                    {
                        cout << temp << " = Operator" << endl;
                    }



                }

               /* if(temp[0]=='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
                {
                    cout<<temp<<" = Costant "<<endl;
                }*/




               for (int i = 0; i < 4; i++)
                {
                    if (temp[0] == array2[i])
                    {
                        cout << temp << " = Punctuation" << endl;
                    }
                }

                }

               s = e + 1;
          }

           e++;
    }

    }


int main()
{
    string ss = "cout < < a + b % 2.75 ;";


    function(ss);
}
