#include <iostream>
#include <cassert>

#define main main_disabled 

#include "business.cpp" 

#undef main 

int main()
{
    std::cout << "Test: GroceryStore::Supply()..." << std::endl;
    
    EstateOwner estateOwner;
    GroceryStore groceryStore;
    Restaurant restaurant;
    BusinessMediator mediator(estateOwner, groceryStore, restaurant);
    
    int result = groceryStore.Supply(5);
    assert(result == 5);
    
    std::cout << "✓ Test passed: Supply(5) returned " << result << std::endl;
    return 0;
}
