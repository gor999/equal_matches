
#include<vector>
#include<iostream>
#include<string>
#include "equal_matches.hpp"

int main(){

    std::vector<int> arr{1,2,3,4,5,6,7,8,9};
    std::vector<int> arr2{10,12,13,14,15,16,17,18,9};

    equal_matches(arr, arr2);

    std::vector<std::string> names_arr{"Gexam", "Garnik", "Vaxinak", "Gvidon", "Antaram", "Haykaz", "Hambardzum", "Parandzem", "Tatul"};
    std::vector<std::string> names_arr2{"Vardan", "Vladimir", "Peto", "Hovsep", "Tatul", "Onik", "Haykaz", "Antaram",};
    equal_matches(names_arr, names_arr2);


    std::vector<std::string> names_arr3{"Artyom", "Sargis", "Pargev", "Hambo", "Varditer"};
    equal_matches(names_arr, names_arr3);

    std::vector<float> c_1{1.90,2.08,3.97,4.89,5.99,6.6787,17.21,8.41,9.999};
    std::vector<float> c_2{10.123,12.9932,13.090,14.524,1.32145,16.321,17.21,18.21,9.999};
    equal_matches(c_1, c_2);

    std::vector<char> ch_1{'a','b','c','d','e','f','g'};
    std::vector<char> ch_2{'h','i','j','k','l','m','e'};
    equal_matches(ch_1, ch_2);


    return 0;
}