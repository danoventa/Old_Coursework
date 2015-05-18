//
//  main.cpp
//  Test
//
//  Created by Daniel A. Noventa on 2/5/14.
//  Copyright (c) 2014 Noventa Foundation. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int genRandom();

int main(int argc, const char * argv[])
{
    srand(time_t(NULL));

    std::cout << "Hello, World! Feed me some numbers!\n" << std::endl;
    std::cout << "You are to guess the 3 digin number." << std::endl;

    int first, second, third;
    int mFirst, mSecond, mThird;
    
    std::cout << "First: " ;
    std::cin >> first;
    std::cout << std::endl << "Second: " ;
    std::cin >> second;
    std::cout << std::endl << "Third: " ;
    std::cin >> third;
    
    mFirst = genRandom();
    mSecond = genRandom();
    mThird = genRandom();
    
    for (int i = 0; (i < 10 && (first != mFirst && second != mSecond && third != mThird)); ++i)
    {
        if (first != mFirst)
        {
            std::cout << "Your First number is Incorrect" << std::endl;
            std::cout << "Enter the First Number: " << std::endl;
            std::cin >> first;
        }
        if (second != mSecond)
        {
            std::cout << "Your Second number is Incorrect" << std::endl;
            std::cout << "Enter the Second Number: " << std::endl;
            std::cin >> second;
        }
        if (third != mThird)
        {
            std::cout << "Your Third number is Incorrect" << std::endl;
            std::cout << "Enter the Third Number: " << std::endl;
            std::cin >> third;
        }
        std::cout << i << std::endl;
    }
    
    std::cout << "Your Numbers" << std::endl;
    std::cout << first << second << third << std::endl;
    
    std::cout << "Correct Numbers" << std::endl;
    std::cout << mFirst << mSecond << mThird << std::endl;
    
    return 0;
}

int genRandom()
{
    return (rand() % 10);
}