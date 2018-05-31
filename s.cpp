#include <iostream>
#include <string>
using namespace std;

int main()
{
 char a = 'a';
 int num;
 string name;
 cout << "Welcome to the WarlockSecurity\n";
 cout << "Can I have your name please: ";
 cin >> name;
 cout << "\nHello " << name << " Here is the list of options you can choose from:\n";
 cout << "1. Encyption 2. Decyption \n";
 cout << "Type in the number you want to use today: ";
 cin >> num;
 if(num == 1)
 {
  //string arr[9][3];
     string message;
  int x[3][3] = {1,2,3,4,5,6,7,8,9};
     cout << "You have entered the Encyption ";
  cout << endl;
     cout << "Before we begin I will be printing out the entire numbers corresponding to the letters in the alphabet";
  cout << endl;
     cout << "0 = space, 1 = a, 2 = b, 3 = c, 4 = d, 5 = e, 6 = f \n";
     cout << "7 = g, 8 = h, 9 = i, 10 = j, 11 = k, 12 = L, 13 = M \n";
     cout << "14 = N, 15 = O, 16 = P, 17 = Q, 18 = R, 19 = S, 20 = T \n";
     cout << "21 = U, 22 = V, 23 = W, 24 = X, 25 = Y, 26 = Z \n";
     cout << "Now convert your message into actual message into the numbers";
     getline(cin, message);
     string m = message;
      
//  for(int x= 0; x < 3; x++)
//  {
//   for(int y = 0; y < 10; y++)
//   {
//    if(x == 0 && y == 0)
//    {
//     arr[y][x] = "0 = space";
//    }
//    else if(x == 0 && y < 10)
//    {
//     for(char a; a < 10; a++)
//     {
//         arr[y][x] = a += "1-9";
//     }
//    }
//    else if(x == 1 && y < 10)
//    {
//        for(char j; j < 10; j++)
//        {
//            arr[y][x] = j += "10-19";
//        }
//    }
//    else if(x == 2 && y < 8)
//    {
//        for(char t; t < ; t++)
//        {
//            arr[y][x] = t += "20-27";
//        }
//    }
//   }
//  }
//  for(int a = 0; a < 3; a++)
//  {
//   for(int b = 0; b < 10; b++)
//   {
//    cout << arr[b][a];
//   }
//  }
 }

 else
 {
 int t[3][3];
 for(int x = 0; x < 3; x++)
 {
  for(int y = 0; y < 3; y++)
  {
   if(x == 0 && y == 0)
   {
    t[x][y] = 1;
   }
   else if(x == 1 && y == 1)
   {
    t[x][y] = 1;
   }
   else if(x == 2 && y == 2)
   {
    t[x][y] = 1;
   }
   else
   {
    t[x][y] = 0;
   }
  }
 }
 for(int i = 0; i < 3; i++)
 {
  for(int y = 0; y < 3; y++)
  {
  cout << t[i][y];
  } 
  cout << endl;
 }
 }
return 0;
}
