# Access Modifiers

In C++, access modifiers are keywords used to control the visibility and accessibility of class members (variables and functions) from outside the class.

- Private Access Modifier: Members declared as private are only accessible from within the class itself. They are not accessible from outside the class.

- Public Access Modifier: Members declared as public are accessible from anywhere, including outside the class.


**Note** - In C++, if you do not specify an access modifier when declaring members inside a class, the default access modifier will be private. This means that all the members (variables and functions) declared within the class without an explicit access modifier will be considered as private members.



###### Task
Which of the following is a valid reason for error in the given code ?

```cpp
class Student{
    int age;
};

int main(){
    Student s;
    s.age = 10;

    return 0;
}
```