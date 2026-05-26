#include <gtest/gtest.h>
#include <cstdint>

#define main main_disabled
#include "business.cpp"
#undef main

TEST(GroceryStoreTest, SupplyReturnsCorrectStock)
{
    EstateOwner estateOwner;
    GroceryStore groceryStore;
    Restaurant restaurant;
    BusinessMediator mediator(estateOwner, groceryStore, restaurant);
    
    int result = groceryStore.Supply(5);
    
    EXPECT_EQ(result, 5);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
