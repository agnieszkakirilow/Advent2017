// Example program
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
  int x = 0;
  int y = 0;
  int circle = 1;
  int number = 347991;
  bool found = false;
  for ( int i = 3; i <= number && found == false; i = i+2 )
  {
      if ( i*i >= number)
      {
        x = circle;
        y = -circle;
        if ( i*i == number)
        {
            found = true;
            break;
        }
        int length = i;
        int searched_number = i*i;
        for (int j = 0; j < length - 1 && found == false; j++)//move left
        {
            searched_number --;
            x--;
            //std::cout << "x=" << x << "y=" << y << "searched_number=" << searched_number <<std::endl;
            if (searched_number == number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length - 1 && found == false; j++)//move up
        {
            searched_number --;
            y++;
            //std::cout << "x=" << x << "y=" << y << "searched_number=" << searched_number <<std::endl;
            if (searched_number == number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length - 1 && found == false; j++)//move right
        {
            searched_number --;
            x++;
            //std::cout << "x=" << x << "y=" << y << "searched_number=" << searched_number <<std::endl;
            if (searched_number == number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length - 2 && found == false; j++)//move down
        {
            searched_number --;
            y--;
            //std::cout << "x=" << x << "y=" << y << "searched_number=" << searched_number <<std::endl;
            if (searched_number == number)
            {
                found = true;
                break;
            }
        }


      }
        circle++;
  }
  int distance = abs(x)+abs(y);
  std::cout << distance;
}
