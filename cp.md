# Programming syntaxes

- What is it

## Estimating efficiency (for 1 sec)

| Input size | Required time complexity |
| :--------- | :----------------------: |
| n <= 10    |          O(n!)           |
| n <= 20    |          O(2^n)          |
| n <= 500   |          O(n^3)          |
| n <= 5000  |          O(n^2)          |
| n <= 10^6  |     O(nlogn) or O(n)     |
| n is large |     O(1) or O(logn)      |

---

## include files

c++
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

#include <bits/stdc++.h> // how much does it contains?


## Optimization

c++
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);


## for each loop

c++
for (type variableName : arrayName)
{
  // code block to be executed
}


## characters

c++
isupper(ch);
islower(ch);
toupper(ch);
tolower(ch);


## string

c++
std::string str;
std::getline(std::cin, str);
str.length();


## vectors

Declaration

c++
std::vector<int> u; // Creates empty vector
std::vector<int> v(5); // Creates vector with 5 elements reserved
std::vector<int> w(5, 2); // The value 2 initialized in those elements
std::vector<int> x(w); // copie of w
std::vector<int> y{1, 2, 3, 4};


Accessing

c++
vec[idx];
ves.at(idx);

vec.begin();
vec.end();

for(auto ele : vec);


Methods

c++
vec.size();
vec.empty(); // returns is the vector is empty
vec.push_back(x); // add x at the end
vec.pop_back(); // deletes an element from the end
vec.clear(); // deletes all elements from the vector


## Methods

c++
std::sort(first, last, [comp]); // algorithm library
std::max(n1, n2); // algorithm library
std::min(n1, n2); // algorithm library


## Resources

- <https://ncduy0303.github.io/Competitive-Programming/>