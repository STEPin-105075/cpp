#include<iostream>

using namespace std;

extern "C"{
    int sum(int x, int y)
    {
        return x+y;
    }
}
