#include <iostream>
#include <string>

int main()
{
  int j = 3;
  for(int i = 0; i < 5; i++)
    {
        if (j == 4)
        {
            j = 0;
        }
        else
        {
           j++;
        }
    }
    std::cout << j << std::endl;
}
