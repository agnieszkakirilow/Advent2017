// Example program
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
  int x = 50;
  int y = 50;
  int number = 347991;
  bool found = false;
  int tab[100][100] = {0};
  tab[50][50] = 1;
  for ( int i = 3; i <= number && found == false; i = i+2 )
  {
        x = x+1;
        tab[x][y] = tab[x-1][y] + tab[x-1][y+1] + tab[x][y+1] + tab[x+1][y+1] + tab[x+1][y-1] + tab[x][y-1] + tab[x-1][y-1] + tab[x+1][y];
        if ( tab[x][y] > number)
        {
            found = true;
            break;
        }
        int length = i-2;
        for (int j = 0; j < length && found == false; j++)//move up
        {
            y++;
            tab[x][y] = tab[x-1][y] + tab[x-1][y+1] + tab[x][y+1] + tab[x+1][y+1] + tab[x+1][y-1] + tab[x][y-1] + tab[x-1][y-1] + tab[x+1][y];
            //std::cout << "x=" << x << "y=" << y << "tab[x][y]=" << tab[x][y] <<std::endl;
            if (tab[x][y] > number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length + 1 && found == false; j++)//move left
        {
            x--;
            tab[x][y] = tab[x-1][y] + tab[x-1][y+1] + tab[x][y+1] + tab[x+1][y+1] + tab[x+1][y-1] + tab[x][y-1] + tab[x-1][y-1] + tab[x+1][y];
            //std::cout << "x=" << x << "y=" << y << "tab[x][y]=" << tab[x][y] <<std::endl;
            if (tab[x][y] > number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length + 1 && found == false; j++)//move down
        {
            y--;
            tab[x][y] = tab[x-1][y] + tab[x-1][y+1] + tab[x][y+1] + tab[x+1][y+1] + tab[x+1][y-1] + tab[x][y-1] + tab[x-1][y-1] + tab[x+1][y];
            //std::cout << "x=" << x << "y=" << y << "tab[x][y]=" << tab[x][y] <<std::endl;
            if (tab[x][y] > number)
            {
                found = true;
                break;
            }
        }
        for (int j = 0; j < length + 1 && found == false; j++)//move right
        {
            x++;
            tab[x][y] = tab[x-1][y] + tab[x-1][y+1] + tab[x][y+1] + tab[x+1][y+1] + tab[x+1][y-1] + tab[x][y-1] + tab[x-1][y-1] + tab[x+1][y];
            //std::cout << "x=" << x << "y=" << y << "tab[x][y]=" << tab[x][y] <<std::endl;
            if (tab[x][y] > number)
            {
                found = true;
                break;
            }
        }
  }
  std::cout << tab[x][y];
}
