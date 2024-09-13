/*
Title: 
File Name: Chp2Exc12.cpp
Programmer: Kason Steiner
Date: 09/2024

A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
• The approximate number of customers in the survey who purchase one or more energy drinks per week.
• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so that the user can enter the number of the number of customers that were surveyed 
*/

#include <iostream>
using namespace std;

int main() { 
  
  int customers = 16500;
  //15% of those surveyed drink one or more energy drinks per week 
  int energyDrinks = customers * 0.15;
  //58% of those purchasing denrgy drinks prefer citrus flavored
  int citrusFlavored = energyDrinks * 0.58;

  cout << "Approximate number of customers in the survey who purchase one or more energy drinks per week: " << energyDrinks << endl;
  cout << "Approximate number of customers in the survey who prefer citrus flavored energy drinks: " << citrusFlavored << endl;
  
           
 return 0;           
}