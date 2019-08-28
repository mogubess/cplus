#include <iostream>
#include <array>

class Test {
 private:
  int a;
  
 public:
  Test() : a(5){};
  int get(){return a;};
};



int main()
{
  Test *te = new Test();
  auto ttt = te->get();
  std::cout << "te=" << ttt << std::endl;
  
  std::array<int, 3> arr = { 3, 4, 2 };
  std::array<int, 4> arr1 = { 73, 64, 32, 10 };
  std::array<int, 3> arr2 = { 3, 4, 5 };
  for(auto it = arr.begin(); it != arr.end(); ++it) std::cout << *it << ", ";

  if( arr == arr2 ){
    std::cout << "equal" << std::endl;
  }
  else{
    std::cout << "not equal" << std::endl;
  }

  //try catch
  try{
    auto a = arr.at(2);
    std::cout << "a=" << a << std::endl;
  }
  catch (const std::logic_error& e){
    std::cout << e.what() << std::endl;
    std::exit(1);
  }

  
  return 0;
}
