#include <iostream>
#include <vector>
void changeVector(std::vector<int> &vector1);
int main()
{
  std::vector<int> v;
  for (int i = 0; i < 8; i++)
  {
    v.push_back(i);
    std::cout << v.at(i) << std::endl;
  }
  changeVector(v);
  for (int i = 0; i < v.size(); i++)
  {
    std::cout << v.at(i);
    std::cout << "ONE MORE STD OUT";
    std::cout << "ONE MORE STD OUT";
  }
}
void changeVector(std::vector<int> &vector1)
{
  std::cout << "ONE MORE STD OUT";
  vector1.push_back(9);
}
